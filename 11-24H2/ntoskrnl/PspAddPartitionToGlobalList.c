/*
 * XREFs of PspAddPartitionToGlobalList @ 0x1405E3F5C
 * Callers:
 *     PspAllocatePartition @ 0x14077AAAC (PspAllocatePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PspAddPartitionToGlobalList(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  __int64 v4; // rbx

  v2 = ExAcquireSpinLockExclusive(&PspActivePartitionListLock);
  v3 = off_140E087E8;
  v4 = a1 + 56;
  if ( *off_140E087E8 != (_UNKNOWN *)&PspActivePartitionListHead )
    __fastfail(3u);
  *(_QWORD *)v4 = &PspActivePartitionListHead;
  *(_QWORD *)(v4 + 8) = v3;
  *v3 = v4;
  off_140E087E8 = (_UNKNOWN **)v4;
  ExReleaseSpinLockExclusive(&PspActivePartitionListLock, v2);
}
