/*
 * XREFs of ZwSetValueKey @ 0x180160C40
 * Callers:
 *     RtlWriteRegistryValue @ 0x180083A90 (RtlWriteRegistryValue.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800A30F8 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800A5A48 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlInitializeRXact @ 0x180101240 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x180101690 (RtlApplyRXact.c)
 *     RXactpCommit @ 0x180101798 (RXactpCommit.c)
 *     RtlSetImageMitigationPolicy @ 0x1801350B0 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x18013E7D0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x180149910 (RtlpNtSetValueKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS result; // eax

  result = 96;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
