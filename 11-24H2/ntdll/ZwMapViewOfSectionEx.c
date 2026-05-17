/*
 * XREFs of ZwMapViewOfSectionEx @ 0x180164040
 * Callers:
 *     RtlGetImageFileMachines @ 0x1800594E0 (RtlGetImageFileMachines.c)
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapViewOfSectionEx()
{
  __int64 result; // rax

  result = 286LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
