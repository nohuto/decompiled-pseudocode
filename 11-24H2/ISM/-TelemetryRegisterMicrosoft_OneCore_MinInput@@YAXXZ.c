/*
 * XREFs of ?TelemetryRegisterMicrosoft_OneCore_MinInput@@YAXXZ @ 0x18009A210
 * Callers:
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x18005C690 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800796E0 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

void TelemetryRegisterMicrosoft_OneCore_MinInput(void)
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_18024E248, 0LL);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_18024E280, 0LL);
  ISMBamos_AutoBamos::BamoTraceLogging::s_providers = (const struct _tlgProvider_t * near *)&dword_18024E280;
  *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) = (const struct _tlgProvider_t * near *)&dword_18024E280;
  qword_180251580 = (__int64)&dword_18024E280;
}
