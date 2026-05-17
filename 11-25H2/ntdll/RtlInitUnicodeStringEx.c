/*
 * XREFs of RtlInitUnicodeStringEx @ 0x18006CCF0
 * Callers:
 *     LdrpFindKnownDll @ 0x18006D200 (LdrpFindKnownDll.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlDosSearchPath_U @ 0x1800AAC20 (RtlDosSearchPath_U.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800B0AF0 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800E34EC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrGetKnownDllSectionHandle @ 0x18010CBD0 (LdrGetKnownDllSectionHandle.c)
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     SbpResolveBasedOnName @ 0x18011B468 (SbpResolveBasedOnName.c)
 *     RtlSetImageMitigationPolicy @ 0x1801385F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1801397E8 (RtlpIsEmptyImageFileOptionsKey.c)
 * Callees:
 *     wcslen @ 0x1801292B0 (wcslen.c)
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
