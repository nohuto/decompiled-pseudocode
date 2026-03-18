/*
 * XREFs of SymCryptCpuidExFunc @ 0x1405B1478
 * Callers:
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x14051DA08 (SymCryptDetectCpuFeaturesByCpuid.c)
 * Callees:
 *     SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater @ 0x14051AC08 (SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 __fastcall SymCryptCpuidExFunc(_DWORD *a1, unsigned int a2)
{
  return SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater(a1, a2);
}
