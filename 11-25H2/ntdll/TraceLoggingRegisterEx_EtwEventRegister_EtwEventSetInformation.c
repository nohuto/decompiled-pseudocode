/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006727C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x1800AC7B4 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlInitializeHeapLogging @ 0x180109C50 (RtlInitializeHeapLogging.c)
 *     UcpInitOnUnexpectedCodePathOnceCallBack @ 0x180158F70 (UcpInitOnUnexpectedCodePathOnceCallBack.c)
 *     CastGuardTelemetryInitOnce @ 0x180161120 (CastGuardTelemetryInitOnce.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180161FC0 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x180161FF0 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x180162070 (VsmEnclaveTelemetryInitOnce.c)
 * Callees:
 *     EtwEventRegister @ 0x1800455F0 (EtwEventRegister.c)
 *     EtwEventSetInformation @ 0x1800E9B50 (EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(__int64 *a1)
{
  __int64 *v1; // rsi
  bool v2; // zf
  unsigned int v4; // edi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 4;
  v2 = a1[4] == 0;
  v6 = *(_OWORD *)(a1[1] - 16);
  if ( !v2 )
    __fastfail(5u);
  a1[5] = 0LL;
  a1[6] = 0LL;
  v4 = EtwEventRegister((int)&v6, (__int64)tlgEnableCallback, (__int64)a1, (__int64)v1);
  if ( !v4 )
    EtwEventSetInformation(*v1, 2, a1[1], *(unsigned __int16 *)a1[1]);
  return v4;
}
