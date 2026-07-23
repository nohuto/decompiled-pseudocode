/*
 * XREFs of CmpAddSubKey @ 0x1408839CC
 * Callers:
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x140883094 (CmpAddSubKeyEx.c)
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3);
}
