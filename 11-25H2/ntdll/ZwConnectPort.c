/*
 * XREFs of ZwConnectPort @ 0x180164690
 * Callers:
 *     CsrpConnectToServer @ 0x180035EC0 (CsrpConnectToServer.c)
 * Callees:
 *     <none>
 */

__int64 ZwConnectPort()
{
  __int64 result; // rax

  result = 164LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
