/*
 * XREFs of MiCheckZeroFreeRebalance @ 0x1403D3018
 * Callers:
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     MiNodeFreeZeroPages @ 0x1403D3160 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1403D329C (MiGetNodeStandbyPageCount.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
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
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FF40);
        }
        else
        {
          v12 = ExAcquireSpinLockExclusive(&dword_140E2FF40);
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
        result = MiReleaseSpinLockExclusive(&dword_140E2FF40, v12);
        if ( v11 )
          return ExQueueWorkItemToPartition(a1 + 16912, 1, 0xFFFFFFFF, *(_QWORD *)(a1 + 184));
      }
    }
  }
  return result;
}
