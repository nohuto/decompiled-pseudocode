/*
 * XREFs of CcPostDeferredWrites @ 0x1402AAB14
 * Callers:
 *     CcFlushCachePostProcessOneRange @ 0x1402AACA0 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCachePostProcess @ 0x1402ABF10 (CcFlushCachePostProcess.c)
 *     CcReapPrivateVolumeCachemap @ 0x1402CA344 (CcReapPrivateVolumeCachemap.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x1402CC0E0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402CC554 (CcNotifyOfMappedWriteComplete.c)
 *     CcLazyWriteScan @ 0x14043BAE8 (CcLazyWriteScan.c)
 *     CcUnpinRepinnedBcb @ 0x140494980 (CcUnpinRepinnedBcb.c)
 *     CcLazyWriteScanVolume @ 0x1404B5560 (CcLazyWriteScanVolume.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x14057B140 (CcDeferWrite.c)
 *     CcPostDeferredWritesOnVolumeHelper @ 0x14057C500 (CcPostDeferredWritesOnVolumeHelper.c)
 *     CcExitPartition @ 0x14057CB90 (CcExitPartition.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402CD54C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcCanIWriteStreamEx @ 0x1402CE730 (CcCanIWriteStreamEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KEVENT *v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
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
                                                    / (unsigned __int64)(unsigned int)KeMaximumIncrement)) )
        {
          v2 = v12;
LABEL_16:
          v16 = *v9;
          if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v17 = (_QWORD *)v9[1], (_QWORD *)*v17 != v9) )
            __fastfail(3u);
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
          break;
        }
        v9 = (_QWORD *)*v9;
      }
      v10 = NewIrql;
    }
    KeReleaseSpinLock(v6, v10);
    if ( !v7 )
      break;
    v15 = (struct _KEVENT *)v7[5];
    if ( v15 )
    {
      KeSetEvent(v15, 0, 0);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v7[7], v7[8], v13, v14);
      ExFreePoolWithTag(v7, 0x77446343u);
      CcDereferencePartitionAndPrivateVolumeCacheMap(a1, a2);
    }
  }
}
