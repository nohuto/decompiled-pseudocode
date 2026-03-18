/*
 * XREFs of VidMmAddOfferReference @ 0x14003CBFC
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1400FCE00 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmAddOfferReference(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 96) + 12LL));
}
