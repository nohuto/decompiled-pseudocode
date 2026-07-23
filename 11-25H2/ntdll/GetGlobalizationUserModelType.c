/*
 * XREFs of GetGlobalizationUserModelType @ 0x18008C6B8
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180088B20 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18008C0B0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x18008E430 (RtlIsMultiSessionSku.c)
 */

__int64 GetGlobalizationUserModelType()
{
  __int64 result; // rax

  result = (unsigned int)dword_1801D4370;
  if ( !dword_1801D4370 )
  {
    if ( RtlIsMultiSessionSku() )
      result = 1LL;
    else
      result = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_1801D4370 = result;
  }
  return result;
}
