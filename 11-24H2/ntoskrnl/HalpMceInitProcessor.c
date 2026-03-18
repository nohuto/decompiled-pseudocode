/*
 * XREFs of HalpMceInitProcessor @ 0x140B687E8
 * Callers:
 *     HalpInitializeMce @ 0x140B4BBE4 (HalpInitializeMce.c)
 *     HalpMceInit @ 0x140B68694 (HalpMceInit.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpMcaSetProcessorConfig @ 0x140B68F1C (HalpMcaSetProcessorConfig.c)
 *     HalpMceInitializeErrorPacket @ 0x140B6D8FC (HalpMceInitializeErrorPacket.c)
 */

__int64 __fastcall HalpMceInitProcessor(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax

  if ( HalpMcaEnabled )
    HalpMceInitializeErrorPacket();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  HalpMcaSetProcessorConfig(a1, a2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
