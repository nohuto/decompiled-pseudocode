/*
 * XREFs of MmGetTotalCommitLimit @ 0x1404637C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AD1640 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetTotalCommitLimit(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + a1) + 19608LL);
}
