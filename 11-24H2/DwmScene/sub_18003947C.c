/*
 * XREFs of sub_18003947C @ 0x18003947C
 * Callers:
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_18002C9AC @ 0x18002C9AC (sub_18002C9AC.c)
 *     sub_18003B060 @ 0x18003B060 (sub_18003B060.c)
 *     sub_18003B3FC @ 0x18003B3FC (sub_18003B3FC.c)
 *     sub_18003BE7C @ 0x18003BE7C (sub_18003BE7C.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_18003947C(__int64 *a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  char *result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18003BE7C();
  if ( (a1[5] - a1[4]) >> 4 )
  {
    unknown_libname_81(&v6, (_QWORD *)(a1[5] - 16));
    sub_18003B060(v6, a2);
    sub_18003B3FC(*a2, &v6);
    if ( v7 )
      sub_18001060C(v7);
  }
  v4 = (_QWORD *)a1[5];
  if ( v4 == (_QWORD *)a1[6] )
    return sub_18002C9AC(a1 + 4, a1[5], a2);
  result = (char *)j_unknown_libname_81(v4, a2);
  a1[5] += 16LL;
  return result;
}
