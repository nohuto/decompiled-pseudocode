/*
 * XREFs of ?swap@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXAEAV12@@Z @ 0x1400883C0
 * Callers:
 *     ?CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z @ 0x140083518 (-CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z.c)
 *     ?ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x140086844 (-ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?swap@?$__compressed_pair@PEAVDISPLAY_MUX_PAIRING@@U?$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd@@QEAAXAEAV12@@Z @ 0x1400883AC (-swap@-$__compressed_pair@PEAVDISPLAY_MUX_PAIRING@@U-$default_delete@VDISPLAY_MUX_PAIRING@@@wist.c)
 */

__int64 __fastcall wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::swap(
        __int64 *a1,
        __int64 *a2)
{
  return wistd::__compressed_pair<DISPLAY_MUX_PAIRING *,wistd::default_delete<DISPLAY_MUX_PAIRING>>::swap(a1, a2);
}
