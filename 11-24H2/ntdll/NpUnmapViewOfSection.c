/*
 * XREFs of NpUnmapViewOfSection @ 0x18015FC30
 * Callers:
 *     LdrpLoadPatchedNtdll @ 0x1800AE630 (LdrpLoadPatchedNtdll.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18015D308 (LdrpLoadCustomNtdllWithSectionHandle.c)
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
