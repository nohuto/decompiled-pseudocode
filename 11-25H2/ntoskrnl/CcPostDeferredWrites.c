/*
 * XREFs of CcPostDeferredWrites @ 0x1403A5FC4
 * Callers:
 *     CcFlushCachePostProcessOneRange @ 0x1402D9210 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCachePostProcess @ 0x1402D9BE0 (CcFlushCachePostProcess.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1403A6780 (CcNotifyOfMappedWriteComplete.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1403A72C0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcUnpinRepinnedBcb @ 0x1403A73C0 (CcUnpinRepinnedBcb.c)
 *     CcReapPrivateVolumeCachemap @ 0x1403A7DF4 (CcReapPrivateVolumeCachemap.c)
 *     CcLazyWriteScanVolume @ 0x1404B5AC0 (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404BE770 (CcLazyWriteScan.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 *     CcPostDeferredWritesOnVolumeHelper @ 0x1405791F0 (CcPostDeferredWritesOnVolumeHelper.c)
 *     CcExitPartition @ 0x140579880 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403A549C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcCanIWriteStreamEx @ 0x1403A62E0 (CcCanIWriteStreamEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall CcPostDeferredWrites(__int64 a1, __int64 a2)
{
  int v2; // r13d
  _QWORD **v3; // r14
  KSPIN_LOCK *v6; // r12
  _QWORD *v7; // rsi
  KIRQL v8; // al
  _QWORD *v9; // rdi
  KIRQL v10; // dl
  int v11; // r9d
  int v12; // ebx
  struct _KEVENT *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]

  v2 = 0;
  v3 = (_QWORD **)(a2 + 1104);
  if ( !CcEnablePerVolumeLazyWriter )
    v3 = (_QWORD **)(a1 + 1168);
  v6 = (KSPIN_LOCK *)(a1 + 1216);
  while ( 1 )
  {
    v7 = 0LL;
    v8 = KeAcquireSpinLockRaiseToDpc(v6);
    v9 = *v3;
    v10 = v8;
    NewIrql = v8;
    if ( *v3 != v3 )
    {
      while ( 1 )
      {
        v7 = 0LL;
        if ( v9 == v3 )
          break;
        v7 = v9 - 3;
        if ( *(_BYTE *)(a1 + 1294) > 1u )
          goto LABEL_16;
        v11 = *((_DWORD *)v7 + 4);
        v12 = v11 + v2;
        if ( (unsigned __int8)CcCanIWriteStreamEx(a1, a2, v7[1], v11, v2, 2, 0LL)
          && (!*((_BYTE *)v7 + 88)
           || MEMORY[0xFFFFF78000000320] >= (__int64)(v7[12]
                                                    + (unsigned int)(10000 * CcSoftThrottleDelay)
                                                    / (unsigned __int64)KeMaximumIncrement)) )
        {
          v2 = v12;
LABEL_16:
          v14 = *v9;
          if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v15 = (_QWORD *)v9[1], (_QWORD *)*v15 != v9) )
            __fastfail(3u);
          *v15 = v14;
          *(_QWORD *)(v14 + 8) = v15;
          break;
        }
        v9 = (_QWORD *)*v9;
      }
      v10 = NewIrql;
    }
    KeReleaseSpinLock(v6, v10);
    if ( !v7 )
      break;
    v13 = (struct _KEVENT *)v7[5];
    if ( v13 )
    {
      KeSetEvent(v13, 0, 0);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v7[7], v7[8]);
      ExFreePoolWithTag(v7, 0x77446343u);
      CcDereferencePartitionAndPrivateVolumeCacheMap(a1, a2);
    }
  }
}
