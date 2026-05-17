/*
 * XREFs of NtRaiseHardError @ 0x1801660B0
 * Callers:
 *     LdrpReportError @ 0x180008910 (LdrpReportError.c)
 *     LdrpMinimalMapModule @ 0x18006D7B0 (LdrpMinimalMapModule.c)
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 *     LdrpInitializationFailure @ 0x1800D1C78 (LdrpInitializationFailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtRaiseHardError()
{
  __int64 result; // rax

  result = 373LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
