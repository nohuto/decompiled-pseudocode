/*
 * XREFs of RtlpRefreshCachedUILanguage @ 0x180147F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     NtFlushInstallUILanguage @ 0x180161E40 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x180162020 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x180162BC0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpRefreshCachedUILanguage(PCWSTR SourceString, char a2)
{
  ULONG v2; // edi
  int InstalledLanguageIndexByLangId; // ebx
  unsigned __int16 v6; // si
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  LANGID InstallUILanguageId; // [rsp+70h] [rbp+30h] BYREF
  __int16 v11; // [rsp+80h] [rbp+40h] BYREF
  DWORD Lcid; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  Lcid = 0;
  InstallUILanguageId = 0;
  v11 = -1;
  v8 = 0LL;
  DestinationString = 0LL;
  if ( SourceString )
  {
    InstalledLanguageIndexByLangId = NtQueryInstallUILanguage(&InstallUILanguageId);
    if ( InstalledLanguageIndexByLangId >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
      {
        v6 = Lcid;
        InstalledLanguageIndexByLangId = NtFlushInstallUILanguage(Lcid, 0);
        if ( InstalledLanguageIndexByLangId >= 0 )
        {
          InstalledLanguageIndexByLangId = RtlpCreateProcessRegistryInfo(&v8);
          if ( InstalledLanguageIndexByLangId >= 0 )
          {
            InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v8, v6, 1, &v11);
            if ( InstalledLanguageIndexByLangId < 0 )
            {
              NtFlushInstallUILanguage(InstallUILanguageId, 0);
            }
            else
            {
              LOBYTE(v2) = a2 != 0;
              InstalledLanguageIndexByLangId = NtFlushInstallUILanguage(v6, v2);
            }
            ZwGetMUIRegistryInfo(0xAu, 0LL, 0LL);
          }
        }
      }
      else
      {
        return (unsigned int)-1073741762;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)InstalledLanguageIndexByLangId;
}
