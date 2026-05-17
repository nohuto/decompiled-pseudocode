/*
 * XREFs of RtlInitUnicodeStringEx @ 0x180082640
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpFindKnownDll @ 0x180074D50 (LdrpFindKnownDll.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180081558 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800821AC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDosSearchPath_U @ 0x180082890 (RtlDosSearchPath_U.c)
 *     RtlQueryImageMitigationPolicy @ 0x180087B60 (RtlQueryImageMitigationPolicy.c)
 *     LdrGetKnownDllSectionHandle @ 0x18010A160 (LdrGetKnownDllSectionHandle.c)
 *     RtlpMUIEnumerateFolder @ 0x18010B52C (RtlpMUIEnumerateFolder.c)
 *     SbpResolveBasedOnName @ 0x1801183E4 (SbpResolveBasedOnName.c)
 *     RtlSetImageMitigationPolicy @ 0x180136E80 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180138078 (RtlpIsEmptyImageFileOptionsKey.c)
 * Callees:
 *     wcslen @ 0x1801277D0 (wcslen.c)
 */

__int64 __fastcall RtlInitUnicodeStringEx(__int64 a1, const wchar_t *a2)
{
  size_t v3; // rax
  __int16 v4; // ax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  if ( !a2 )
    return 0LL;
  v3 = wcslen(a2);
  if ( v3 <= 0x7FFE )
  {
    v4 = 2 * v3;
    *(_WORD *)a1 = v4;
    *(_WORD *)(a1 + 2) = v4 + 2;
    return 0LL;
  }
  return 3221225734LL;
}
