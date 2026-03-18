/*
 * XREFs of CcDeletePrivateVolumeCacheMap @ 0x1402CB768
 * Callers:
 *     CcReapPrivateVolumeCachemap @ 0x1402CA344 (CcReapPrivateVolumeCachemap.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1402CA5A8 (CcCreatePrivateVolumeCacheMap.c)
 *     CcDrainDelayDeleteForPartitionExit @ 0x14057C3FC (CcDrainDelayDeleteForPartitionExit.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     CcDeleteNumaNode @ 0x1402CBD74 (CcDeleteNumaNode.c)
 *     CcForEachNumaNode @ 0x1402CBE88 (CcForEachNumaNode.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402CD480 (CcDecrementVolumeUseCountWithDelete.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD54C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeCancelTimer @ 0x140333B20 (KeCancelTimer.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     ZwWaitForSingleObject @ 0x1406A6490 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeletePrivateVolumeCacheMap(char *P)
{
  _QWORD *v1; // rbp
  __int64 v3; // rsi
  void *v4; // rcx
  _QWORD **v5; // rbx
  _QWORD *v6; // rcx
  void *v7; // rcx
  _QWORD **v8; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v1 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcDeletePrivateVolumeCacheMap-BEGIN: PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P,
    *((_DWORD *)P + 6));
  v3 = *((_QWORD *)P + 4);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcDeletePrivateVolumeCacheMap: PVCM:%p(vid:%2lx) Setting ExitEvent\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P,
    *((_DWORD *)P + 6));
  KeSetEvent((PRKEVENT)P + 49, 0, 0);
  KeSetEvent((PRKEVENT)P + 50, 0, 0);
  v4 = (void *)*((_QWORD *)P + 153);
  if ( v4 )
  {
    ZwWaitForSingleObject(v4, 0, 0LL);
    ZwClose(*((HANDLE *)P + 153));
    *((_QWORD *)P + 153) = 0LL;
  }
  if ( *((_QWORD *)P + 5) )
    CcDecrementVolumeUseCountWithDelete();
  while ( *((_QWORD *)P + 1) != 1LL )
    KeDelayExecutionThread(0, 0, &Cc5MicroSeconds);
  CcDereferencePartitionAndPrivateVolumeCacheMap(v3, P);
  if ( P[984] )
  {
    P[984] = 0;
    KeCancelTimer((PKTIMER)(P + 920));
  }
  v5 = (_QWORD **)(P + 1560);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v13 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
LABEL_28:
      __fastfail(3u);
    *v5 = v13;
    v13[1] = v5;
    ExFreePoolWithTag(v6, 0x71576343u);
  }
  v7 = (void *)*((_QWORD *)P + 134);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x70546343u);
    *((_QWORD *)P + 134) = 0LL;
  }
  CcForEachNumaNode(CcUnInitializeAsyncReadForNodeHelper, v3, P, 0LL);
  CcForEachNumaNode(CcUninitializeAsyncLazywriteForNodeHelper, v3, P, 0LL);
  v8 = (_QWORD **)(P + 48);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      break;
    if ( (_QWORD **)v9[1] != v8 )
      goto LABEL_28;
    v10 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_28;
    *v8 = v10;
    v11 = v9 - 4;
    v10[1] = v8;
    CcDeleteNumaNode(v11);
    if ( v1 )
      v11 = v1;
    v1 = v11;
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x754E6343u);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcDeletePrivateVolumeCacheMap-END: PVCM:%p(vid:%2lx), PVCMCount:%lu\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    P,
    *((_DWORD *)P + 6),
    *(_DWORD *)(v3 + 48) - 1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 768), &LockHandle);
  if ( (*(_DWORD *)(v3 + 48))-- == 1 )
    KeSetEvent((PRKEVENT)(v3 + 56), 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExFreePoolWithTag(P, 0x6D566343u);
}
