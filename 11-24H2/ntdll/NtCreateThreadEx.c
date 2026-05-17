/*
 * XREFs of NtCreateThreadEx @ 0x1801635A0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 *     RtlpCreateUserThreadEx @ 0x18008C310 (RtlpCreateUserThreadEx.c)
 *     LdrHotPatchNotify @ 0x18015E690 (LdrHotPatchNotify.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateThreadEx()
{
  __int64 result; // rax

  result = 201LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
