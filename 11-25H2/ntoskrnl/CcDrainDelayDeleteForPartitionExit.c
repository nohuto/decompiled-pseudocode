/*
 * XREFs of CcDrainDelayDeleteForPartitionExit @ 0x1405790EC
 * Callers:
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403A8B18 (CcDeletePrivateVolumeCacheMap.c)
 */

void __fastcall CcDrainDelayDeleteForPartitionExit(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  struct _KEVENT *v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 768);
  v2 = (_QWORD **)(a1 + 112);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = (_QWORD *)*v3;
    v5 = (struct _KEVENT *)(v3 - 72);
    v6 = v3;
    v3 = v4;
    if ( (_QWORD *)v4[1] != v6 || (v7 = (_QWORD *)v6[1], (_QWORD *)*v7 != v6) )
      __fastfail(3u);
    *v7 = v4;
    v4[1] = v7;
    KeSetEvent(v5 + 49, 0, 0);
    LODWORD(v5[67].Header.WaitListHead.Flink) |= 4u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    CcDeletePrivateVolumeCacheMap((char *)v5);
    KeAcquireInStackQueuedSpinLock(v1, &LockHandle);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
