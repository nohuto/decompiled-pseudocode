/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180170498
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x1800062D4 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     RtlCapabilityCheck @ 0x18001A270 (RtlCapabilityCheck.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800E3360 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlInitializeHeapLogging @ 0x180102270 (RtlInitializeHeapLogging.c)
 *     UcpInitOnUnexpectedCodePathOnceCallBack @ 0x180155D80 (UcpInitOnUnexpectedCodePathOnceCallBack.c)
 *     CastGuardTelemetryInitOnce @ 0x18015DF90 (CastGuardTelemetryInitOnce.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x18015EE30 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x18015EE60 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x18015EEE0 (VsmEnclaveTelemetryInitOnce.c)
 * Callees:
 *     EtwEventRegister @ 0x180049E00 (EtwEventRegister.c)
 *     EtwEventSetInformation @ 0x1801182E0 (EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(char *CallbackContext)
{
  ULONGLONG *v1; // rsi
  bool v2; // zf
  unsigned __int32 v4; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = (ULONGLONG *)(CallbackContext + 32);
  v2 = *((_QWORD *)CallbackContext + 4) == 0LL;
  ProviderId = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
  if ( !v2 )
    __fastfail(5u);
  *((_QWORD *)CallbackContext + 5) = 0LL;
  *((_QWORD *)CallbackContext + 6) = 0LL;
  v4 = EtwEventRegister(&ProviderId, tlgEnableCallback, CallbackContext, v1);
  if ( !v4 )
    EtwEventSetInformation(
      *v1,
      (EVENT_INFO_CLASS)2,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  return v4;
}
