/*
 * XREFs of ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400FDEFC
 * Callers:
 *     ?VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400917F4 (-VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400AB9CC (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FDCE0 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1400366A0 (VidSchIsMonitoredFenceSignaled.c)
 */

bool __fastcall VIDMM_GLOBAL::IsPagingOperationPending(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2, char a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax

  if ( a3 )
    v5 = *((_QWORD *)a2 + 10);
  else
    v5 = *((_QWORD *)a2 + 11);
  v6 = *((_DWORD *)a2 + 6) & 0x3F;
  v7 = *((_QWORD *)this + v6 + 676);
  return (v7 <= v5 || v7 - v5 < 0x7FFFFFFF) && !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v6 + 740), v5);
}
