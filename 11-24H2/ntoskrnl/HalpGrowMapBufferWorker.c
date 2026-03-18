/*
 * XREFs of HalpGrowMapBufferWorker @ 0x1404B6BE0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x1403907EC (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1403927A8 (HalpDmaProcessMapRegisterQueueV3.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140A8AA80 (HalpDmaGrowScatterMapBuffers.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140ABD4C4 (HalpDmaGrowContiguousMapBuffers.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpGrowMapBufferWorker(_QWORD *P)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // si
  int v8; // eax

  v2 = P[4];
  v3 = (*((_DWORD *)P + 11) + 16) & 0xFFFFF;
  if ( *((_BYTE *)P + 40) )
    HalpDmaGrowScatterMapBuffers(v2, v3);
  else
    HalpDmaGrowContiguousMapBuffers(v2, v3);
  v6 = *((_BYTE *)P + 40) != 0 ? 4 : 0;
  *(_DWORD *)((char *)&HalpDmaGrowMapBufferWorkerQueued + v6) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, v4);
  }
  v8 = *((_DWORD *)P + 12);
  if ( v8 == 2 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    HalpDmaProcessMapRegisterQueueV2(v2, v4);
  }
  else if ( v8 == 3 )
  {
    LOBYTE(v4) = *((_BYTE *)P + 40);
    HalpDmaProcessMapRegisterQueueV3(v2, v4, v5);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(P, 0);
}
