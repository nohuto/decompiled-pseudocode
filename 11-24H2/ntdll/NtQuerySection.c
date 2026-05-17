/*
 * XREFs of NtQuerySection @ 0x1801626B0
 * Callers:
 *     RtlGetImageFileMachines @ 0x1800594E0 (RtlGetImageFileMachines.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     PsspDumpObject_Section @ 0x18010AA30 (PsspDumpObject_Section.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySection()
{
  __int64 result; // rax

  result = 81LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
