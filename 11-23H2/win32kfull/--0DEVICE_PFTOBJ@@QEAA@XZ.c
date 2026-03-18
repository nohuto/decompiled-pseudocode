/*
 * XREFs of ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C0086008
 * Callers:
 *     GreEnumFonts @ 0x1C0003CEC (GreEnumFonts.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C0085DB0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C009F7F8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     vLinkEudcPFEs @ 0x1C00CBCE0 (vLinkEudcPFEs.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029A338 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029A768 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     vUnlinkEudcRFONTs @ 0x1C02A002C (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02A0130 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     <none>
 */

DEVICE_PFTOBJ *__fastcall DEVICE_PFTOBJ::DEVICE_PFTOBJ(DEVICE_PFTOBJ *this)
{
  *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 20280LL);
  return this;
}
