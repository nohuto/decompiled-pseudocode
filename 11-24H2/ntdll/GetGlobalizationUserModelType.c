/*
 * XREFs of GetGlobalizationUserModelType @ 0x180014FA8
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800149A0 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800C9BA0 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x18001ACC0 (RtlIsMultiSessionSku.c)
 */

__int64 GetGlobalizationUserModelType()
{
  __int64 result; // rax

  result = (unsigned int)dword_1801D1328;
  if ( !dword_1801D1328 )
  {
    if ( RtlIsMultiSessionSku() )
      result = 1LL;
    else
      result = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_1801D1328 = result;
  }
  return result;
}
