/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x1800E0CE0
 * Callers:
 *     RtlpSaveX87State @ 0x1800E0C40 (RtlpSaveX87State.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetEnabledExtendedFeatures(__int64 a1)
{
  return a1 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x4000000000060DFFLL;
}
