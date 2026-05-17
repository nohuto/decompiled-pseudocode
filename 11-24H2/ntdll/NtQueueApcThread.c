/*
 * XREFs of NtQueueApcThread @ 0x180162530
 * Callers:
 *     RtlQueueApcWow64Thread @ 0x1801342B0 (RtlQueueApcWow64Thread.c)
 * Callees:
 *     <none>
 */

__int64 NtQueueApcThread()
{
  __int64 result; // rax

  result = 69LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
