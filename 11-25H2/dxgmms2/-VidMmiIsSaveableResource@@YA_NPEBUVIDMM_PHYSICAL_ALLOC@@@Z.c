/*
 * XREFs of ?VidMmiIsSaveableResource@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140096B30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009CE70 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 */

bool __fastcall VidMmiIsSaveableResource(const struct VIDMM_PHYSICAL_ALLOC *a1)
{
  return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(a1);
}
