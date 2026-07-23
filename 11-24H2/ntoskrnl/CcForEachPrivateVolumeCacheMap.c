/*
 * XREFs of CcForEachPrivateVolumeCacheMap @ 0x140263914
 * Callers:
 *     CcForEachPartition @ 0x14021AA70 (CcForEachPartition.c)
 *     CcNotifyWriteBehindInternal @ 0x1402638AC (CcNotifyWriteBehindInternal.c)
 *     CcCoalescingCallBack @ 0x140263B80 (CcCoalescingCallBack.c)
 *     CcExitPartition @ 0x14057A020 (CcExitPartition.c)
 *     CcPartitionTelemetryCallback @ 0x140A77C20 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementPrivateVolumeUseCount @ 0x1402639F8 (CcDecrementPrivateVolumeUseCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostPVCMForDeleteToPartition @ 0x1404B2A84 (CcPostPVCMForDeleteToPartition.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall CcForEachPrivateVolumeCacheMap(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // r15
  char v5; // di
  _QWORD *i; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // r9
  int v10; // eax
  _QWORD *v11; // r12
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = (KSPIN_LOCK *)(a1 + 768);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
  for ( i = *(_QWORD **)(a1 + 32); i != (_QWORD *)(a1 + 32); i = v11 )
  {
    v8 = i - 72;
    ++*((_DWORD *)i - 143);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = guard_dispatch_icall_no_overrides(a1, i - 72, a3, v9);
    KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
    v10 = CcDecrementPrivateVolumeUseCount(i - 72);
    v11 = (_QWORD *)*i;
    if ( !v10 )
    {
      v13 = v8[74];
      if ( *(_QWORD **)(v13 + 8) != v8 + 74
        || (v14 = (_QWORD *)v8[75], (_QWORD *)*v14 != v8 + 74)
        || (*v14 = v13, *(_QWORD *)(v13 + 8) = v14, v15 = *i, *(_QWORD **)(*i + 8LL) != i)
        || (v16 = (_QWORD *)i[1], (_QWORD *)*v16 != i) )
      {
        __fastfail(3u);
      }
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      LOBYTE(v15) = 1;
      CcPostPVCMForDeleteToPartition(i - 72, v15, 0LL);
    }
    if ( !v5 )
      break;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
