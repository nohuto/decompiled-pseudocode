/*
 * XREFs of KeForceEnableNx @ 0x140B57810
 * Callers:
 *     HalpInterruptSetProcessorStartContext @ 0x140541E70 (HalpInterruptSetProcessorStartContext.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
