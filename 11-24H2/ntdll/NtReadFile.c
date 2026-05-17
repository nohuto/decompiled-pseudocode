/*
 * XREFs of NtReadFile @ 0x180161D50
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18003ED60 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpResReadFile @ 0x1800D2270 (LdrpResReadFile.c)
 *     RtlCheckBootStatusIntegrity @ 0x18013E0F0 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x18013E908 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtReadFile()
{
  __int64 result; // rax

  result = 6LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
