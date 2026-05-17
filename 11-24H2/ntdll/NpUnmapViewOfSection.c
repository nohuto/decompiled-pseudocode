/*
 * XREFs of NpUnmapViewOfSection @ 0x180161870
 * Callers:
 *     LdrpLoadPatchedNtdll @ 0x180066450 (LdrpLoadPatchedNtdll.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18015EF48 (LdrpLoadCustomNtdllWithSectionHandle.c)
 * Callees:
 *     <none>
 */

__int64 NpUnmapViewOfSection()
{
  __int64 result; // rax

  result = 42LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
