/*
 * XREFs of sub_180087A3C @ 0x180087A3C
 * Callers:
 *     sub_180087908 @ 0x180087908 (sub_180087908.c)
 *     sub_180089010 @ 0x180089010 (sub_180089010.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180087954 @ 0x180087954 (sub_180087954.c)
 */

__int64 *__fastcall sub_180087A3C(__int64 *lpMem, __int64 a2)
{
  sub_180087954(lpMem, a2);
  sub_18000BB4C(lpMem);
  return lpMem;
}
