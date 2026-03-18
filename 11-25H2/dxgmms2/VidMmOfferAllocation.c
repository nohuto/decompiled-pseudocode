/*
 * XREFs of VidMmOfferAllocation @ 0x14003E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1400FCDCC (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OF.c)
 */

__int64 __fastcall VidMmOfferAllocation(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  return VIDMM_GLOBAL::OfferAllocation(a1, a2, a3, a4);
}
