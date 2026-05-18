/*
 * XREFs of sub_18003931C @ 0x18003931C
 * Callers:
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     sub_18003AF00 @ 0x18003AF00 (sub_18003AF00.c)
 *     sub_18003B29C @ 0x18003B29C (sub_18003B29C.c)
 *     sub_18003BD1C @ 0x18003BD1C (sub_18003BD1C.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_18003931C(__int64 *a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  char *result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18003BD1C();
  if ( (a1[5] - a1[4]) >> 4 )
  {
    unknown_libname_81(&v6, (_QWORD *)(a1[5] - 16));
    sub_18003AF00(v6, a2);
    sub_18003B29C(*a2, &v6);
    if ( v7 )
      sub_18001050C(v7);
  }
  v4 = (_QWORD *)a1[5];
  if ( v4 == (_QWORD *)a1[6] )
    return sub_18002C84C(a1 + 4, a1[5], a2);
  result = (char *)j_unknown_libname_81(v4, a2);
  a1[5] += 16LL;
  return result;
}
