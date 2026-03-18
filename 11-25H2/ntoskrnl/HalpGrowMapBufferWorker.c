/*
 * XREFs of HalpGrowMapBufferWorker @ 0x1404B7110
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1403320C0 (HalpDmaProcessMapRegisterQueueV3.c)
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x140336B3C (HalpDmaProcessMapRegisterQueueV2.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140A85FCC (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140AB93CC (HalpDmaGrowContiguousMapBuffers.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpGrowMapBufferWorker(_QWORD *P)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // si
  int v7; // eax

  v2 = P[4];
  v3 = (*((_DWORD *)P + 11) + 16) & 0xFFFFF;
  if ( *((_BYTE *)P + 40) )
    HalpDmaGrowScatterMapBuffers(v2, v3);
  else
    HalpDmaGrowContiguousMapBuffers(v2, v3);
  v5 = *((_BYTE *)P + 40) != 0 ? 4 : 0;
  *(_DWORD *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v5) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5);
  }
  v7 = *((_DWORD *)P + 12);
  if ( v7 == 2 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    HalpDmaProcessMapRegisterQueueV2(v2, v4);
  }
  else if ( v7 == 3 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    HalpDmaProcessMapRegisterQueueV3(v2, v4);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(P, 0);
}
