/*
 * XREFs of NtQueryInformationFile @ 0x180163440
 * Callers:
 *     LdrpResValidateFileHandle @ 0x1800027E8 (LdrpResValidateFileHandle.c)
 *     LdrpResFileSize @ 0x1800A3598 (LdrpResFileSize.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180113590 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x180116250 (RtlIsPartialPlaceholderFileHandle.c)
 *     RtlpGetFileSize @ 0x180147D0C (RtlpGetFileSize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  NTSTATUS result; // eax

  result = 17;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
