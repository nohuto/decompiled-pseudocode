/*
 * XREFs of NtWriteFile @ 0x180163320
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x180092750 (EtwpFinalizeLogFileHeader.c)
 *     EtwpWriteRemainingCompressedData @ 0x180092BE8 (EtwpWriteRemainingCompressedData.c)
 *     EtwpFlushBuffer @ 0x1800B73A0 (EtwpFlushBuffer.c)
 *     EtwpWriteBufferCompressed @ 0x1800B7628 (EtwpWriteBufferCompressed.c)
 *     RtlCreateBootStatusDataFile @ 0x18013F990 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x18013FD20 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x180140038 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax

  result = 8;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
