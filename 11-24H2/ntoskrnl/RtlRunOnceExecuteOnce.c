/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1409473B0
 * Callers:
 *     LdrpInitMuiCrits @ 0x1402DCF84 (LdrpInitMuiCrits.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     ExPoolSetLimit @ 0x140652BF8 (ExPoolSetLimit.c)
 *     ExQueryBootEntropyInformation @ 0x1406F73C4 (ExQueryBootEntropyInformation.c)
 *     ExpCheckTestsigningEnabled @ 0x1406F8F98 (ExpCheckTestsigningEnabled.c)
 *     SdbGetIndex @ 0x1409453D4 (SdbGetIndex.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409470EC (ExCheckFullProcessInformationAccess.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140947224 (SdbpGetStringTableItemFromStringRef.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140A80858 (RtlpLogCapabilityCheckLatency.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9BEA8 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpRunOnceWaitForInit @ 0x1407871D8 (RtlpRunOnceWaitForInit.c)
 *     RtlRunOnceComplete @ 0x140A4E140 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 Value; // rax
  NTSTATUS v9; // ebx
  signed __int64 v11; // rcx
  signed __int64 v12; // rcx
  int v13; // edi
  PVOID v14; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Value = RunOnce->Value;
  if ( (RunOnce->Value & 3) == 2 )
  {
LABEL_2:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v11 = Value & 3;
        if ( (Value & 3) == 0 )
          break;
        if ( v11 != 1 )
        {
          if ( v11 == 3 )
          {
            v13 = -1073741584;
            goto LABEL_10;
          }
          goto LABEL_2;
        }
        Value = RtlpRunOnceWaitForInit(Value, (volatile signed __int64 *)RunOnce);
      }
      v12 = Value;
      Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Value);
    }
    while ( Value != v12 );
    if ( !(unsigned int)guard_dispatch_icall_no_overrides(RunOnce, Parameter) )
    {
      v9 = -1073741823;
      v13 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v13 < 0 )
        goto LABEL_10;
      goto LABEL_5;
    }
    if ( Context )
      v14 = *Context;
    else
      v14 = 0LL;
    v13 = RtlRunOnceComplete(RunOnce, 0, v14);
    if ( v13 < 0 )
    {
LABEL_10:
      KeLeaveCriticalRegionThread();
      RtlRaiseStatus(v13);
    }
  }
  v9 = 0;
LABEL_5:
  KeLeaveCriticalRegionThread();
  return v9;
}
