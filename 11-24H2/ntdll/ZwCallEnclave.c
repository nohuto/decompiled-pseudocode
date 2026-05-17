/*
 * XREFs of ZwCallEnclave @ 0x180162EE0
 * Callers:
 *     LdrpIssueEnclaveCall @ 0x1800D8CB0 (LdrpIssueEnclaveCall.c)
 *     RtlEnclaveCallDispatcher @ 0x180165DC0 (RtlEnclaveCallDispatcher.c)
 *     RtlCallEnclave @ 0x180165E30 (RtlCallEnclave.c)
 * Callees:
 *     <none>
 */

__int64 ZwCallEnclave()
{
  __int64 result; // rax

  result = 147LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
