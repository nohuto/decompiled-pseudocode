/*
 * XREFs of ZwSetValueKey @ 0x180162880
 * Callers:
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x180087634 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180089F88 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlWriteRegistryValue @ 0x1800B71F0 (RtlWriteRegistryValue.c)
 *     RtlInitializeRXact @ 0x180106310 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x180106760 (RtlApplyRXact.c)
 *     RXactpCommit @ 0x180106868 (RXactpCommit.c)
 *     RtlSetImageMitigationPolicy @ 0x180136E80 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1801405E0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x180140750 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x18014B560 (RtlpNtSetValueKey.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetValueKey()
{
  __int64 result; // rax

  result = 96LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
