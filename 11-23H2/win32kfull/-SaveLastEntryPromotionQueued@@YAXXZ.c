/*
 * XREFs of ?SaveLastEntryPromotionQueued@@YAXXZ @ 0x1C01F7CE4
 * Callers:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F70E0 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01F7BC4 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SaveLastEntryPromotionQueued(__int64 a1)
{
  __int64 v1; // rax
  _OWORD *v2; // rcx

  v1 = SGDGetUserSessionState(a1);
  v2 = *(_OWORD **)(v1 + 16192);
  v1 += 16056LL;
  *(_OWORD *)(v1 + 144) = *v2;
  *(_OWORD *)(v1 + 160) = v2[1];
  *(_OWORD *)(v1 + 176) = v2[2];
  *(_QWORD *)(v1 + 144) = 0LL;
}
