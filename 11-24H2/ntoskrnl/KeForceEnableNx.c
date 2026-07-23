/*
 * XREFs of KeForceEnableNx @ 0x140B59890
 * Callers:
 *     HalpInterruptDetermineProcessorStartupFlags @ 0x140556D3C (HalpInterruptDetermineProcessorStartupFlags.c)
 * Callees:
 *     <none>
 */

char KeForceEnableNx()
{
  return KiNxForceEnable;
}
