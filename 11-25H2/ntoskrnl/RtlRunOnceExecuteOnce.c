/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x140825180
 * Callers:
 *     LdrpInitMuiCrits @ 0x1402F28A8 (LdrpInitMuiCrits.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 *     ExPoolSetLimit @ 0x140648600 (ExPoolSetLimit.c)
 *     ExQueryBootEntropyInformation @ 0x1406EDAA8 (ExQueryBootEntropyInformation.c)
 *     ExpCheckTestsigningEnabled @ 0x1407AC054 (ExpCheckTestsigningEnabled.c)
 *     ExCheckFullProcessInformationAccess @ 0x140824EB8 (ExCheckFullProcessInformationAccess.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140824FF0 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbGetIndex @ 0x14082B1C4 (SdbGetIndex.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140A81324 (RtlpLogCapabilityCheckLatency.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9AD58 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpRunOnceWaitForInit @ 0x140778058 (RtlpRunOnceWaitForInit.c)
 *     RtlRunOnceComplete @ 0x140A518B0 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 Value; // rax
  NTSTATUS v8; // ebx
  signed __int64 v10; // rcx
  signed __int64 v11; // rcx
  int v12; // edi
  PVOID v13; // r8

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
        v10 = Value & 3;
        if ( (Value & 3) == 0 )
          break;
        if ( v10 != 1 )
        {
          if ( v10 == 3 )
          {
            v12 = -1073741584;
            goto LABEL_10;
          }
          goto LABEL_2;
        }
        Value = RtlpRunOnceWaitForInit(Value, (volatile signed __int64 *)RunOnce);
      }
      v11 = Value;
      Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Value);
    }
    while ( Value != v11 );
    if ( !(unsigned int)guard_dispatch_icall_no_overrides(RunOnce) )
    {
      v8 = -1073741823;
      v12 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v12 < 0 )
        goto LABEL_10;
      goto LABEL_5;
    }
    if ( Context )
      v13 = *Context;
    else
      v13 = 0LL;
    v12 = RtlRunOnceComplete(RunOnce, 0, v13);
    if ( v12 < 0 )
    {
LABEL_10:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      RtlRaiseStatus(v12);
    }
  }
  v8 = 0;
LABEL_5:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
