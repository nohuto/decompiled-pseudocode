/*
 * XREFs of NtQueryInstallUILanguage @ 0x140A5AF10
 * Callers:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14081E0AC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14081E934 (_RtlpMuiRegValidateInstalled.c)
 *     NtQueryDefaultUILanguage @ 0x140A5AEF0 (NtQueryDefaultUILanguage.c)
 *     ExpSetPendingUILanguage @ 0x140A6EE30 (ExpSetPendingUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)InstallUILanguageId < 0x7FFFFFFF0000LL )
      v2 = (__int64)InstallUILanguageId;
    *(_WORD *)v2 = *(_WORD *)v2;
  }
  *InstallUILanguageId = PsInstallUILanguageId;
  return 0;
}
