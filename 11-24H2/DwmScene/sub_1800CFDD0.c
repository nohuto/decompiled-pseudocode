/*
 * XREFs of sub_1800CFDD0 @ 0x1800CFDD0
 * Callers:
 *     sub_1800D1698 @ 0x1800D1698 (sub_1800D1698.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800CF3A4 @ 0x1800CF3A4 (sub_1800CF3A4.c)
 */

__int64 __fastcall sub_1800CFDD0(__int64 *a1)
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
  sub_1800CF3A4((__int64)v2, a1[1]);
  return sub_180010234((void *)a1[1], 0xB0uLL);
}
