/*
 * XREFs of ZwSetValueKey @ 0x180163E10
 * Callers:
 *     RtlWriteRegistryValue @ 0x180086820 (RtlWriteRegistryValue.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800B05CC (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlInitializeRXact @ 0x180108C20 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x180109070 (RtlApplyRXact.c)
 *     RXactpCommit @ 0x180109178 (RXactpCommit.c)
 *     RtlSetImageMitigationPolicy @ 0x1801385F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x180141CD0 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x18014CB10 (RtlpNtSetValueKey.c)
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
