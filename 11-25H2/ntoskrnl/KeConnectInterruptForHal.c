/*
 * XREFs of KeConnectInterruptForHal @ 0x1405B8640
 * Callers:
 *     HalpCreateInterrupt @ 0x140557A80 (HalpCreateInterrupt.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeConnectInterruptForHal(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // rax
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v3 = *(unsigned int *)(a1 + 88);
  *(_BYTE *)(a1 + 95) = 1;
  KeGetCurrentPrcb()->InterruptObject[v3] = (void *)a1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
