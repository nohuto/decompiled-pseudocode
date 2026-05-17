/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x1800709D0
 * Callers:
 *     LdrpFindKnownDll @ 0x18006D200 (LdrpFindKnownDll.c)
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180084060 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800A1E80 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800B3634 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D04C4 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpLoadWow64 @ 0x1800D0A34 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F6570 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FD1A4 (LdrpInitializePerUserWindowsDirectory.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     AVrfpFormatCurrentUserKeyPath @ 0x18011EED4 (AVrfpFormatCurrentUserKeyPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x180144E4C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     memmove @ 0x180168980 (memmove.c)
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
