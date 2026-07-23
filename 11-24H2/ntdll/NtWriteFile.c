/*
 * XREFs of NtWriteFile @ 0x180160150
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18001EFE0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpWriteRemainingCompressedData @ 0x18001F478 (EtwpWriteRemainingCompressedData.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFlushBuffer @ 0x1800A9FC0 (EtwpFlushBuffer.c)
 *     EtwpWriteBufferCompressed @ 0x1800AA248 (EtwpWriteBufferCompressed.c)
 *     RtlCreateBootStatusDataFile @ 0x18013C450 (RtlCreateBootStatusDataFile.c)
 *     RtlRestoreBootStatusDefaults @ 0x18013C7E0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x18013CAF8 (RtlpGetSetBootStatusData.c)
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
