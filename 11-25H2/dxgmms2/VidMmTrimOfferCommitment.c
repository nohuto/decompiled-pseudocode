/*
 * XREFs of VidMmTrimOfferCommitment @ 0x140045FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmTrimOfferCommitment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x140107EC4 (-VidMmTrimOfferCommitment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKM.c)
 */

void __fastcall VidMmTrimOfferCommitment(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rax
  struct VIDMM_PROCESS *v7; // rdx

  v6 = *(_QWORD *)(a2 + 64);
  v7 = 0LL;
  if ( v6 )
    v7 = *(struct VIDMM_PROCESS **)(v6 + 8);
  VIDMM_GLOBAL::VidMmTrimOfferCommitment(a1, v7, a3, a4, a5, a6);
}
