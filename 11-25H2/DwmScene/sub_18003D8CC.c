/*
 * XREFs of sub_18003D8CC @ 0x18003D8CC
 * Callers:
 *     sub_18003CF38 @ 0x18003CF38 (sub_18003CF38.c)
 *     sub_18003D858 @ 0x18003D858 (sub_18003D858.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

char __fastcall sub_18003D8CC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_18001050C(v2);
  return sub_180013128(a1);
}
