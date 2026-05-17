/*
 * XREFs of NtQueryInformationFile @ 0x180161EB0
 * Callers:
 *     LdrpResFileSize @ 0x180078EC0 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x180097188 (LdrpResValidateFileHandle.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180110720 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1801132C0 (RtlIsPartialPlaceholderFileHandle.c)
 *     RtlpGetFileSize @ 0x18014675C (RtlpGetFileSize.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
