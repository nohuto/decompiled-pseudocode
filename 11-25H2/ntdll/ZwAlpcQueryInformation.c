/*
 * XREFs of ZwAlpcQueryInformation @ 0x180164370
 * Callers:
 *     TpWaitForAlpcCompletion @ 0x1800D6590 (TpWaitForAlpcCompletion.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcQueryInformation()
{
  __int64 result; // rax

  result = 139LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
