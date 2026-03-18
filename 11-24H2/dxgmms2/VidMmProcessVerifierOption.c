/*
 * XREFs of VidMmProcessVerifierOption @ 0x14004BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessVerifierOption@VIDMM_GLOBAL@@QEAAJPEAVDXGPROCESS@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_PROCESS_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_PROCESS_VERIFIER_OPTION_DATA@@@Z @ 0x140098544 (-ProcessVerifierOption@VIDMM_GLOBAL@@QEAAJPEAVDXGPROCESS@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3D.c)
 */

__int64 __fastcall VidMmProcessVerifierOption(
        VIDMM_GLOBAL *a1,
        struct DXGPROCESS *a2,
        enum _D3DKMT_VERIFIER_OPTION_MODE a3,
        enum _D3DKMT_PROCESS_VERIFIER_OPTION_TYPE a4,
        union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA *a5)
{
  return VIDMM_GLOBAL::ProcessVerifierOption(a1, a2, a3, a4, a5);
}
