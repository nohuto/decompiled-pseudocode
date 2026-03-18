/*
 * XREFs of IoFreeMapRegistersV3 @ 0x140392C60
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x140392818 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3Internal @ 0x140392C04 (IoFreeAdapterChannelV3Internal.c)
 *     IoFreeMapRegistersThunk @ 0x14053D930 (IoFreeMapRegistersThunk.c)
 * Callees:
 *     HalpDmaFreeMapRegisters @ 0x1403908D4 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1403927A8 (HalpDmaProcessMapRegisterQueueV3.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall IoFreeMapRegistersV3(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // r14d
  __int64 v6; // rdi
  char v7; // si
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rdx
  _QWORD *result; // rax
  __int64 v11; // rdx

  v3 = *(_QWORD *)(a1 + 160);
  v4 = a3;
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
    if ( v4 )
      HalpDmaFreeMapRegisters(v6, a2, v4);
    LOBYTE(v9) = *(_BYTE *)(v6 + 442);
    result = HalpDmaProcessMapRegisterQueueV3(v3, v9, a3);
    if ( v7 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      }
      result = (_QWORD *)CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
