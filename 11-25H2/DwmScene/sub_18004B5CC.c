/*
 * XREFs of sub_18004B5CC @ 0x18004B5CC
 * Callers:
 *     sub_18004A3F8 @ 0x18004A3F8 (sub_18004A3F8.c)
 * Callees:
 *     sub_18004B6DC @ 0x18004B6DC (sub_18004B6DC.c)
 */

__int64 __fastcall sub_18004B5CC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18004B6DC(v2 + 32);
  return sub_18001C184(a1);
}
