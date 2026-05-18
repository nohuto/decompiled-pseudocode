/*
 * XREFs of sub_180030718 @ 0x180030718
 * Callers:
 *     sub_18002D740 @ 0x18002D740 (sub_18002D740.c)
 *     unknown_libname_4 @ 0x18002DB70 (unknown_libname_4.c)
 *     sub_180033F84 @ 0x180033F84 (sub_180033F84.c)
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 *     sub_180096D6C @ 0x180096D6C (sub_180096D6C.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

_QWORD *__fastcall sub_180030718(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  volatile signed __int32 *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (volatile signed __int32 *)a1[1];
  a1[1] = v4;
  if ( v5 )
    sub_180010644(v5);
  return a1;
}
