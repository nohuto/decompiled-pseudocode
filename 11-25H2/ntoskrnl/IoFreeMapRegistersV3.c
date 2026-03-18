/*
 * XREFs of IoFreeMapRegistersV3 @ 0x140331F10
 * Callers:
 *     IoFreeAdapterChannelV3Internal @ 0x140331EB4 (IoFreeAdapterChannelV3Internal.c)
 *     HalPutScatterGatherListV3 @ 0x14033419C (HalPutScatterGatherListV3.c)
 *     IoFreeMapRegistersThunk @ 0x14053B100 (IoFreeMapRegistersThunk.c)
 * Callees:
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1403320C0 (HalpDmaProcessMapRegisterQueueV3.c)
 *     HalpDmaFreeMapRegisters @ 0x140336C24 (HalpDmaFreeMapRegisters.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IoFreeMapRegistersV3(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v6; // rdi
  char v7; // si
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rdx

  v3 = *(_QWORD *)(a1 + 160);
  v6 = a1;
  if ( v3 && a2 )
  {
    v7 = 0;
    CurrentIrql = 0;
    v9 = 2LL;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1);
      }
      v7 = 1;
    }
    if ( a3 )
      HalpDmaFreeMapRegisters(v6, a2, a3);
    LOBYTE(v9) = *(_BYTE *)(v6 + 442);
    result = HalpDmaProcessMapRegisterQueueV3(v3, v9);
    if ( v7 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
