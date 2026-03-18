/*
 * XREFs of MiAllocateProcessExtension @ 0x1406F0274
 * Callers:
 *     MiInitializeBootProcess @ 0x140C3D150 (MiInitializeBootProcess.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 */

__int64 MiAllocateProcessExtension()
{
  return MiAllocatePool(0x48uLL, 0x580uLL, 844130637);
}
