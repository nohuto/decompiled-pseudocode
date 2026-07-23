/*
 * XREFs of SymCryptCpuidExFunc @ 0x1405AE3E8
 * Callers:
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x14051B2D8 (SymCryptDetectCpuFeaturesByCpuid.c)
 * Callees:
 *     SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater @ 0x1405184D8 (SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 __fastcall SymCryptCpuidExFunc(_DWORD *a1, unsigned int a2)
{
  return SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater(a1, a2);
}
