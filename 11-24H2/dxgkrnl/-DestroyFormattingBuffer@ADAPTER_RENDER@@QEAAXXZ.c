/*
 * XREFs of ?DestroyFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1400681A4
 * Callers:
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x14019BC2C (--1ADAPTER_RENDER@@QEAA@XZ.c)
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x14019D54C (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyFormattingBuffer(ADAPTER_RENDER *this)
{
  void *v1; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (void *)*((_QWORD *)this + 156);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 157, &LockHandle);
  *((_QWORD *)this + 156) = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v1 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v1);
}
