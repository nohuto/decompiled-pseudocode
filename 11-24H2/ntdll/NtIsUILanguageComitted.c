/*
 * XREFs of NtIsUILanguageComitted @ 0x1801621C0
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x180012510 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180099AC0 (RtlpGetSystemDefaultUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x18011D478 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x18013E330 (RtlpSetInstallLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180148B20 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180149010 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS NtIsUILanguageComitted(void)
{
  NTSTATUS result; // eax

  result = 268;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
