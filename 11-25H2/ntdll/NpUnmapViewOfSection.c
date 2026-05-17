/*
 * XREFs of NpUnmapViewOfSection @ 0x180162E00
 * Callers:
 *     LdrpLoadPatchedNtdll @ 0x1800D20D0 (LdrpLoadPatchedNtdll.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18016044C (LdrpLoadCustomNtdllWithSectionHandle.c)
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
