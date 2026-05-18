/*
 * XREFs of sub_18003D8B0 @ 0x18003D8B0
 * Callers:
 *     sub_18003DA78 @ 0x18003DA78 (sub_18003DA78.c)
 *     sub_18003DA84 @ 0x18003DA84 (sub_18003DA84.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18003D034 @ 0x18003D034 (sub_18003D034.c)
 */

__int64 __fastcall sub_18003D8B0(__int64 *a1)
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
  sub_18003D034((__int64)v2, a1[1]);
  return sub_180010234((void *)a1[1], 0x28uLL);
}
