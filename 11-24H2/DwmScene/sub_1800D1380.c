/*
 * XREFs of sub_1800D1380 @ 0x1800D1380
 * Callers:
 *     sub_1800D1470 @ 0x1800D1470 (sub_1800D1470.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 */

__int64 __fastcall sub_1800D1380(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rcx

  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 88));
  result = sub_180012508(a1 + 24, v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_18001060C(v4);
  return result;
}
