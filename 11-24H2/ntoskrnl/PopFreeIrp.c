/*
 * XREFs of PopFreeIrp @ 0x1403764AC
 * Callers:
 *     PopRequestCompletion @ 0x140376130 (PopRequestCompletion.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x140376270 (PopHandleDevicePowerIrpCompletion.c)
 *     PopSystemIrpCompletion @ 0x140B6F8E0 (PopSystemIrpCompletion.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PopFxReleasePowerIrp @ 0x140376768 (PopFxReleasePowerIrp.c)
 */

LONG_PTR __fastcall PopFreeIrp(PIRP Irp)
{
  __int64 *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rbp
  void *v5; // r14
  __int64 v6; // rcx
  __int64 **v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (__int64 *)*((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v3 = v2[25];
  v4 = (void *)v2[4];
  v5 = (void *)v2[3];
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v6 = *v2;
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  if ( *(__int64 **)(v6 + 8) != v2 || (v7 = (__int64 **)v2[1], *v7 != v2) )
    __fastfail(3u);
  PopIrpLockThread = 0LL;
  *v7 = (__int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 && *((_BYTE *)v2 + 184) == 2 && *((_DWORD *)v2 + 47) == 1 )
  {
    PopFxReleasePowerIrp(v3);
  }
  else
  {
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v2);
    IoFreeIrp(Irp);
  }
  ObfDereferenceObjectWithTag(v4, 0x72496F50u);
  return ObfDereferenceObjectWithTag(v5, 0x72496F50u);
}
