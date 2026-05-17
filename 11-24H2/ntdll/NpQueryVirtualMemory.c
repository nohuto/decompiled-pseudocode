/*
 * XREFs of NpQueryVirtualMemory @ 0x180161830
 * Callers:
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     LdrpIsImageAddress @ 0x18015F9A0 (LdrpIsImageAddress.c)
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
