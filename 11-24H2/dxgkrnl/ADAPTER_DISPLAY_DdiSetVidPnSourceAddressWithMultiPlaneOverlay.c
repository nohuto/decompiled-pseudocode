/*
 * XREFs of ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay @ 0x1400140E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY@@@Z @ 0x1400140F8 (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCE.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay(
        ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY *a2)
{
  return ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay(a1, a2);
}
