/*
 * XREFs of NvmeAdapterAddNvmeIoControllerToList @ 0x1400CC96C
 * Callers:
 *     NvmeAdapterStartFabricNvmeControllerOperations @ 0x1400E8424 (NvmeAdapterStartFabricNvmeControllerOperations.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterAddNvmeIoControllerToList(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 **v7; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 592) + 128LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v4, &LockHandle);
  v5 = (__int64 *)(a2 + 80);
  v6 = *(_QWORD *)(a1 + 592) + 136LL;
  v7 = *(__int64 ***)(*(_QWORD *)(a1 + 592) + 144LL);
  if ( *v7 != (__int64 *)v6 )
    __fastfail(3u);
  v5[1] = (__int64)v7;
  *v5 = v6;
  *v7 = v5;
  *(_QWORD *)(v6 + 8) = v5;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 592) + 152LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
