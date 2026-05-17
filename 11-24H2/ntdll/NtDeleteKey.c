/*
 * XREFs of NtDeleteKey @ 0x180163800
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180089F88 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlInitializeRXact @ 0x180106310 (RtlInitializeRXact.c)
 *     RXactpCommit @ 0x180106868 (RXactpCommit.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x180137FE0 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x18014B550 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

__int64 NtDeleteKey()
{
  __int64 result; // rax

  result = 220LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
