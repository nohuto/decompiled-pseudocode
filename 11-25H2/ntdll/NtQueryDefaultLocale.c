/*
 * XREFs of NtQueryDefaultLocale @ 0x1801634C0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x18008ADF0 (LdrResFallbackLangList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  NTSTATUS result; // eax

  result = 21;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
