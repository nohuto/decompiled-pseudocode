/*
 * XREFs of sub_180094310 @ 0x180094310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180094310(__int64 a1)
{
  __int128 v1; // xmm0

  v1 = *(_OWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 56) = 1;
  *(_OWORD *)(a1 + 8) = v1;
}
