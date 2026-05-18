/*
 * XREFs of sub_18003181C @ 0x18003181C
 * Callers:
 *     sub_18003189C @ 0x18003189C (sub_18003189C.c)
 * Callees:
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_18002BC74 @ 0x18002BC74 (sub_18002BC74.c)
 *     sub_18002C9AC @ 0x18002C9AC (sub_18002C9AC.c)
 *     sub_18003E184 @ 0x18003E184 (sub_18003E184.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003181C(__int64 *a1, __int64 *a2)
{
  _QWORD *v4; // rcx

  sub_18003E184(a2, a1);
  sub_18002BC74(*a2);
  v4 = (_QWORD *)a1[89];
  if ( v4 == (_QWORD *)a1[90] )
  {
    sub_18002C9AC(a1 + 88, a1[89], a2);
  }
  else
  {
    j_unknown_libname_81(v4, a2);
    a1[89] += 16LL;
  }
  return a2;
}
