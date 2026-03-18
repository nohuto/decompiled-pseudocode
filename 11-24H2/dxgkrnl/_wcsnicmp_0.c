/*
 * XREFs of _wcsnicmp_0 @ 0x140064F72
 * Callers:
 *     SepSddlGetAclForString @ 0x140233400 (SepSddlGetAclForString.c)
 *     SepSddlGetSidForString @ 0x14023376C (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x140233838 (SepSddlLookupAccessMaskInTable.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@AEA_N@Z @ 0x14027C74C (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
