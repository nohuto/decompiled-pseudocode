/*
 * XREFs of ExpGetOriginalImageVersion @ 0x14064F16C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 ExpGetOriginalImageVersion()
{
  return (unsigned int)ExpOriginalImageVersion;
}
