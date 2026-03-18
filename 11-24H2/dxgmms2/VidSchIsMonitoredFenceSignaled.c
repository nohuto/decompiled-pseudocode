/*
 * XREFs of VidSchIsMonitoredFenceSignaled @ 0x140035150
 * Callers:
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z @ 0x1400AEFCC (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@G_K@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400B4060 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E6660 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1400EC038 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400FDE94 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FEE0C (-IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VidSchIsMonitoredFenceSignaled(__int64 a1, unsigned __int64 a2)
{
  KSPIN_LOCK *v4; // rcx
  unsigned __int64 *v5; // rax
  bool v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 8) + 1984LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
  if ( *(_BYTE *)(a1 + 29) )
  {
    v6 = 1;
  }
  else
  {
    v5 = *(unsigned __int64 **)(a1 + 72);
    if ( *(_DWORD *)(a1 + 48) == 6 || *(_BYTE *)(a1 + 30) )
      v6 = *v5 >= a2;
    else
      v6 = *(_DWORD *)v5 - (int)a2 >= 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v6;
}
