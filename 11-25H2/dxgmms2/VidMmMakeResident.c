/*
 * XREFs of VidMmMakeResident @ 0x140039800
 * Callers:
 *     <none>
 * Callees:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400B1014 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 */

__int64 __fastcall VidMmMakeResident(
        VIDMM_GLOBAL *a1,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_MULTI_ALLOC **a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  return VIDMM_GLOBAL::MakeResident(a1, a2, a3, a4, a5, a6, a7);
}
