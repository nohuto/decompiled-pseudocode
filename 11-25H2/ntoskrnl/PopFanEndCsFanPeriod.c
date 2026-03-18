/*
 * XREFs of PopFanEndCsFanPeriod @ 0x140750548
 * Callers:
 *     PopFanUpdateRunningState @ 0x140AB512C (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x140AB85CC (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1405D00B4 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140F0BA50;
  if ( qword_140F0BA50 < (unsigned __int64)qword_140F0BA58 )
    v0 = qword_140F0BA58;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140F0BA58) / 0x989680uLL);
}
