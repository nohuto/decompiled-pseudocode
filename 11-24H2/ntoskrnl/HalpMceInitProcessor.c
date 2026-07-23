/*
 * XREFs of HalpMceInitProcessor @ 0x140B6D428
 * Callers:
 *     HalpInitializeMce @ 0x140B4DC24 (HalpInitializeMce.c)
 *     HalpMceInit @ 0x140B6D2D4 (HalpMceInit.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpMcaSetProcessorConfig @ 0x140B6D5A8 (HalpMcaSetProcessorConfig.c)
 *     HalpMceInitializeErrorPacket @ 0x140B6F19C (HalpMceInitializeErrorPacket.c)
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
