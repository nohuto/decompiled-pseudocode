/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14001C3A4
 * Callers:
 *     VidMmAllocateFenceStorageSlot @ 0x1400F9310 (VidMmAllocateFenceStorageSlot.c)
 * Callees:
 *     ?FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14001C604 (-FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14001C6C8 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x14001D0C8 (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 *     ?FindAvailableCurrentValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14004D008 (-FindAvailableCurrentValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FEN.c)
 *     ?FindAvailableMonitoredValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x14004D0CC (-FindAvailableMonitoredValueStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@AEAA_NPEAUVIDMM_MONITORED_F.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1400A8610 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@_NW4VIDMM_NATIVE_FENCE_STORAGE_TYPE@@@Z @ 0x1401030A0 (--0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@_NW4VIDMM_NATIVE_FENCE_STORAG.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  KSPIN_LOCK v3; // rax
  __int64 v6; // rax
  VIDMM_FENCE_STORAGE_PAGE *v7; // rax
  VIDMM_FENCE_STORAGE_PAGE *v8; // rdi
  int v9; // r15d
  VIDMM_FENCE_STORAGE_PAGE *v10; // rcx
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  VIDMM_FENCE_STORAGE_PAGE *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  VIDMM_FENCE_STORAGE_PAGE *v18; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v3 = *this;
  if ( !*((_BYTE *)a2 + 40) )
  {
    if ( v3 )
      ++*(_DWORD *)(v3 + 216);
    if ( VIDMM_PROCESS_FENCE_STORAGE::FindAvailableFenceStorageSlot((VIDMM_PROCESS_FENCE_STORAGE *)this, a2) )
      return 0LL;
    v6 = operator new(176LL, 875850070LL, 64LL);
    if ( v6 )
    {
      v7 = (VIDMM_FENCE_STORAGE_PAGE *)VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v6, this, 0LL, 0LL);
      v8 = v7;
      if ( v7 )
      {
        v9 = VIDMM_FENCE_STORAGE_PAGE::Init(v7, 0LL);
        v10 = v8;
        if ( v9 >= 0 )
        {
          VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v8, a2);
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
          v11 = (char *)(this + 3);
LABEL_10:
          v12 = *(_QWORD *)v11;
          if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
            __fastfail(3u);
          *(_QWORD *)v8 = v12;
          *((_QWORD *)v8 + 1) = v11;
          *(_QWORD *)(v12 + 8) = v8;
          *(_QWORD *)v11 = v8;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          return 0LL;
        }
        goto LABEL_12;
      }
    }
    return 3221225495LL;
  }
  if ( v3 )
    ++*(_DWORD *)(v3 + 220);
  if ( *((_DWORD *)a2 + 11) == 1 )
  {
    if ( !VIDMM_PROCESS_FENCE_STORAGE::FindAvailableCurrentValueStorageSlot((VIDMM_PROCESS_FENCE_STORAGE *)this, a2) )
    {
      v13 = operator new(176LL, 875850070LL, 64LL);
      if ( v13 )
      {
        LOBYTE(v14) = 1;
        v15 = (VIDMM_FENCE_STORAGE_PAGE *)VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v13, this, v14, 1LL);
        v8 = v15;
        if ( v15 )
        {
          v9 = VIDMM_FENCE_STORAGE_PAGE::Init(v15, 0LL);
          v10 = v8;
          if ( v9 >= 0 )
          {
            VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v8, a2);
            memset(&LockHandle, 0, sizeof(LockHandle));
            KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
            v11 = (char *)(this + 9);
            goto LABEL_10;
          }
          goto LABEL_12;
        }
      }
      return 3221225495LL;
    }
    return 0LL;
  }
  if ( VIDMM_PROCESS_FENCE_STORAGE::FindAvailableMonitoredValueStorageSlot((VIDMM_PROCESS_FENCE_STORAGE *)this, a2) )
    return 0LL;
  v16 = operator new(176LL, 875850070LL, 64LL);
  if ( v16 )
  {
    LOBYTE(v17) = 1;
    v18 = (VIDMM_FENCE_STORAGE_PAGE *)VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v16, this, v17, 2LL);
    v8 = v18;
    if ( v18 )
    {
      v9 = VIDMM_FENCE_STORAGE_PAGE::Init(v18, 0LL);
      v10 = v8;
      if ( v9 >= 0 )
      {
        VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v8, a2);
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock(this + 15, &LockHandle);
        v11 = (char *)(this + 11);
        goto LABEL_10;
      }
LABEL_12:
      VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v10, 1u);
      return (unsigned int)v9;
    }
  }
  return 3221225495LL;
}
