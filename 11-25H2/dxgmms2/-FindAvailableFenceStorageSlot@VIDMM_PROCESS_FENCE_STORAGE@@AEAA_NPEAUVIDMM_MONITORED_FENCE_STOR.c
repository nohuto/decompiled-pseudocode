/*
 * XREFs of ?FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140027A64
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140027804 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 * Callees:
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x140027B28 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 */

char __fastcall VIDMM_PROCESS_FENCE_STORAGE::FindAvailableFenceStorageSlot(
        VIDMM_PROCESS_FENCE_STORAGE *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  VIDMM_PROCESS_FENCE_STORAGE *v4; // rbx
  VIDMM_PROCESS_FENCE_STORAGE *v5; // rax
  VIDMM_PROCESS_FENCE_STORAGE **v6; // rcx
  VIDMM_PROCESS_FENCE_STORAGE **v7; // rax
  __int64 v8; // rcx
  char v9; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 15, &LockHandle);
  v4 = (VIDMM_PROCESS_FENCE_STORAGE *)*((_QWORD *)this + 3);
  if ( v4 == (VIDMM_PROCESS_FENCE_STORAGE *)((char *)this + 24) )
  {
    v9 = 0;
  }
  else
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(*((VIDMM_FENCE_STORAGE_PAGE **)this + 3), a2);
    if ( *((_QWORD *)v4 + 12) == -1LL )
    {
      v5 = *(VIDMM_PROCESS_FENCE_STORAGE **)v4;
      if ( *(VIDMM_PROCESS_FENCE_STORAGE **)(*(_QWORD *)v4 + 8LL) != v4
        || (v6 = (VIDMM_PROCESS_FENCE_STORAGE **)*((_QWORD *)v4 + 1), *v6 != v4)
        || (*v6 = v5,
            *((_QWORD *)v5 + 1) = v6,
            v7 = (VIDMM_PROCESS_FENCE_STORAGE **)((char *)this + 8),
            v8 = *((_QWORD *)this + 1),
            *(VIDMM_PROCESS_FENCE_STORAGE **)(v8 + 8) != (VIDMM_PROCESS_FENCE_STORAGE *)((char *)this + 8)) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)v4 = v8;
      *((_QWORD *)v4 + 1) = v7;
      *(_QWORD *)(v8 + 8) = v4;
      *v7 = v4;
    }
    v9 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v9;
}
