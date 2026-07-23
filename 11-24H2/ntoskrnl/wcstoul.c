/*
 * XREFs of wcstoul @ 0x1404FE090
 * Callers:
 *     PnpStringToDwordValue @ 0x1404D0620 (PnpStringToDwordValue.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405570E8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D7D0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalpConvertStringSidToSid @ 0x140866A28 (LocalpConvertStringSidToSid.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A58B88 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSplitDevicePanelId @ 0x140AB0C0C (_CmSplitDevicePanelId.c)
 *     HalpInitChipHacks @ 0x140C15B94 (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140C2DC20 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x1404FDE04 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
