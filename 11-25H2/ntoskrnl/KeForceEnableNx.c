/*
 * XREFs of KeForceEnableNx @ 0x140B47870
 * Callers:
 *     HalpInterruptSetProcessorStartContext @ 0x14053F640 (HalpInterruptSetProcessorStartContext.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
