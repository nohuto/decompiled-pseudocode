/*
 * XREFs of sub_18003DA2C @ 0x18003DA2C
 * Callers:
 *     sub_18003D098 @ 0x18003D098 (sub_18003D098.c)
 *     sub_18003D9B8 @ 0x18003D9B8 (sub_18003D9B8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

char __fastcall sub_18003DA2C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_18001060C(v2);
  return sub_180013228(a1);
}
