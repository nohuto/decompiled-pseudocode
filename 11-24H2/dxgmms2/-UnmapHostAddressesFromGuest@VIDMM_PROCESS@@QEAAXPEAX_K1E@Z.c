/*
 * XREFs of ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1400A8B60
 * Callers:
 *     UnlockParavirtualizedAllocationOnHost @ 0x14009666C (UnlockParavirtualizedAllocationOnHost.c)
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1400A8A50 (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1400C07AC (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400C10B0 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     UnmapChildMmioSpace @ 0x14004B3D4 (UnmapChildMmioSpace.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1400A8DEC (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1400A8F40 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

void __fastcall VIDMM_PROCESS::UnmapHostAddressesFromGuest(VIDMM_PROCESS *this, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // eax
  __int64 v6; // rax
  VIDMM_PROCESS *v7; // rcx
  CVirtualAddressAllocator *CpuVisibleBufferAllocator; // rsi
  int v9; // ecx
  __int64 v10; // rax

  v3 = *((_QWORD *)this + 4);
  v5 = *(_DWORD *)(v3 + 408);
  if ( (v5 & 0x100) != 0 )
  {
    v3 = *(_QWORD *)(v3 + 592);
  }
  else if ( (v5 & 0x80u) == 0 )
  {
    return;
  }
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 64);
    v7 = v6 ? *(VIDMM_PROCESS **)(v6 + 8) : 0LL;
    CpuVisibleBufferAllocator = VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v7);
    if ( CpuVisibleBufferAllocator )
    {
      UnmapChildMmioSpace();
      v9 = *(_DWORD *)(v3 + 408);
      if ( (v9 & 0x100) != 0 )
        v10 = *(_QWORD *)(v3 + 592);
      else
        v10 = v3 & -(__int64)((v9 & 0x80u) != 0);
      CVirtualAddressAllocator::FreeVirtualAddressRange(
        CpuVisibleBufferAllocator,
        a3 - *(_QWORD *)(*(_QWORD *)(v10 + 592) + 256LL));
    }
  }
}
