/*
 * XREFs of ExpGetOriginalImageVersion @ 0x14065B0F4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 ExpGetOriginalImageVersion()
{
  return (unsigned int)ExpOriginalImageVersion;
}
