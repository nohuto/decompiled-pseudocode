/*
 * XREFs of sub_18009A124 @ 0x18009A124
 * Callers:
 *     sub_1800EA020 @ 0x1800EA020 (sub_1800EA020.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18009A020 @ 0x18009A020 (sub_18009A020.c)
 */

__int64 __fastcall sub_18009A124(__int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    sub_180010234(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  sub_18009A020((__int64)v2, a1[1]);
  return sub_180010234((void *)a1[1], 0x38uLL);
}
