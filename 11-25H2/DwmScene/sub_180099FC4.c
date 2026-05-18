/*
 * XREFs of sub_180099FC4 @ 0x180099FC4
 * Callers:
 *     sub_1800E9EC0 @ 0x1800E9EC0 (sub_1800E9EC0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180099EC0 @ 0x180099EC0 (sub_180099EC0.c)
 */

__int64 __fastcall sub_180099FC4(__int64 *a1)
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
  sub_180099EC0((__int64)v2, a1[1]);
  return sub_180010134((void *)a1[1], 0x38uLL);
}
