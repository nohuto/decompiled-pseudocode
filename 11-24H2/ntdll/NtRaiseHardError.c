/*
 * XREFs of NtRaiseHardError @ 0x180164B20
 * Callers:
 *     LdrpReportError @ 0x180005D20 (LdrpReportError.c)
 *     LdrpInitializationFailure @ 0x180065FF8 (LdrpInitializationFailure.c)
 *     LdrpMapDllNtFileName @ 0x180071640 (LdrpMapDllNtFileName.c)
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
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
