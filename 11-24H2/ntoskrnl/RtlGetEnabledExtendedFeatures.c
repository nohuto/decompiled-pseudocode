/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x1404E71D0
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140518538 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x14045B69C (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     RtlpArchContextFlagFromMachine @ 0x1409E0B6C (RtlpArchContextFlagFromMachine.c)
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  int v1; // eax
  ULONG64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = FeatureMask & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]);
  v1 = RtlpArchContextFlagFromMachine(34404LL);
  RtlpRemoveArchDisallowedXStateFeatures(v1, &v3);
  return v3;
}
