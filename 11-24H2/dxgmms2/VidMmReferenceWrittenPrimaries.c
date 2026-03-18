/*
 * XREFs of VidMmReferenceWrittenPrimaries @ 0x140036C00
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAUVIDMM_PRIMARIES_REFERENCES@@@Z @ 0x1401136F0 (-VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAUVIDMM_PRIMARIES_REFE.c)
 */

__int64 __fastcall VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        struct VIDMM_PRIMARIES_REFERENCES *a6)
{
  return VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(a1, a2, a3, a4, a5, a6);
}
