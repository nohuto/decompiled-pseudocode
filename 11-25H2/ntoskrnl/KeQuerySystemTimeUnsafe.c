/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140478190
 * Callers:
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     PspExitLastThread @ 0x14091ECC8 (PspExitLastThread.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
