/*
 * XREFs of IoFreeMapRegistersV2 @ 0x14038A060
 * Callers:
 *     IoFreeAdapterChannelV2 @ 0x140388C50 (IoFreeAdapterChannelV2.c)
 *     HalPutScatterGatherListV2 @ 0x140389070 (HalPutScatterGatherListV2.c)
 *     IoFreeMapRegistersThunk @ 0x14053B230 (IoFreeMapRegistersThunk.c)
 * Callees:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x14038A12C (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IoFreeMapRegistersV2(__int64 a1, __int64 a2, unsigned int a3)
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
        KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
      }
      v7 = 1;
    }
    if ( a3 )
      HalpDmaFreeMapRegisters(v6, a2, a3);
    LOBYTE(v9) = *(_BYTE *)(v6 + 442);
    result = HalpDmaProcessMapRegisterQueueV2(v3, v9);
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
