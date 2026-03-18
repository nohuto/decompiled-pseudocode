/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140477918
 * Callers:
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
