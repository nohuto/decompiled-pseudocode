/*
 * XREFs of ZwCommitTransaction @ 0x1801645B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCommitTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  NTSTATUS result; // eax

  result = 157;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
