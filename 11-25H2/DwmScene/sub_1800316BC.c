/*
 * XREFs of sub_1800316BC @ 0x1800316BC
 * Callers:
 *     sub_18003173C @ 0x18003173C (sub_18003173C.c)
 * Callees:
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     sub_18003E024 @ 0x18003E024 (sub_18003E024.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800316BC(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // rcx

  sub_18003E024(a2, a1);
  sub_18002BB14(*a2);
  v4 = (_QWORD *)a1[89];
  if ( v4 == (_QWORD *)a1[90] )
  {
    sub_18002C84C(a1 + 88, a1[89], a2);
  }
  else
  {
    j_unknown_libname_81(v4, a2);
    a1[89] += 16LL;
  }
  return a2;
}
