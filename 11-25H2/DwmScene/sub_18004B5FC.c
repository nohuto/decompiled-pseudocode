/*
 * XREFs of sub_18004B5FC @ 0x18004B5FC
 * Callers:
 *     sub_18004A808 @ 0x18004A808 (sub_18004A808.c)
 * Callees:
 *     sub_18004B704 @ 0x18004B704 (sub_18004B704.c)
 */

__int64 __fastcall sub_18004B5FC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18004B704(v2 + 32);
  return sub_18003D72C(a1);
}
