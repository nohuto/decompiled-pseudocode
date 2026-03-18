/*
 * XREFs of MmGetLowestPhysicalPage @ 0x140477C98
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetLowestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + a1) + 18496LL);
}
