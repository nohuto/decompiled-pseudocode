/*
 * XREFs of ZwDeleteValueKey @ 0x180163860
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800B6140 (RtlpQueryRegistryValues.c)
 *     RtlDeleteRegistryValue @ 0x1800B73A0 (RtlDeleteRegistryValue.c)
 *     RtlInitializeRXact @ 0x180106310 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x180106760 (RtlApplyRXact.c)
 *     RtlSetImageMitigationPolicy @ 0x180136E80 (RtlSetImageMitigationPolicy.c)
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 * Callees:
 *     <none>
 */

__int64 ZwDeleteValueKey()
{
  __int64 result; // rax

  result = 223LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
