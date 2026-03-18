/*
 * XREFs of CcReapPrivateVolumeCachemapWorkerThread @ 0x1402C9E90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x1402A7F20 (CcDereferencePartition.c)
 *     CcReapPrivateVolumeCachemap @ 0x1402CA344 (CcReapPrivateVolumeCachemap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcReapPrivateVolumeCachemapWorkerThread(_QWORD *a1)
{
  __int64 v1; // rsi
  _QWORD **v3; // r14
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[7];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = (_QWORD **)(v1 + 80);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 )
      goto LABEL_7;
    v6 = (_QWORD *)v4[1];
    if ( (_QWORD *)*v6 != v4 )
      goto LABEL_7;
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    CcReapPrivateVolumeCachemap(v4 - 72);
  }
  v7 = *(_QWORD **)(v1 + 104);
  if ( *v7 != v1 + 96 )
LABEL_7:
    __fastfail(3u);
  a1[1] = v7;
  *a1 = v1 + 96;
  *v7 = a1;
  *(_QWORD *)(v1 + 104) = a1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return CcDereferencePartition(v1);
}
