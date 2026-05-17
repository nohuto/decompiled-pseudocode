/*
 * XREFs of RtlpRefreshCachedUILanguage @ 0x180149BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800122F0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     NtFlushInstallUILanguage @ 0x180163A80 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x180163C60 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x180164800 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpRefreshCachedUILanguage(PCWSTR SourceString, char a2)
{
  unsigned int v2; // edi
  int InstalledLanguageIndexByLangId; // ebx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int16 v11; // [rsp+70h] [rbp+30h] BYREF
  __int16 v12; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  v13 = 0;
  v11 = 0;
  v12 = -1;
  v9 = 0LL;
  DestinationString = 0LL;
  if ( SourceString )
  {
    InstalledLanguageIndexByLangId = NtQueryInstallUILanguage(&v11);
    if ( InstalledLanguageIndexByLangId >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString.Length, (int *)&v13) )
      {
        v6 = v13;
        InstalledLanguageIndexByLangId = NtFlushInstallUILanguage(v13, 0LL);
        if ( InstalledLanguageIndexByLangId >= 0 )
        {
          InstalledLanguageIndexByLangId = RtlpCreateProcessRegistryInfo(&v9, v7);
          if ( InstalledLanguageIndexByLangId >= 0 )
          {
            InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v9, v6, 1, &v12);
            if ( InstalledLanguageIndexByLangId < 0 )
            {
              NtFlushInstallUILanguage(v11, 0LL);
            }
            else
            {
              LOBYTE(v2) = a2 != 0;
              InstalledLanguageIndexByLangId = NtFlushInstallUILanguage(v6, v2);
            }
            ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
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
