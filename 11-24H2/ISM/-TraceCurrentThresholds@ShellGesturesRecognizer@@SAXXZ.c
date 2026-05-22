/*
 * XREFs of ?TraceCurrentThresholds@ShellGesturesRecognizer@@SAXXZ @ 0x18015AAC0
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180113660 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z @ 0x18015A9F4 (-Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z.c)
 */

void ShellGesturesRecognizer::TraceCurrentThresholds(void)
{
  InputTraceLogging::ShellGestures::Thresholds(
    ShellGesturesRecognizer::s_thresholds,
    (unsigned int)dword_1802500F8,
    qword_180250100,
    qword_180250108,
    (unsigned int)dword_180250110,
    (unsigned int)dword_180250114);
}
