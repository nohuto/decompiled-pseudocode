/*
 * XREFs of ?TraceCurrentThresholds@ShellGesturesRecognizer@@SAXXZ @ 0x180159BE0
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1801117C0 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z @ 0x180159B14 (-Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z.c)
 */

void ShellGesturesRecognizer::TraceCurrentThresholds(void)
{
  InputTraceLogging::ShellGestures::Thresholds(
    ShellGesturesRecognizer::s_thresholds,
    (unsigned int)dword_1802460B8,
    qword_1802460C0,
    qword_1802460C8,
    (unsigned int)dword_1802460D0,
    (unsigned int)dword_1802460D4);
}
