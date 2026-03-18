/*
 * XREFs of ?GetAlignmentCB@VIDMM_SEGMENT@@SAKPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::GetAlignmentCB(const struct VIDMM_PHYSICAL_ALLOC *a1)
{
  return *((unsigned int *)a1 + 8);
}
