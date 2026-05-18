/*
 * XREFs of sub_1800CFC70 @ 0x1800CFC70
 * Callers:
 *     sub_1800D1538 @ 0x1800D1538 (sub_1800D1538.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_1800CF244 @ 0x1800CF244 (sub_1800CF244.c)
 */

__int64 __fastcall sub_1800CFC70(__int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    sub_180010134(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  sub_1800CF244((__int64)v2, a1[1]);
  return sub_180010134((void *)a1[1], 0xB0uLL);
}
