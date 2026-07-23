/*
 * XREFs of RtlAppendUnicodeToString @ 0x18007F450
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     GetOverlayFilePathUsingChecksum @ 0x18007EE60 (GetOverlayFilePathUsingChecksum.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18007F0DC (_GetOverlayPackageKeyForLanguage.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18007FBD0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x180083108 (RtlpGetRegistryHandle.c)
 *     LdrpFindKnownDll @ 0x180091630 (LdrpFindKnownDll.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180092FD0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     WerpGlobalFlagsForProcess @ 0x1800AC868 (WerpGlobalFlagsForProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800ACC7C (AVrfpLoadAndInitializeProvider.c)
 *     LdrpLoadWow64 @ 0x1800AD1EC (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1800CBBD4 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     WerEscalationLazyInit @ 0x1800DE2E0 (WerEscalationLazyInit.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800F5EA4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpMUIEtwOutput @ 0x1801107C8 (LdrpMUIEtwOutput.c)
 *     AVrfpFormatCurrentUserKeyPath @ 0x18011B834 (AVrfpFormatCurrentUserKeyPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x180141B0C (RtlpConstructCrossVmObjectPath.c)
 * Callees:
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     memmove @ 0x1801657C0 (memmove.c)
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
