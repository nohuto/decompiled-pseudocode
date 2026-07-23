/*
 * XREFs of MmManagePartitionSetMemoryThresholds @ 0x14068CCFC
 * Callers:
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MmManagePartitionSetMemoryThresholds(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  KIRQL v5; // al

  v3 = *a1;
  if ( *(_DWORD *)a2 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 < *(_QWORD *)(a2 + 8) )
  {
    if ( v4 )
      return 3221225485LL;
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 200));
  *(_QWORD *)(v3 + 16624) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 16632) = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(v3 + 12) = 1;
  MiReleaseSpinLockExclusive((_DWORD *)(v3 + 200), v5);
  KeSetEvent((PRKEVENT)(*(_QWORD *)(v3 + 17600) + 96LL), 0, 0);
  return 0LL;
}
