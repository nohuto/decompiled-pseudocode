/*
 * XREFs of ExIsSvmEnabledForProcess @ 0x14048BE0C
 * Callers:
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408F3CDC (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExIsSvmEnabledForProcess(__int64 a1)
{
  return *(_DWORD *)(a1 + 1536) != 0;
}
