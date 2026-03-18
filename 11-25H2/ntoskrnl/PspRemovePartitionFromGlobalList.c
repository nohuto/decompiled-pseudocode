/*
 * XREFs of PspRemovePartitionFromGlobalList @ 0x1405DA83C
 * Callers:
 *     PspDeletePartition @ 0x14076B430 (PspDeletePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PspRemovePartitionFromGlobalList(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = ExAcquireSpinLockExclusive(&PspActivePartitionListLock);
  v3 = (_QWORD *)(a1 + 56);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  ExReleaseSpinLockExclusive(&PspActivePartitionListLock, v2);
}
