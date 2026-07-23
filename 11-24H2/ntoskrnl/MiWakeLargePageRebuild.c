/*
 * XREFs of MiWakeLargePageRebuild @ 0x140261C8C
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiSignalLargePageRebuild @ 0x140354758 (MiSignalLargePageRebuild.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiWakeLargePageRebuild(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rsi
  int v6; // ebx
  unsigned __int8 v8; // al
  ULONG_PTR v9; // r10

  v3 = 1;
  v5 = *(_QWORD *)(a1 + 16) + 57216LL * a2;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 15228));
  if ( !*(_BYTE *)(v5 + 5185) )
  {
    if ( *(_BYTE *)(v5 + 5186) != 8 && !v6 )
      goto LABEL_5;
    v8 = PsReferencePartitionSafe(*(_QWORD *)(a1 + 184));
    v3 = v8;
    if ( v8 )
    {
      *(_BYTE *)(v9 + 33) = 1;
      *(_QWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 16) = MiRebuildLargePages;
      *(_QWORD *)(v9 + 24) = v5;
      ExQueueWorkItemToPartition(v9);
    }
  }
  if ( !v6 )
LABEL_5:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 15228));
  return v3;
}
