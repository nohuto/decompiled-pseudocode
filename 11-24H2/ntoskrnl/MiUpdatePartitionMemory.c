/*
 * XREFs of MiUpdatePartitionMemory @ 0x14068CAF4
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1407FCD8C (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiComputeNodeMemory @ 0x14066D960 (MiComputeNodeMemory.c)
 */

void __fastcall MiUpdatePartitionMemory(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v3; // rdi
  KIRQL v7; // al
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 v10; // r14

  v3 = (_DWORD *)(a1 + 200);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 80) = v9;
  MiReleaseSpinLockExclusive(v3, v7);
  MiComputeNodeMemory((ULONG *)a1, a3);
  if ( v8 )
    MiDereferencePageRuns(v8);
  if ( v10 )
    MiDereferencePageRuns(v10);
}
