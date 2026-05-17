/*
 * XREFs of RtlAppendUnicodeToString @ 0x1800B2BB0
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x1800020A0 (WerpGlobalFlagsForProcess.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180064DAC (AVrfpLoadAndInitializeProvider.c)
 *     LdrpLoadWow64 @ 0x18006531C (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpFindKnownDll @ 0x180074D50 (LdrpFindKnownDll.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800766F0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     GetOverlayFilePathUsingChecksum @ 0x1800B25C0 (GetOverlayFilePathUsingChecksum.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x1800B283C (_GetOverlayPackageKeyForLanguage.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1800B3330 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x1800B6868 (RtlpGetRegistryHandle.c)
 *     WerEscalationLazyInit @ 0x1800E2D10 (WerEscalationLazyInit.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FAF6C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpMUIEtwOutput @ 0x18011554C (LdrpMUIEtwOutput.c)
 *     AVrfpFormatCurrentUserKeyPath @ 0x18011D604 (AVrfpFormatCurrentUserKeyPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x18014375C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeToString(unsigned __int16 *a1, const wchar_t *a2)
{
  size_t v4; // rax
  unsigned int v5; // ebp
  void *v6; // r14

  if ( !a2 )
    return 0LL;
  v4 = wcslen(a2);
  if ( v4 <= 0x7FFE )
  {
    v5 = (unsigned __int16)(2 * v4);
    if ( *a1 + v5 <= a1[1] )
    {
      v6 = (void *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1));
      memmove(v6, a2, (unsigned __int16)(2 * v4));
      *a1 += v5;
      if ( (unsigned int)*a1 + 1 < a1[1] )
        *((_WORD *)v6 + ((unsigned __int64)v5 >> 1)) = 0;
      return 0LL;
    }
  }
  return 3221225507LL;
}
