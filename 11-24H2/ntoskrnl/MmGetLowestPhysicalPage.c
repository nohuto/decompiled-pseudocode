/*
 * XREFs of MmGetLowestPhysicalPage @ 0x140473EF0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetLowestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E300C8 + a1) + 18496LL);
}
