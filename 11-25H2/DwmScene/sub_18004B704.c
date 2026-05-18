/*
 * XREFs of sub_18004B704 @ 0x18004B704
 * Callers:
 *     sub_18004A598 @ 0x18004A598 (sub_18004A598.c)
 *     sub_18004A6BC @ 0x18004A6BC (sub_18004A6BC.c)
 *     sub_18004B5FC @ 0x18004B5FC (sub_18004B5FC.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

char __fastcall sub_18004B704(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_18001050C(v2);
  return sub_180011A5C(a1);
}
