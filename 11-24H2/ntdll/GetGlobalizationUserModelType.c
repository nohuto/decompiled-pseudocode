/*
 * XREFs of GetGlobalizationUserModelType @ 0x180034D28
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x180034720 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18007FDF0 (RtlpLoadUserUIByPolicy.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x18003AA40 (RtlIsMultiSessionSku.c)
 */

__int64 GetGlobalizationUserModelType()
{
  __int64 result; // rax

  result = (unsigned int)dword_1801D2328;
  if ( !dword_1801D2328 )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku() )
      result = 1LL;
    else
      result = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_1801D2328 = result;
  }
  return result;
}
