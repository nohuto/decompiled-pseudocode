/*
 * XREFs of NtReadFile @ 0x1801632E0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x180092750 (EtwpFinalizeLogFileHeader.c)
 *     LdrpResReadFile @ 0x1800A65C0 (LdrpResReadFile.c)
 *     RtlCheckBootStatusIntegrity @ 0x18013F820 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x180140038 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReadFile(
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

  result = 6;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
