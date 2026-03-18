/*
 * XREFs of PspAddPartitionToGlobalList @ 0x1405DA7DC
 * Callers:
 *     PspAllocatePartition @ 0x14076B05C (PspAllocatePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PspAddPartitionToGlobalList(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  __int64 v4; // rbx

  v2 = ExAcquireSpinLockExclusive(&PspActivePartitionListLock);
  v3 = off_140E08698;
  v4 = a1 + 56;
  if ( *off_140E08698 != (_UNKNOWN *)&PspActivePartitionListHead )
    __fastfail(3u);
  *(_QWORD *)v4 = &PspActivePartitionListHead;
  *(_QWORD *)(v4 + 8) = v3;
  *v3 = v4;
  off_140E08698 = (_UNKNOWN **)v4;
  ExReleaseSpinLockExclusive(&PspActivePartitionListLock, v2);
}
