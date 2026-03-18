/*
 * XREFs of ADAPTER_DISPLAY_SetVidPnSourceVisibility @ 0x140057FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  return ADAPTER_DISPLAY::SetVidPnSourceVisibility(a1, a2, a3, a4, a5);
}
