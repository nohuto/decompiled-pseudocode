/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180075AB0
 * Callers:
 *     AVrfpLoadAndInitializeProvider @ 0x180064DAC (AVrfpLoadAndInitializeProvider.c)
 *     LdrpLoadWow64 @ 0x18006531C (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpFindKnownDll @ 0x180074D50 (LdrpFindKnownDll.c)
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800766F0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x18008A6A4 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1800B3330 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x1800B6868 (RtlpGetRegistryHandle.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F4990 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FAF6C (LdrpInitializePerUserWindowsDirectory.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     AVrfpFormatCurrentUserKeyPath @ 0x18011D604 (AVrfpFormatCurrentUserKeyPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x18014375C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeStringToString(unsigned __int16 *a1, const void **a2)
{
  unsigned int v2; // esi
  void *v4; // r14

  v2 = *(unsigned __int16 *)a2;
  if ( !(_WORD)v2 )
    return 0LL;
  if ( *a1 + v2 <= a1[1] )
  {
    v4 = (void *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1));
    memmove(v4, a2[1], *(unsigned __int16 *)a2);
    *a1 += v2;
    if ( (unsigned int)*a1 + 1 < a1[1] )
      *((_WORD *)v4 + ((unsigned __int64)v2 >> 1)) = 0;
    return 0LL;
  }
  return 3221225507LL;
}
