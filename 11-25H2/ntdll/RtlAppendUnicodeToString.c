/*
 * XREFs of RtlAppendUnicodeToString @ 0x18006C570
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18006BF80 (GetOverlayFilePathUsingChecksum.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18006C1FC (_GetOverlayPackageKeyForLanguage.c)
 *     LdrpFindKnownDll @ 0x18006D200 (LdrpFindKnownDll.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180084060 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800A1E80 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     WerpGlobalFlagsForProcess @ 0x1800CFC84 (WerpGlobalFlagsForProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D04C4 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpLoadWow64 @ 0x1800D0A34 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     WerEscalationLazyInit @ 0x1800DF9C0 (WerEscalationLazyInit.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FD1A4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpMUIEtwOutput @ 0x180118730 (LdrpMUIEtwOutput.c)
 *     AVrfpFormatCurrentUserKeyPath @ 0x18011EED4 (AVrfpFormatCurrentUserKeyPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x180144E4C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __cdecl RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  size_t v4; // rax
  unsigned int v5; // ebp
  wchar_t *v6; // r14

  if ( !Source )
    return 0;
  v4 = wcslen(Source);
  if ( v4 <= 0x7FFE )
  {
    v5 = (unsigned __int16)(2 * v4);
    if ( Destination->Length + v5 <= Destination->MaximumLength )
    {
      v6 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v6, Source, (unsigned __int16)(2 * v4));
      Destination->Length += v5;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v6[(unsigned __int64)v5 >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
