/*
 * XREFs of sub_18005E948 @ 0x18005E948
 * Callers:
 *     sub_18005EA2C @ 0x18005EA2C (sub_18005EA2C.c)
 *     sub_18005EA38 @ 0x18005EA38 (sub_18005EA38.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18005DC5C @ 0x18005DC5C (sub_18005DC5C.c)
 */

__int64 __fastcall sub_18005E948(__int64 *a1)
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
  sub_18005DC5C((__int64)v2, a1[1]);
  return sub_180010134((void *)a1[1], 0x30uLL);
}
