/*
 * XREFs of sub_1800D1220 @ 0x1800D1220
 * Callers:
 *     sub_1800D1310 @ 0x1800D1310 (sub_1800D1310.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 */

__int64 __fastcall sub_1800D1220(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx

  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 88));
  result = sub_180012408(a1 + 24, v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_18001050C(v4);
  return result;
}
