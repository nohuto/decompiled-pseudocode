/*
 * XREFs of ZwQueryKey @ 0x180160310
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x18006E240 (LdrpCodeAuthzInitialize.c)
 *     RtlpValidateKeyTrust @ 0x18008387C (RtlpValidateKeyTrust.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 22;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
