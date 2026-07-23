/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x1800DC820
 * Callers:
 *     <none>
 * Callees:
 *     RtlpArchContextFlagFromMachine @ 0x1800DC890 (RtlpArchContextFlagFromMachine.c)
 */

ULONG64 __cdecl RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = RtlpArchContextFlagFromMachine(34404LL, FeatureMask & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]));
  if ( (v1 & 0x10000) != 0 )
    return v2 & 0x40000000000009FFLL;
  if ( (v1 & 0x100000) != 0 )
    return v2 & 0x4000000000060DFFLL;
  if ( (v1 & 0x400000) != 0 )
    return v2 & 4;
  return 0LL;
}
