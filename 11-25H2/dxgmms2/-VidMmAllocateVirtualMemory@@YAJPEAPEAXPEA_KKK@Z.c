/*
 * XREFs of ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1400C687C
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1400ED554 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     VidMmAllocateVirtualMemoryFromPartition @ 0x140090508 (VidMmAllocateVirtualMemoryFromPartition.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1400C68FC (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 */

__int64 __fastcall VidMmAllocateVirtualMemory(void **a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  void *CurrentPartitionHandle; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  if ( CurrentPartitionHandle != (void *)-1LL )
    return VidMmAllocateVirtualMemoryFromPartition((__int64)CurrentPartitionHandle, (__int64)a1, (__int64)a2, a3, a4);
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  return (*(__int64 (__fastcall **)(__int64, void **, _QWORD, unsigned __int64 *, unsigned int, int))VirtualMemoryInterface)(
           -1LL,
           a1,
           0LL,
           a2,
           a3,
           a4);
}
