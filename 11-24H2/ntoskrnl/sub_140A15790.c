/*
 * XREFs of sub_140A15790 @ 0x140A15790
 * Callers:
 *     sub_1408FC59C @ 0x1408FC59C (sub_1408FC59C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140A15790(__int64 a1)
{
  if ( a1 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
}
