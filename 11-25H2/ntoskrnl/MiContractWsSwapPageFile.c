/*
 * XREFs of MiContractWsSwapPageFile @ 0x140A0514C
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MmInSwapWorkingSet @ 0x140454FFC (MmInSwapWorkingSet.c)
 *     MmInSwapVirtualAddresses @ 0x140A04B54 (MmInSwapVirtualAddresses.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 *     MiWsSwapPageFileNumber @ 0x1403D8A28 (MiWsSwapPageFileNumber.c)
 *     MiNumberWsSwapPagefiles @ 0x14047785C (MiNumberWsSwapPagefiles.c)
 */

char __fastcall MiContractWsSwapPageFile(__int64 a1)
{
  unsigned __int32 v1; // eax
  __int64 v2; // r11
  unsigned int v3; // eax
  __int64 v4; // r11
  unsigned int *v5; // rcx
  __int64 v6; // r11

  v1 = MiNumberWsSwapPagefiles(a1);
  if ( v1 )
  {
    v3 = MiWsSwapPageFileNumber(v2);
    v5 = *(unsigned int **)(v4 + 8LL * v3 + 18528);
    v1 = v5[3];
    if ( v1 >= 0x10000 )
    {
      v1 = v5[5];
      if ( v1 >= 0x10000 && (unsigned __int64)*v5 - 0x10000 >= v5[2] )
      {
        v1 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 1168), 1, 0);
        if ( !v1 )
        {
          LOBYTE(v1) = PsReferencePartitionSafe(*(_QWORD *)(v4 + 184));
          if ( (_BYTE)v1 )
            LOBYTE(v1) = ExQueueWorkItemToPartition((_QWORD *)(v6 + 1136), 3, 0xFFFFFFFF, *(_QWORD *)(v6 + 184));
          else
            _InterlockedExchange((volatile __int32 *)(v6 + 1168), 0);
        }
      }
    }
  }
  return v1;
}
