/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x1800DC230
 * Callers:
 *     RtlpSaveX87State @ 0x1800DC190 (RtlpSaveX87State.c)
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x4000000000060DFFLL;
}
