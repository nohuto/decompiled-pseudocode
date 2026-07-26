/*
 * XREFs of verifySingleRxNbl @ 0x1400AA838
 * Callers:
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x14001F1B0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140035040 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 * Callees:
 *     verifySingleNb @ 0x1400AA648 (verifySingleNb.c)
 *     verifySingleNbl @ 0x1400AA78C (verifySingleNbl.c)
 */

void __fastcall verifySingleRxNbl(unsigned __int64 a1, unsigned __int64 a2)
{
  verifySingleNbl(a1, a2);
  verifySingleNb(*(_QWORD *)(a1 + 8), a2);
}
