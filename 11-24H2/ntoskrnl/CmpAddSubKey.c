/*
 * XREFs of CmpAddSubKey @ 0x14087FB1C
 * Callers:
 *     CmpCreateTombstone @ 0x140668414 (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x14087F1E4 (CmpAddSubKeyEx.c)
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3);
}
