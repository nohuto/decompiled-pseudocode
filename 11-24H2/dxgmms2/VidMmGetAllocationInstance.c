/*
 * XREFs of VidMmGetAllocationInstance @ 0x14003F720
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllocationInstance@VIDMM_GLOBAL@@QEAAKPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140103BF8 (-GetAllocationInstance@VIDMM_GLOBAL@@QEAAKPEAUVIDMM_MULTI_ALLOC@@@Z.c)
 */

unsigned int __fastcall VidMmGetAllocationInstance(VIDMM_GLOBAL *a1, struct VIDMM_MULTI_ALLOC *a2)
{
  return VIDMM_GLOBAL::GetAllocationInstance(a1, a2);
}
