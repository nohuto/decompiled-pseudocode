/*
 * XREFs of sub_18003D9B8 @ 0x18003D9B8
 * Callers:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_18003D140 @ 0x18003D140 (sub_18003D140.c)
 * Callees:
 *     sub_18003DA2C @ 0x18003DA2C (sub_18003DA2C.c)
 */

__int64 __fastcall sub_18003D9B8(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18003DA2C(v2 + 32);
  return sub_18003D88C(a1);
}
