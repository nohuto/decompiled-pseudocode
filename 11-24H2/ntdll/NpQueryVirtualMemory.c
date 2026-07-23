/*
 * XREFs of NpQueryVirtualMemory @ 0x18015FBF0
 * Callers:
 *     LdrpProcessMappedModule @ 0x18008FFE0 (LdrpProcessMappedModule.c)
 *     LdrpIsImageAddress @ 0x18015DD60 (LdrpIsImageAddress.c)
 * Callees:
 *     <none>
 */

__int64 NpQueryVirtualMemory()
{
  __int64 result; // rax

  result = 35LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
