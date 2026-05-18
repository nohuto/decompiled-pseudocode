/*
 * XREFs of sub_1800D2444 @ 0x1800D2444
 * Callers:
 *     sub_1800D2150 @ 0x1800D2150 (sub_1800D2150.c)
 * Callees:
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     unknown_libname_6 @ 0x180038660 (unknown_libname_6.c)
 */

__int64 **__fastcall sub_1800D2444(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  _QWORD *v7; // rdi
  __int64 **result; // rax

  if ( a3 != a4 )
  {
    v7 = unknown_libname_6(a4, *(__int64 **)(a1 + 8), a3);
    sub_180012040((__int64)v7, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v7;
  }
  result = a2;
  *a2 = a3;
  return result;
}
