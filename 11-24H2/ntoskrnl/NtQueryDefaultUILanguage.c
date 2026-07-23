/*
 * XREFs of NtQueryDefaultUILanguage @ 0x140A54F90
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x140A54FB0 (NtQueryInstallUILanguage.c)
 */

NTSTATUS __cdecl NtQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  return NtQueryInstallUILanguage(DefaultUILanguageId);
}
