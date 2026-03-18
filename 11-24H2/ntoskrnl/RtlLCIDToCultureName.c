/*
 * XREFs of RtlLCIDToCultureName @ 0x140ABA1E0
 * Callers:
 *     RtlpGetNameFromLangInfoNode @ 0x1405EDAE4 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14082BBA8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14082C4BC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14082CD70 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14082DDEC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x14082E5CC (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14082E674 (_RtlpMuiRegValidateInstalled.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1408B6E48 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x1408B8314 (PnpSetDevicePropertyData.c)
 *     PnpGetDevicePropertyData @ 0x140A12000 (PnpGetDevicePropertyData.c)
 * Callees:
 *     DbgPrint @ 0x1402CB260 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1404B167C (DownLevelLangIDToLanguageName.c)
 */

char __fastcall RtlLCIDToCultureName(int a1, UNICODE_STRING *a2)
{
  char v2; // bl
  __int16 v4; // di

  v2 = 0;
  v4 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1 != 4096 )
      {
        DbgPrint("!!! RTLMUI: Reusing LocaleBuffer !!!");
        if ( (int)DownLevelLangIDToLanguageName(v4, &word_140E62280, 64, 2) > 0 )
        {
          RtlInitUnicodeString(a2, &word_140E62280);
          return 1;
        }
      }
    }
  }
  return v2;
}
