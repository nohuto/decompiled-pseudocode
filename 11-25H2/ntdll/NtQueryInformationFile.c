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
