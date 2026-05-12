/*
 * XREFs of NvmeControllerRemoveNvmeNamespaceFromList @ 0x1400F40D0
 * Callers:
 *     NvmeAdapterDeleteChildren @ 0x1400CE554 (NvmeAdapterDeleteChildren.c)
 *     NvmeNamespaceDeleteDeviceIrp @ 0x1400FD7E8 (NvmeNamespaceDeleteDeviceIrp.c)
 * Callees:
 *     StorRemoveDictionary @ 0x140027378 (StorRemoveDictionary.c)
 */

void __fastcall NvmeControllerRemoveNvmeNamespaceFromList(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  int v8; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 632), &LockHandle);
  v6 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(v6 + 8) != a2 + 24 || (v7 = *(_QWORD **)(a2 + 32), *v7 != a2 + 24) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = --*(_DWORD *)(a1 + 656);
  StorRemoveDictionary(a1 + 664, *(unsigned int *)(a2 + 56));
  if ( a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v8 )
    KeSetEvent((PRKEVENT)(a1 + 256), 0, 0);
}
