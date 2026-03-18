/*
 * XREFs of ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x140038544
 * Callers:
 *     RemoveDmaBufferFromPool @ 0x1400B7C44 (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400B8988 (AddDmaBufferToPool.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C16A0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C2790 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
  KeLeaveCriticalRegion();
}
