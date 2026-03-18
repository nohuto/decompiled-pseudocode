/*
 * XREFs of ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1400418F0
 * Callers:
 *     ?IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400CE188 (-IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400CE7B0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140042930 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400F71BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentActive(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  char v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  VIDMM_SEGMENT *v7; // rcx
  VIDMM_SEGMENT *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * *((unsigned __int16 *)a2 + 210));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5139, &LockHandle);
  *((_QWORD *)this + 5140) = KeGetCurrentThread();
  v6 = *(unsigned int *)(v5 + 472);
  *(_DWORD *)(v5 + 472) = v6 | (1 << *((_BYTE *)a2 + 40));
  *((_QWORD *)this + 5140) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !(_DWORD)v6 && *(_DWORD *)(v5 + 64) )
  {
    do
    {
      v7 = *(VIDMM_SEGMENT **)(*(_QWORD *)(v5 + 1648) + 8 * v6);
      if ( *((_DWORD *)v7 + 102) != -1
        && (*(_DWORD *)(v5 + 104) == VIDMM_SEGMENT::DriverId(v7) || *(_DWORD *)(v5 + 88) == VIDMM_SEGMENT::DriverId(v8)) )
      {
        if ( (unsigned int)VIDMM_GLOBAL::NotifyMemorySegmentHasData(this, *((_DWORD *)a2 + 102), 1u) == -1071775466
          && (*(_BYTE *)(v5 + 476) & 0x20) != 0 )
        {
          *(_BYTE *)(v5 + 477) |= 1u;
          v4 = 1;
        }
        *(_BYTE *)(v5 + 477) &= ~2u;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *(_DWORD *)(v5 + 64) );
  }
  VIDMM_GLOBAL::NotifyMemorySegmentHasData(this, *((_DWORD *)a2 + 102), 1u);
  if ( (*(_BYTE *)(v5 + 477) & 1) != 0 )
  {
    if ( v4 )
      VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((unsigned __int16 *)a2 + 210), 1u);
  }
}
