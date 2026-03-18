/*
 * XREFs of CmpAddSubKey @ 0x1408895B4
 * Callers:
 *     CmpCreateTombstone @ 0x14065C944 (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x1408897A8 (CmpAddSubKeyEx.c)
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1)
{
  return CmpAddSubKeyEx(a1);
}
