/*
 * XREFs of NtFlushInstallUILanguage @ 0x180163A80
 * Callers:
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180141330 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpRefreshCachedUILanguage @ 0x180149BD0 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 NtFlushInstallUILanguage()
{
  __int64 result; // rax

  result = 240LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
