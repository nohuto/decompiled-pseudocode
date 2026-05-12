/*
 * XREFs of NvmeAdapterDeleteChildren @ 0x1400CE554
 * Callers:
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019B714 (NvmeAdapterRemoveDeviceIrp.c)
 * Callees:
 *     NvmeControllerRemoveNvmeNamespaceFromList @ 0x1400F40D0 (NvmeControllerRemoveNvmeNamespaceFromList.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x1400FB03C (NvmeControllerDeleteNvmeNamespace.c)
 */

void __fastcall NvmeAdapterDeleteChildren(__int64 a1)
{
  struct _ERESOURCE *v2; // rbp
  unsigned int v3; // ecx
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // r14
  _QWORD *v7; // r15
  volatile __int32 *v8; // rbx
  _QWORD *v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v11; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_QWORD *)(a1 + 592) )
  {
    v2 = (struct _ERESOURCE *)(a1 + 1176);
    if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v2, 1u);
      v3 = *(_DWORD *)(a1 + 1304);
      v4 = *(_QWORD *)(a1 + 1288) - 112LL;
      v5 = *(_BYTE *)(a1 + 416);
      if ( !v3 )
      {
LABEL_13:
        if ( (v5 & 0x40) != 0 )
        {
          ExReleaseResourceLite(v2);
          KeLeaveCriticalRegion();
        }
        return;
      }
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 1136);
      v3 = 1;
    }
    v6 = v3;
    do
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 632), &LockHandle);
      v7 = (_QWORD *)(v4 + 640);
      while ( 1 )
      {
        v9 = (_QWORD *)*v7;
        if ( (_QWORD *)*v7 == v7 )
          break;
        v8 = (volatile __int32 *)(v9 - 3);
        v11 = v9 - 3;
        NvmeControllerRemoveNvmeNamespaceFromList(v4, v9 - 3, 0LL);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        _InterlockedExchange(v8 + 24, 6);
        NvmeControllerDeleteNvmeNamespace(&v11);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 632), &LockHandle);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = *(_BYTE *)(a1 + 416);
      if ( (v5 & 0x40) != 0 )
        v4 = *(_QWORD *)(v4 + 112) - 112LL;
      --v6;
    }
    while ( v6 );
    goto LABEL_13;
  }
}
