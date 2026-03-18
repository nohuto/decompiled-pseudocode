/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x14095F8F0
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 *     LdrpInitMuiCrits @ 0x14044F178 (LdrpInitMuiCrits.c)
 *     ExPoolSetLimit @ 0x140654500 (ExPoolSetLimit.c)
 *     ExQueryBootEntropyInformation @ 0x1406F9784 (ExQueryBootEntropyInformation.c)
 *     ExpCheckTestsigningEnabled @ 0x1406FB358 (ExpCheckTestsigningEnabled.c)
 *     SdbGetIndex @ 0x14095D914 (SdbGetIndex.c)
 *     ExCheckFullProcessInformationAccess @ 0x14095F62C (ExCheckFullProcessInformationAccess.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14095F764 (SdbpGetStringTableItemFromStringRef.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140A85D18 (RtlpLogCapabilityCheckLatency.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140AA0B18 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlpRunOnceWaitForInit @ 0x1407872A8 (RtlpRunOnceWaitForInit.c)
 *     RtlRunOnceComplete @ 0x140A561F0 (RtlRunOnceComplete.c)
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
  NTSTATUS v13; // edi
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
    if ( !(unsigned int)guard_dispatch_icall_no_overrides(RunOnce, Parameter, Context, Context) )
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
