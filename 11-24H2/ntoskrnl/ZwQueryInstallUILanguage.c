/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1406A9F30
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x140644310 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x14082E4EC (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguageId);
}
