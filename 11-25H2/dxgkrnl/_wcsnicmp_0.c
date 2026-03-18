/*
 * XREFs of _wcsnicmp_0 @ 0x140065352
 * Callers:
 *     SepSddlGetAclForString @ 0x14022CBA0 (SepSddlGetAclForString.c)
 *     SepSddlGetSidForString @ 0x14022CF0C (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x14022CFD8 (SepSddlLookupAccessMaskInTable.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEA_N@Z @ 0x1404088B0 (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
