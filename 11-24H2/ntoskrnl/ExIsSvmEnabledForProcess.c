/*
 * XREFs of ExIsSvmEnabledForProcess @ 0x14048B1C0
 * Callers:
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408A68E4 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExIsSvmEnabledForProcess(__int64 a1)
{
  return *(_DWORD *)(a1 + 1536) != 0;
}
