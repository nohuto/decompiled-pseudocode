/*
 * XREFs of MiCheckZeroFreeRebalance @ 0x14033F29C
 * Callers:
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiNodeFreeZeroPages @ 0x14033FC00 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1403F76CC (MiGetNodeStandbyPageCount.c)
 */

unsigned __int64 __fastcall MiCheckZeroFreeRebalance(__int64 a1, __int64 a2, char a3)
{
  char v4; // si
  unsigned int v5; // ebx
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // r8
  int v10; // esi
  KIRQL v11; // di

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
    result = MiGetNodeStandbyPageCount(a1, v5, v9);
    if ( result >= 0x1000 && !*(_QWORD *)(a1 + 16928) )
    {
      result = *(unsigned int *)(a1 + 4);
      if ( (result & 1) == 0 )
      {
        v10 = 0;
        if ( a3 & 1 | ((a3 & 2) != 0) )
        {
          v11 = 17;
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E30080);
        }
        else
        {
          v11 = ExAcquireSpinLockExclusive(&dword_140E30080);
        }
        if ( !*(_QWORD *)(a1 + 16928)
          && (*(_DWORD *)(a1 + 4) & 1) == 0
          && PsReferencePartitionSafe(*(_QWORD *)(a1 + 184)) )
        {
          *(_QWORD *)(a1 + 16912) = 0LL;
          *(_QWORD *)(a1 + 16928) = MiRebalanceZeroFreeLists;
          v10 = 1;
          *(_QWORD *)(a1 + 16936) = a1;
        }
        result = MiReleaseSpinLockExclusive(&dword_140E30080, v11);
        if ( v10 )
          return ExQueueWorkItemToPartition(a1 + 16912, 1, 0xFFFFFFFF, *(_QWORD *)(a1 + 184));
      }
    }
  }
  return result;
}
