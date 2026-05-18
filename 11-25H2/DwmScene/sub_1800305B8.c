/*
 * XREFs of sub_1800305B8 @ 0x1800305B8
 * Callers:
 *     sub_18002D5E0 @ 0x18002D5E0 (sub_18002D5E0.c)
 *     unknown_libname_4 @ 0x18002DA10 (unknown_libname_4.c)
 *     sub_180033E24 @ 0x180033E24 (sub_180033E24.c)
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 *     sub_180096C0C @ 0x180096C0C (sub_180096C0C.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

_QWORD *__fastcall sub_1800305B8(_QWORD *a1, __int64 *a2)
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
    sub_180010544(v5);
  return a1;
}
