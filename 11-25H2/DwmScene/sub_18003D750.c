/*
 * XREFs of sub_18003D750 @ 0x18003D750
 * Callers:
 *     sub_18003D918 @ 0x18003D918 (sub_18003D918.c)
 *     sub_18003D924 @ 0x18003D924 (sub_18003D924.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18003CED4 @ 0x18003CED4 (sub_18003CED4.c)
 */

__int64 __fastcall sub_18003D750(__int64 *a1)
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
  sub_18003CED4((__int64)v2, a1[1]);
  return sub_180010134((void *)a1[1], 0x28uLL);
}
