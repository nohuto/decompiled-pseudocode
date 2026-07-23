/*
 * XREFs of PopFanEndCsFanPeriod @ 0x14075BE18
 * Callers:
 *     PopFanUpdateRunningState @ 0x140AB45D8 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x140AB776C (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1405D2230 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140F0B130;
  if ( qword_140F0B130 < (unsigned __int64)qword_140F0B138 )
    v0 = qword_140F0B138;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140F0B138) / 0x989680uLL);
}
