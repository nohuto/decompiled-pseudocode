/*
 * XREFs of SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x1404CDC48
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140389780 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmStoreDecompressBuffer @ 0x14039C718 (SmStoreDecompressBuffer.c)
 *     ?SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z @ 0x140479B18 (-SmStoreDecompressBufferContextCleanup@@YAXPEAU_SM_STORE_DECOMPRESS_BUFFER_CONTEXT@@@Z.c)
 *     SmStoreCompletePendingDecompress @ 0x1404CDB54 (SmStoreCompletePendingDecompress.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x14060FA38 (SmHwAcceleratorPartitionMgrWakeDescriptorWaiters.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall SmHwAcceleratorPartitionMgrFreeDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  signed __int64 *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r15
  _QWORD *v8; // rdi
  __int64 v9; // rdi
  int v10; // esi
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = (signed __int64 *)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v7 = *(int *)(v2 + 60);
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire(a1 + 24, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v8, (__int64)v3);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
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
