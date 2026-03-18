/*
 * XREFs of ADAPTER_DISPLAY_DdiSetVidPnSourceAddress @ 0x140014830
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x140014848 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddress(
        ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  return ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(a1, a2);
}
