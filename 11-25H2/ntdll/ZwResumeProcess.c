/*
 * XREFs of ZwResumeProcess @ 0x180166350
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x180134F90 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeProcess()
{
  __int64 result; // rax

  result = 394LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
