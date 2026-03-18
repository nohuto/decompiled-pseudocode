/*
 * XREFs of MiAllocateProcessExtension @ 0x1406FC05C
 * Callers:
 *     MiInitializeBootProcess @ 0x140C4E3F8 (MiInitializeBootProcess.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 */

__int64 MiAllocateProcessExtension()
{
  return MiAllocatePool(0x48uLL, 0x580uLL, 844130637);
}
