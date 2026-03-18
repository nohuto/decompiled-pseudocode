/*
 * XREFs of ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x14001C28C
 * Callers:
 *     VidMmAllocateFenceStorageSlot @ 0x1400F9310 (VidMmAllocateFenceStorageSlot.c)
 * Callees:
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14001C6C8 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x14001D0C8 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1400A8610 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@_NW4VIDMM_NATIVE_FENCE_STORAGE_TYPE@@@Z @ 0x1401030A0 (--0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@_NW4VIDMM_NATIVE_FENCE_STORAG.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        struct VIDMM_PROCESS *a3)
{
  __int64 Pool2; // rax
  __int64 v7; // r8
  VIDMM_FENCE_STORAGE_PAGE *v8; // rax
  VIDMM_FENCE_STORAGE_PAGE *v9; // rbx
  int v10; // edi
  VIDMM_FENCE_STORAGE_PAGE **v11; // rax
  KSPIN_LOCK v12; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Pool2 = ExAllocatePool2(64LL, 176LL, 875850070LL);
  if ( !Pool2 )
    return 3221225495LL;
  LOBYTE(v7) = *((_BYTE *)a2 + 40);
  v8 = (VIDMM_FENCE_STORAGE_PAGE *)VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(
                                     Pool2,
                                     this,
                                     v7,
                                     *((unsigned int *)a2 + 11));
  v9 = v8;
  if ( !v8 )
    return 3221225495LL;
  v10 = VIDMM_FENCE_STORAGE_PAGE::Init(v8, a3);
  if ( v10 < 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v9, 1u);
    return (unsigned int)v10;
  }
  else
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v9, a2);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
    v11 = (VIDMM_FENCE_STORAGE_PAGE **)(this + 13);
    v12 = this[13];
    if ( *(KSPIN_LOCK **)(v12 + 8) != this + 13 )
      __fastfail(3u);
    *(_QWORD *)v9 = v12;
    *((_QWORD *)v9 + 1) = v11;
    *(_QWORD *)(v12 + 8) = v9;
    *v11 = v9;
    if ( *((_BYTE *)a2 + 40) )
      ++VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedNativeFence;
    else
      ++VIDMM_PROCESS_FENCE_STORAGE::_GlobalTotalSharedMonitoredFence;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
}
