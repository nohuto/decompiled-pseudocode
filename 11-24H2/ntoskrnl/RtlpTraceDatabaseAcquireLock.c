/*
 * XREFs of RtlpTraceDatabaseAcquireLock @ 0x1405F0528
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405F0170 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1405F0390 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1405F0450 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1405F04C0 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1405F0500 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 */

char __fastcall RtlpTraceDatabaseAcquireLock(__int64 a1)
{
  KSPIN_LOCK *v2; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 56);
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
    *(_BYTE *)(a1 + 40) = KeAcquireSpinLockRaiseToDpc(v2);
  else
    ExAcquireFastMutex((PKGUARDED_MUTEX)v2);
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  return 1;
}
