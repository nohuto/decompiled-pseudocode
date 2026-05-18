/*
 * XREFs of sub_1800D25A4 @ 0x1800D25A4
 * Callers:
 *     sub_1800D22B0 @ 0x1800D22B0 (sub_1800D22B0.c)
 * Callees:
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     unknown_libname_6 @ 0x1800387C0 (unknown_libname_6.c)
 */

__int64 **__fastcall sub_1800D25A4(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  _QWORD *v7; // rdi
  __int64 **result; // rax

  if ( a3 != a4 )
  {
    v7 = unknown_libname_6(a4, *(__int64 **)(a1 + 8), a3);
    sub_180012140((__int64)v7, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v7;
  }
  result = a2;
  *a2 = a3;
  return result;
}
