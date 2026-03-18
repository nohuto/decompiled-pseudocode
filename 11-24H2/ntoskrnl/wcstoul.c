/*
 * XREFs of wcstoul @ 0x1405007D0
 * Callers:
 *     PnpStringToDwordValue @ 0x1404D71D0 (PnpStringToDwordValue.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405594B8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D090 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x140862418 (LocalpConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A60638 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSplitDevicePanelId @ 0x140AB6934 (_CmSplitDevicePanelId.c)
 *     HalpInitChipHacks @ 0x140C13B94 (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140C2BB00 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x140500544 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
