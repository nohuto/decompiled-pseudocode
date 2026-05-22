/*
 * XREFs of ?TelemetryRegisterMicrosoft_OneCore_MinInput@@YAXXZ @ 0x18009A040
 * Callers:
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x18005C880 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180079A40 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

void TelemetryRegisterMicrosoft_OneCore_MinInput(void)
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180244248, 0LL);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180244280, 0LL);
  ISMBamos_AutoBamos::BamoTraceLogging::s_providers = (const struct _tlgProvider_t * near *)&dword_180244280;
  *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) = (const struct _tlgProvider_t * near *)&dword_180244280;
  qword_1802475B0 = (__int64)&dword_180244280;
}
