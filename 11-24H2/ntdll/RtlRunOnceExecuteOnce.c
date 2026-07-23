/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x18002D050
 * Callers:
 *     RtlSetHeapInformation @ 0x18002BE70 (RtlSetHeapInformation.c)
 *     LdrpFindDllActivationContext @ 0x18002CE50 (LdrpFindDllActivationContext.c)
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180091078 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180095108 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D4218 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DA400 (RtlpHpStackTraceAddStack.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x18010C6A0 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x18010FFD4 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18011915C (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18011CC38 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011D0E0 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpFtQueryConfiguration @ 0x18014435C (RtlpFtQueryConfiguration.c)
 *     UcOnUnexpectedCodePath @ 0x1801558C0 (UcOnUnexpectedCodePath.c)
 *     LdrpCgLogFailure @ 0x18015DFC0 (LdrpCgLogFailure.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x18015E82C (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015E938 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x18015EC34 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 * Callees:
 *     RtlReportCriticalFailure @ 0x18002D990 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x18002DA70 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x1800E5590 (RtlpRunOnceWaitForInit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  unsigned __int64 Value; // rax
  char v6; // cl
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  NTSTATUS v12; // esi
  PVOID v13; // r8
  int v14; // ebx
  char v16[24]; // [rsp+20h] [rbp-18h] BYREF

  Value = RunOnce->Value;
  v6 = RunOnce->Value;
  v16[0] = 0;
  if ( (v6 & 3) == 2 )
  {
LABEL_9:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
    return 0;
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
          if ( v10 != 3 )
            goto LABEL_9;
          v14 = -1073741584;
          goto LABEL_16;
        }
        Value = RtlpRunOnceWaitForInit(Value, RunOnce);
      }
      v11 = Value;
      Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Value);
    }
    while ( Value != v11 );
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      v12 = 0;
      v13 = 0LL;
      if ( Context )
        v13 = *Context;
      v14 = RtlRunOnceComplete(RunOnce, 0, v13);
      if ( v14 < 0 )
      {
        v16[0] = 1;
LABEL_16:
        RtlReportCriticalFailure((unsigned int)v14, v16, 1LL);
        return v14;
      }
    }
    else
    {
      v12 = -1073741823;
      v14 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v14 < 0 )
      {
        v16[0] = 2;
        goto LABEL_16;
      }
    }
  }
  return v12;
}
