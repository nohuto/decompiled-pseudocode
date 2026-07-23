/*
 * XREFs of NtInitializeNlsFiles @ 0x180165310
 * Callers:
 *     RtlpLoadNlsData @ 0x18005C67C (RtlpLoadNlsData.c)
 *     RtlGetLocaleFileMappingAddress @ 0x1800FC290 (RtlGetLocaleFileMappingAddress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  NTSTATUS result; // eax

  result = 264;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
