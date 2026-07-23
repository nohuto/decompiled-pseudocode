/*
 * XREFs of HalpGrowMapBufferWorker @ 0x1404B13C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14038A12C (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x14038C0D8 (HalpDmaProcessMapRegisterQueueV3.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140A86DC0 (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140AB8534 (HalpDmaGrowContiguousMapBuffers.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall HalpGrowMapBufferWorker(PVOID P)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // si
  int v7; // eax

  v2 = *((_QWORD *)P + 4);
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
    LOBYTE(v4) = 2;
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, v4);
  }
  v7 = *((_DWORD *)P + 12);
  if ( v7 == 2 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    HalpDmaProcessMapRegisterQueueV2(v2, v4);
  }
  else if ( v7 == 3 )
  {
    HalpDmaProcessMapRegisterQueueV3(v2, *((_BYTE *)P + 40));
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(P, 0);
}
