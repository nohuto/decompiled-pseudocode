/*
 * XREFs of ?FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14002838C
 * Callers:
 *     VidMmFreeFenceStorageSlot @ 0x140028350 (VidMmFreeFenceStorageSlot.c)
 * Callees:
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x140028528 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_PROCESS_FENCE_STORAGE::FreeSharedFenceStorageSlot(
        KSPIN_LOCK *this,
        VIDMM_FENCE_STORAGE_PAGE **a2)
{
  VIDMM_FENCE_STORAGE_PAGE *v3; // rbx
  VIDMM_FENCE_STORAGE_PAGE *v4; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v5; // rax
  unsigned int v6; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
  v3 = *a2;
  *((_QWORD *)v3 + 12) = *((_QWORD *)*a2 + 12) & ~(1LL << ((unsigned __int64)*((unsigned int *)a2 + 4) >> 6));
  v4 = *(VIDMM_FENCE_STORAGE_PAGE **)v3;
  if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v3 + 8LL) != v3
    || (v5 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v3 + 1), *v5 != v3) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *((_QWORD *)v4 + 1) = v5;
  if ( *((_BYTE *)a2 + 40) )
  {
    if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedNativeFence )
      --VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedNativeFence;
  }
  else if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedMonitoredFence )
  {
    --VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedMonitoredFence;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v3, v6);
}
