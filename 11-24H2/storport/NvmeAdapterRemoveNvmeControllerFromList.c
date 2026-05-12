/*
 * XREFs of NvmeAdapterRemoveNvmeControllerFromList @ 0x1400D68C8
 * Callers:
 *     NvmeAdapterStopFabricControllerNamespaces @ 0x1400E87D8 (NvmeAdapterStopFabricControllerNamespaces.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterRemoveNvmeControllerFromList(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 592) + 128LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
  v5 = (_QWORD *)(a2 + 80);
  v6 = *v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  --*(_DWORD *)(*(_QWORD *)(a1 + 592) + 152LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
