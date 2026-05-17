/*
 * XREFs of NtAlpcConnectPort @ 0x180162BE0
 * Callers:
 *     SendMessageToWERService @ 0x1800015D0 (SendMessageToWERService.c)
 *     RtlConnectToSm @ 0x180112900 (RtlConnectToSm.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcConnectPort()
{
  __int64 result; // rax

  result = 123LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
