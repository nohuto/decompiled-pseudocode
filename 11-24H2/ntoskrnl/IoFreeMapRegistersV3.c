/*
 * XREFs of IoFreeMapRegistersV3 @ 0x14038C590
 * Callers:
 *     HalPutScatterGatherListV3 @ 0x14038C148 (HalPutScatterGatherListV3.c)
 *     IoFreeAdapterChannelV3Internal @ 0x14038C534 (IoFreeAdapterChannelV3Internal.c)
 *     IoFreeMapRegistersThunk @ 0x14053B230 (IoFreeMapRegistersThunk.c)
 * Callees:
 *     HalpDmaFreeMapRegisters @ 0x14038A214 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x14038C0D8 (HalpDmaProcessMapRegisterQueueV3.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall IoFreeMapRegistersV3(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v6; // rdi
  char v7; // si
  unsigned __int8 CurrentIrql; // bl
  _QWORD *result; // rax
  __int64 v10; // rdx

  v3 = *(_QWORD *)(a1 + 160);
  v6 = a1;
  if ( v3 && a2 )
  {
    v7 = 0;
    CurrentIrql = 0;
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
    result = HalpDmaProcessMapRegisterQueueV3(v3, *(_BYTE *)(v6 + 442));
    if ( v7 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
      }
      result = (_QWORD *)CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
