/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x1404D5730
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405184E8 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     RtlpArchContextFlagFromMachine @ 0x1409EC038 (RtlpArchContextFlagFromMachine.c)
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax

  v3 = RtlpArchContextFlagFromMachine(
         34404LL,
         v1,
         v2,
         FeatureMask & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]));
  if ( (v3 & 0x10000) != 0 )
  {
    v5 = 0x40000000000009FFLL;
    return v5 & v4;
  }
  if ( (v3 & 0x100000) != 0 )
  {
    v5 = 0x4000000000060DFFLL;
    return v5 & v4;
  }
  if ( (v3 & 0x400000) != 0 )
    return v4 & 4;
  else
    return 0LL;
}
