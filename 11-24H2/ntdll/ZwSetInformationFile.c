/*
 * XREFs of ZwSetInformationFile @ 0x180160530
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18001EFE0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpResSetFilePointer @ 0x180098520 (LdrpResSetFilePointer.c)
 *     TpBindFileToDirect @ 0x1800B7690 (TpBindFileToDirect.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  NTSTATUS result; // eax

  result = 39;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
