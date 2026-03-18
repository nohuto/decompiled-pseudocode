/*
 * XREFs of ?IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FEE0C
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5F04 (-MemoryTransferInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_L.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FEDB0 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x140035150 (VidSchIsMonitoredFenceSignaled.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::IsAllocationInUse(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned __int64 v2; // r8
  char v4; // bl
  __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v2 = *((_QWORD *)a2 + 11);
  v4 = 0;
  v5 = *((_DWORD *)a2 + 6) & 0x3F;
  v6 = *((_QWORD *)this + v5 + 676);
  if ( (v6 <= v2 || v6 - v2 < 0x7FFFFFFF)
    && !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v5 + 740), *((_QWORD *)a2 + 11)) )
  {
    return 1;
  }
  return v4;
}
