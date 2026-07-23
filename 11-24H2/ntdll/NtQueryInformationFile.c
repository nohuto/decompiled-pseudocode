/*
 * XREFs of NtQueryInformationFile @ 0x180160270
 * Callers:
 *     LdrpResFileSize @ 0x180095274 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1801094A8 (LdrpResValidateFileHandle.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010B9E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x18010E510 (RtlIsPartialPlaceholderFileHandle.c)
 *     RtlpGetFileSize @ 0x180144B0C (RtlpGetFileSize.c)
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
