/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x180162E80
 * Callers:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x180073ED0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015EA6C (LdrpIsCurrentPatchLatest.c)
 * Callees:
 *     <none>
 */

__int64 ZwAreMappedFilesTheSame()
{
  __int64 result; // rax

  result = 144LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
