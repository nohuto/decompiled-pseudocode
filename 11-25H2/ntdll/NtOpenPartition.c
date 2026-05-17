/*
 * XREFs of NtOpenPartition @ 0x180165830
 * Callers:
 *     LdrpInitializeProcessHeap @ 0x180034DF8 (LdrpInitializeProcessHeap.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenPartition()
{
  __int64 result; // rax

  result = 305LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
