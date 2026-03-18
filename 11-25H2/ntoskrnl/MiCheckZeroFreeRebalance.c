/*
 * XREFs of MiCheckZeroFreeRebalance @ 0x1403BCA78
 * Callers:
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     MiNodeFreeZeroPages @ 0x1403BCBB0 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1403BCCEC (MiGetNodeStandbyPageCount.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 */

unsigned __int64 __fastcall MiCheckZeroFreeRebalance(__int64 a1, __int64 a2, char a3)
{
  char v4; // si
  unsigned int v5; // ebx
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // esi
  KIRQL v12; // di

  v4 = 0;
  v5 = ((unsigned int)a2 >> 9) & 0x3F;
  v7 = *(_QWORD *)(a1 + 16) + 57216LL * v5;
  if ( (unsigned __int8)MmNumberOfChannels > 1u )
    v4 = BYTE1(a2) & 1;
  LOBYTE(a2) = v4;
  result = MiNodeFreeZeroPages(v7, a2, 0x80000LL);
  if ( result < 0x200 )
  {
    LOBYTE(v9) = v4;
    result = MiGetNodeStandbyPageCount(a1, v5, v9, v10);
    if ( result >= 0x1000 && !*(_QWORD *)(a1 + 16928) )
    {
      result = *(unsigned int *)(a1 + 4);
      if ( (result & 1) == 0 )
      {
        v11 = 0;
        if ( a3 & 1 | ((a3 & 2) != 0) )
        {
          v12 = 17;
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FD00);
        }
        else
        {
          v12 = ExAcquireSpinLockExclusive(&dword_140E2FD00);
        }
        if ( !*(_QWORD *)(a1 + 16928)
          && (*(_DWORD *)(a1 + 4) & 1) == 0
          && (unsigned __int8)PsReferencePartitionSafe(*(_QWORD *)(a1 + 184)) )
        {
          *(_QWORD *)(a1 + 16912) = 0LL;
          *(_QWORD *)(a1 + 16928) = MiRebalanceZeroFreeLists;
          v11 = 1;
          *(_QWORD *)(a1 + 16936) = a1;
        }
        result = MiReleaseSpinLockExclusive(&dword_140E2FD00, v12);
        if ( v11 )
          return ExQueueWorkItemToPartition((_QWORD *)(a1 + 16912), 1, 0xFFFFFFFF, *(_QWORD *)(a1 + 184));
      }
    }
  }
  return result;
}
