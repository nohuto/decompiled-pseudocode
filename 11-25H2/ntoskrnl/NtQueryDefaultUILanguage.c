/*
 * XREFs of NtQueryDefaultUILanguage @ 0x140A5AEF0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x140A5AF10 (NtQueryInstallUILanguage.c)
 */

NTSTATUS __cdecl NtQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  return NtQueryInstallUILanguage(DefaultUILanguageId);
}
