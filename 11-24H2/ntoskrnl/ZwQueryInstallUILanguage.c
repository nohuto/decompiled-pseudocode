/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1406A8F90
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x140645D50 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x14082DCBC (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInstallUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
