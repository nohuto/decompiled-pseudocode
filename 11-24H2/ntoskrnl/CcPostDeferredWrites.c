/*
 * XREFs of CcPostDeferredWrites @ 0x1402795B0
 * Callers:
 *     CcLazyWriteScan @ 0x1402654C8 (CcLazyWriteScan.c)
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCachePostProcess @ 0x1402791F0 (CcFlushCachePostProcess.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14040B624 (CcNotifyOfMappedWriteComplete.c)
 *     CcReapPrivateVolumeCachemap @ 0x14042FCA4 (CcReapPrivateVolumeCachemap.c)
 *     CcUnpinRepinnedBcb @ 0x14048F410 (CcUnpinRepinnedBcb.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x140496AE0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x1405785D0 (CcDeferWrite.c)
 *     CcPostDeferredWritesOnVolumeHelper @ 0x140579990 (CcPostDeferredWritesOnVolumeHelper.c)
 *     CcExitPartition @ 0x14057A020 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402E624C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcCanIWriteStreamEx @ 0x14040C5C0 (CcCanIWriteStreamEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
                                                    / (unsigned __int64)KeMaximumIncrement)) )
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
