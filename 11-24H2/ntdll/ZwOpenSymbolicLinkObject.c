/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x180164380
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenSymbolicLinkObject()
{
  __int64 result; // rax

  result = 312LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
