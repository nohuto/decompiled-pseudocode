/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x180099AC0
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180015F40 (RtlpQueryDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x1801621C0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180162BC0 (NtQueryInstallUILanguage.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlpGetSystemDefaultUILanguage(LANGID DefaultUILanguageId, PLCID Lcid)
{
  int v2; // ebx
  PLCID v3; // rdi
  LANGID *v4; // rsi
  LANGID v5; // ax
  int v7; // eax
  LANGID InstallUILanguageId; // [rsp+30h] [rbp+8h] BYREF
  DWORD *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = Lcid;
  InstallUILanguageId = 0;
  v4 = (LANGID *)DefaultUILanguageId;
  v9 = 0LL;
  if ( DefaultUILanguageId )
  {
    *(_WORD *)DefaultUILanguageId = 0;
    if ( !Lcid && (v7 = RtlpCreateProcessRegistryInfo(&v9), v3 = v9, v2 = v7, v7 < 0)
      || !v3
      || (v5 = *((_WORD *)v3 + 2)) == 0 )
    {
      v2 = NtQueryInstallUILanguage(&InstallUILanguageId);
      if ( v2 < 0 )
        return v2;
      if ( NtIsUILanguageComitted() >= 0 )
      {
        if ( v3 )
        {
          RtlpLoadInstallLanguageFallback((__int64)v3, (_WORD *)v3 + 3, (_WORD *)v3 + 4);
          *((_WORD *)v3 + 2) = InstallUILanguageId;
        }
      }
      v5 = InstallUILanguageId;
    }
    *v4 = v5;
    return v2;
  }
  return -1073741811;
}
