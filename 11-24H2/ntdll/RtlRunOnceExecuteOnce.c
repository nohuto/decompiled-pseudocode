/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x180098200
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180074798 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180078828 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     RtlSetHeapInformation @ 0x180096E70 (RtlSetHeapInformation.c)
 *     LdrpFindDllActivationContext @ 0x180098000 (LdrpFindDllActivationContext.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D8EA8 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DF290 (RtlpHpStackTraceAddStack.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x180111294 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x180114C04 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18011AF2C (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18011EA08 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011EEB0 (RtlpHpStackTraceHeapGetContext.c)
 *     RtlpFtQueryConfiguration @ 0x180145FAC (RtlpFtQueryConfiguration.c)
 *     UcOnUnexpectedCodePath @ 0x180157500 (UcOnUnexpectedCodePath.c)
 *     LdrpCgLogFailure @ 0x18015FC00 (LdrpCgLogFailure.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x18016046C (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180160578 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x180160874 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180096DD8 (RtlpRunOnceWaitForInit.c)
 *     RtlReportCriticalFailure @ 0x180098B40 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x180098C20 (RtlRunOnceComplete.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned __int64 v13; // r8
  int v14; // ebx
  char v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  v6 = *a1;
  v16[0] = 0;
  if ( (v6 & 3) == 2 )
  {
LABEL_9:
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
            goto LABEL_9;
          v14 = -1073741584;
          goto LABEL_16;
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
      v13 = 0LL;
      if ( a4 )
        v13 = *a4;
      v14 = RtlRunOnceComplete(a1, 0LL, v13);
      if ( v14 < 0 )
      {
        v16[0] = 1;
LABEL_16:
        RtlReportCriticalFailure((unsigned int)v14, v16, 1LL);
        return (unsigned int)v14;
      }
    }
    else
    {
      v12 = -1073741823;
      v14 = RtlRunOnceComplete(a1, 4LL, 0LL);
      if ( v14 < 0 )
      {
        v16[0] = 2;
        goto LABEL_16;
      }
    }
  }
  return v12;
}
