/*
 * XREFs of MiDrainCrossPartitionUsage @ 0x14068A0B4
 * Callers:
 *     MiDeletePartition @ 0x1407EC62C (MiDeletePartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExRundownCompletedCacheAware @ 0x14045AE10 (ExRundownCompletedCacheAware.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14045AE50 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     MiDecrementControlAreaCount @ 0x14045E248 (MiDecrementControlAreaCount.c)
 *     MiDecrementCloneHeaderCount @ 0x1404F52D0 (MiDecrementCloneHeaderCount.c)
 *     CcExitPartition @ 0x14057CB90 (CcExitPartition.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140672268 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiStoreDeletePartition @ 0x14068BE24 (MiStoreDeletePartition.c)
 *     SmDeletePartition @ 0x140797340 (SmDeletePartition.c)
 */

void __fastcall MiDrainCrossPartitionUsage(__int64 a1)
{
  volatile LONG *v2; // r14
  KIRQL v3; // bl
  KIRQL v4; // bl
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v7; // rcx
  struct _KEVENT Object; // [rsp+30h] [rbp-20h] BYREF

  Object.Header.SignalState = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.LockNV = 393216;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  v2 = (volatile LONG *)(a1 + 1728);
  v3 = ExAcquireSpinLockExclusive(&dword_140E2FF40);
  ExAcquireSpinLockExclusiveAtDpcLevel(v2);
  _InterlockedOr((volatile signed __int32 *)(a1 + 4), 1u);
  *(_QWORD *)(a1 + 2768) = &Object;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1728));
  MiReleaseSpinLockExclusive(&dword_140E2FF40, v3);
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 1744));
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 1736));
  MiMakeUnusedSegmentDeleteOnClose(a1);
  CcExitPartition(*(_QWORD **)(a1 + 184), 0);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  v5 = 7LL;
  v6 = (_QWORD *)(a1 + 2696);
  while ( v5 < 9 )
  {
    if ( *v6 )
    {
      KeResetEvent(&Object);
      *(_QWORD *)(a1 + 2760) = &Object;
      break;
    }
    ++v5;
    v6 += 4;
  }
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v4);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2776) = &Object;
  MiDecrementCloneHeaderCount(a1);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  CcExitPartition(*(_QWORD **)(a1 + 184), 1);
  MiStoreDeletePartition(a1);
  SmDeletePartition(*(_QWORD *)(a1 + 184));
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 18376));
  _InterlockedExchange64((volatile __int64 *)(a1 + 18376), 1LL);
  v7 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2784);
  if ( v7 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(v7);
    ExRundownCompletedCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 2784));
  }
}
