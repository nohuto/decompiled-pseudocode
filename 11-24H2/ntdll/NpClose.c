/*
 * XREFs of NpClose @ 0x18015FBD0
 * Callers:
 *     LdrpLoadPatchedNtdll @ 0x1800AE630 (LdrpLoadPatchedNtdll.c)
 * Callees:
 *     <none>
 */

__int64 NpClose()
{
  __int64 result; // rax

  result = 15LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
