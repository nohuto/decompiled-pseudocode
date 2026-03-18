/*
 * XREFs of ?IsLogicallyPinned@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003EC6C
 * Callers:
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1400CE558 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?IsAllocationPinned@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400FCAD8 (-IsAllocationPinned@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_ALLOC::IsLogicallyPinned(VIDMM_ALLOC *this)
{
  char v1; // al
  char v2; // cl

  v1 = *((_BYTE *)this + 25);
  v2 = 1;
  if ( (v1 & 1) == 0 || (v1 & 6) == 2 )
    return 0;
  return v2;
}
