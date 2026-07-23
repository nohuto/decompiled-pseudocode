/*
 * XREFs of RtlLCIDToCultureName @ 0x140AB5200
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1405EB0CC (RtlpGetNameFromLangInfoNode.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14082C3D8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14082CCEC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14082D5A0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14082E61C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14082EDFC (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14082EEA4 (_RtlpMuiRegValidateInstalled.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1408B47B8 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x1408B5C84 (PnpSetDevicePropertyData.c)
 *     PnpGetDevicePropertyData @ 0x1409C0410 (PnpGetDevicePropertyData.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404ABF0C (DownLevelLangIDToLanguageName.c)
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
        if ( (int)DownLevelLangIDToLanguageName(v4, word_140E623D0, 64, 2) > 0 )
        {
          RtlInitUnicodeString(String, word_140E623D0);
          return 1;
        }
      }
    }
  }
  return v2;
}
