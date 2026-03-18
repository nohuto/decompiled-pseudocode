/*
 * XREFs of NtQueryInstallUILanguage @ 0x140A5D280
 * Callers:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14082DDEC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14082E674 (_RtlpMuiRegValidateInstalled.c)
 *     NtQueryDefaultUILanguage @ 0x140A5D260 (NtQueryDefaultUILanguage.c)
 *     ExpSetPendingUILanguage @ 0x140A70D00 (ExpSetPendingUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtQueryInstallUILanguage(_WORD *a1)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v2 = (__int64)a1;
    *(_WORD *)v2 = *(_WORD *)v2;
  }
  *a1 = PsInstallUILanguageId;
  return 0LL;
}
