/*
 * XREFs of RtlLCIDToCultureName @ 0x140AB5EA0
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1405E17B4 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14081BE68 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14081C77C (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14081D030 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14081E0AC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14081E88C (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14081E934 (_RtlpMuiRegValidateInstalled.c)
 *     PnpSetDevicePropertyData @ 0x1409552E4 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140955E48 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpGetDevicePropertyData @ 0x1409A2540 (PnpGetDevicePropertyData.c)
 * Callees:
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404B067C (DownLevelLangIDToLanguageName.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = Lcid;
  if ( Lcid )
  {
    if ( String )
    {
      if ( Lcid != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140E62040, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_140E62040);
          return 1;
        }
      }
    }
  }
  return v2;
}
