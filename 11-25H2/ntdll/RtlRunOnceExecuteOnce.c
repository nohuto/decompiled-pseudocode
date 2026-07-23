/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x180003870
 * Callers:
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180002254 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 *     LdrpFindDllActivationContext @ 0x180003670 (LdrpFindDllActivationContext.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006F018 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D8E48 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DCD90 (RtlpHpStackTraceAddStack.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1801142C0 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x180117B04 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18011C910 (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1801202D8 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180120780 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpFtQueryConfiguration @ 0x18014755C (RtlpFtQueryConfiguration.c)
 *     UcOnUnexpectedCodePath @ 0x180158AB0 (UcOnUnexpectedCodePath.c)
 *     LdrpCgLogFailure @ 0x180161150 (LdrpCgLogFailure.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1801619BC (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180161AC8 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x180161DC4 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180002444 (RtlpRunOnceWaitForInit.c)
 *     RtlReportCriticalFailure @ 0x1800041B0 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x180004290 (RtlRunOnceComplete.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  signed __int64 Value; // rax
  char v6; // cl
  signed __int64 v10; // rcx
  signed __int64 v11; // rcx
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
        Value = RtlpRunOnceWaitForInit(Value, (volatile signed __int64 *)RunOnce);
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
