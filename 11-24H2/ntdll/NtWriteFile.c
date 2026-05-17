/*
 * XREFs of NtWriteFile @ 0x180161D90
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18003ED60 (EtwpFinalizeLogFileHeader.c)
 *     EtwpWriteRemainingCompressedData @ 0x18003F1F8 (EtwpWriteRemainingCompressedData.c)
 *     EtwpFlushBuffer @ 0x18008E500 (EtwpFlushBuffer.c)
 *     EtwpWriteBufferCompressed @ 0x18008E788 (EtwpWriteBufferCompressed.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     RtlCreateBootStatusDataFile @ 0x18013E260 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x18013E5F0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x18013E908 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteFile()
{
  __int64 result; // rax

  result = 8LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
