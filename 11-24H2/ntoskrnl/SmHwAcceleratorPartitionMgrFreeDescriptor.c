/*
 * XREFs of SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404C7018
 * Callers:
 *     SmStoreDecompressBuffer @ 0x1402F9A18 (SmStoreDecompressBuffer.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403830C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z @ 0x1404753A8 (-SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z.c)
 *     SmStoreCompletePendingDecompress @ 0x1404C6F24 (SmStoreCompletePendingDecompress.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x14060DFF8 (SmHwAcceleratorPartitionMgrWakeDescriptorWaiters.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall SmHwAcceleratorPartitionMgrFreeDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  signed __int64 *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r15
  char *v8; // rdi
  __int64 v9; // rdi
  int v10; // esi
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = (signed __int64 *)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v7 = *(int *)(v2 + 60);
  --CurrentThread->KernelApcDisable;
  v8 = (char *)KeAbPreAcquire(a1 + 24, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v8, (__int64)v3);
  if ( v8 )
    v8[10] = 1;
  v9 = a1 + 8 * v7;
  v10 = *(_DWORD *)a2 & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 64LL) & 1) != 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v2 + 48));
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 16), (PSLIST_ENTRY)a2);
    if ( *(_QWORD *)(v9 + 56) )
      v11 = _InterlockedExchange64((volatile __int64 *)(v9 + 56), 0LL);
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  if ( v11 )
    SmHwAcceleratorPartitionMgrWakeDescriptorWaiters(&v11);
  if ( v10 )
    KeAbPostRelease(v9 + 56);
}
