/*
 * XREFs of HalpMceInitProcessor @ 0x140B589B8
 * Callers:
 *     HalpInitializeMce @ 0x140B3BBE4 (HalpInitializeMce.c)
 *     HalpMceInit @ 0x140B58864 (HalpMceInit.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpMcaSetProcessorConfig @ 0x140B590EC (HalpMcaSetProcessorConfig.c)
 *     HalpMceInitializeErrorPacket @ 0x140B5E84C (HalpMceInitializeErrorPacket.c)
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
