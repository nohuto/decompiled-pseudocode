/*
 * XREFs of ZwSetCachedSigningLevel @ 0x180166510
 * Callers:
 *     LdrpSetModuleSigningLevel @ 0x18010D4E8 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetCachedSigningLevel()
{
  __int64 result; // rax

  result = 408LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
