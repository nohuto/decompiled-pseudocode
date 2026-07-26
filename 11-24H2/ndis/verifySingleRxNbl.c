/*
 * XREFs of verifySingleRxNbl @ 0x1400A2688
 * Callers:
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140019DC0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140026980 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 * Callees:
 *     verifySingleNb @ 0x1400A2498 (verifySingleNb.c)
 *     verifySingleNbl @ 0x1400A25DC (verifySingleNbl.c)
 */

void __fastcall verifySingleRxNbl(unsigned __int64 a1, unsigned __int64 a2)
{
  verifySingleNbl(a1, a2);
  verifySingleNb(*(_QWORD *)(a1 + 8), a2);
}
