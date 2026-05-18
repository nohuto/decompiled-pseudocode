/*
 * XREFs of sub_18003D858 @ 0x18003D858
 * Callers:
 *     sub_18003CB18 @ 0x18003CB18 (sub_18003CB18.c)
 *     sub_18003CFE0 @ 0x18003CFE0 (sub_18003CFE0.c)
 * Callees:
 *     sub_18003D8CC @ 0x18003D8CC (sub_18003D8CC.c)
 */

__int64 __fastcall sub_18003D858(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18003D8CC(v2 + 32);
  return sub_18003D72C(a1);
}
