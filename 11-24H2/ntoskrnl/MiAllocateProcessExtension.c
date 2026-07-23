/*
 * XREFs of MiAllocateProcessExtension @ 0x1406F9C9C
 * Callers:
 *     MiInitializeBootProcess @ 0x140C50588 (MiInitializeBootProcess.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 */

__int64 MiAllocateProcessExtension()
{
  return MiAllocatePool(0x48uLL, 0x580uLL, 844130637);
}
