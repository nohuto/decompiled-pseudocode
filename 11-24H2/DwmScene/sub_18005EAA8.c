/*
 * XREFs of sub_18005EAA8 @ 0x18005EAA8
 * Callers:
 *     sub_18005EB8C @ 0x18005EB8C (sub_18005EB8C.c)
 *     sub_18005EB98 @ 0x18005EB98 (sub_18005EB98.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18005DDBC @ 0x18005DDBC (sub_18005DDBC.c)
 */

__int64 __fastcall sub_18005EAA8(__int64 *a1)
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
  sub_18005DDBC((__int64)v2, a1[1]);
  return sub_180010234((void *)a1[1], 0x30uLL);
}
