/*
 * XREFs of MiDrainCrossPartitionUsage @ 0x14068B1E4
 * Callers:
 *     MiDeletePartition @ 0x1407ECBFC (MiDeletePartition.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExRundownCompletedCacheAware @ 0x1404501B0 (ExRundownCompletedCacheAware.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1404501F0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     MiDecrementControlAreaCount @ 0x140453308 (MiDecrementControlAreaCount.c)
 *     MiDecrementCloneHeaderCount @ 0x1404F2BD0 (MiDecrementCloneHeaderCount.c)
 *     CcExitPartition @ 0x14057A020 (CcExitPartition.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140673438 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiStoreDeletePartition @ 0x14068CF54 (MiStoreDeletePartition.c)
 *     SmDeletePartition @ 0x140797450 (SmDeletePartition.c)
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
  v3 = ExAcquireSpinLockExclusive(&dword_140E30080);
  ExAcquireSpinLockExclusiveAtDpcLevel(v2);
  _InterlockedOr((volatile signed __int32 *)(a1 + 4), 1u);
  *(_QWORD *)(a1 + 2768) = &Object;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1728));
  MiReleaseSpinLockExclusive(&dword_140E30080, v3);
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
