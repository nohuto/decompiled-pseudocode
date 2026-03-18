/*
 * XREFs of PopFanEndCsFanPeriod @ 0x14075CE78
 * Callers:
 *     PopFanUpdateRunningState @ 0x140AB9518 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x140ABC74C (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1405D4A70 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140F0C0F0;
  if ( qword_140F0C0F0 < (unsigned __int64)qword_140F0C0F8 )
    v0 = qword_140F0C0F8;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140F0C0F8) / 0x989680uLL);
}
