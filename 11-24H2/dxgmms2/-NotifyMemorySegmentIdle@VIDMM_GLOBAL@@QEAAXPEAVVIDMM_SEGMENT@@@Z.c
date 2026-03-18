/*
 * XREFs of ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140042A50
 * Callers:
 *     VidMmSetSegmentPowerState @ 0x140042A00 (VidMmSetSegmentPowerState.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1400D0D60 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z.c)
 *     ?DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400F07F0 (-DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140042930 (-NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyMemorySegmentIdle(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  int v4; // ebp
  _DWORD *v5; // rsi
  struct _KEVENT *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = 1 << *((_BYTE *)a2 + 40);
  v5 = *(_DWORD **)(*((_QWORD *)this + 5029) + 8LL * *((unsigned __int16 *)a2 + 210));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 5139, &LockHandle);
  *((_QWORD *)this + 5140) = KeGetCurrentThread();
  if ( !*((_QWORD *)a2 + 34) && !*((_BYTE *)a2 + 412) )
  {
    v5[118] &= ~v4;
    if ( v5[26] != VIDMM_SEGMENT::DriverId(a2) && v5[22] != VIDMM_SEGMENT::DriverId(a2) )
      VIDMM_GLOBAL::NotifyMemorySegmentHasData(this);
    if ( !v5[118] )
    {
      v6 = (struct _KEVENT *)*((_QWORD *)this + 5555);
      *((_BYTE *)this + 40942) = 1;
      KeSetEvent(v6, 0, 0);
    }
  }
  *((_QWORD *)this + 5140) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
