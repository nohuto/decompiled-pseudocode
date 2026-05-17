/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498
 * Callers:
 *     RtlCapabilityCheck @ 0x180039FF0 (RtlCapabilityCheck.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180084424 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800ADB9C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlInitializeHeapLogging @ 0x180107340 (RtlInitializeHeapLogging.c)
 *     UcpInitOnUnexpectedCodePathOnceCallBack @ 0x1801579C0 (UcpInitOnUnexpectedCodePathOnceCallBack.c)
 *     CastGuardTelemetryInitOnce @ 0x18015FBD0 (CastGuardTelemetryInitOnce.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180160A70 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x180160AA0 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x180160B20 (VsmEnclaveTelemetryInitOnce.c)
 * Callees:
 *     EtwEventRegister @ 0x18001D400 (EtwEventRegister.c)
 *     EtwEventSetInformation @ 0x18011A0B0 (EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
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
    EtwEventSetInformation(*v1, 2LL, a1[1], *(unsigned __int16 *)a1[1]);
  return v4;
}
