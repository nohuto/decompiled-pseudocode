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

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, unsigned __int64 *),
        __int64 a3,
        unsigned __int64 *a4)
{
  signed __int64 v4; // rax
  char v6; // cl
  signed __int64 v10; // rcx
  signed __int64 v11; // rcx
  unsigned int v12; // esi
  int v13; // ebx
  char v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  v6 = *a1;
  v15[0] = 0;
  if ( (v6 & 3) == 2 )
  {
LABEL_7:
    if ( a4 )
      *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v10 = v4 & 3;
        if ( (v4 & 3) == 0 )
          break;
        if ( v10 != 1 )
        {
          if ( v10 != 3 )
            goto LABEL_7;
          v13 = -1073741584;
          goto LABEL_14;
        }
        v4 = RtlpRunOnceWaitForInit(v4, a1);
      }
      v11 = v4;
      v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
    }
    while ( v4 != v11 );
    if ( a2(a1, a3, a4) )
    {
      v12 = 0;
      v13 = RtlRunOnceComplete(a1, 0LL);
      if ( v13 >= 0 )
        return v12;
      v15[0] = 1;
      goto LABEL_14;
    }
    v12 = -1073741823;
    v13 = RtlRunOnceComplete(a1, 4LL);
    if ( v13 < 0 )
    {
      v15[0] = 2;
LABEL_14:
      RtlReportCriticalFailure((unsigned int)v13, v15, 1LL);
      return (unsigned int)v13;
    }
  }
  return v12;
}
