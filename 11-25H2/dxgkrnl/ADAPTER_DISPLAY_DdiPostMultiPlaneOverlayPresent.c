/*
 * XREFs of ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent @ 0x14006BE20
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiPostMultiPlaneOverlayPresent@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT@@@Z @ 0x140068EE4 (-DdiPostMultiPlaneOverlayPresent@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_POSTMULTIPLANEOVERLAYPRESENT.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiPostMultiPlaneOverlayPresent(
        ADAPTER_DISPLAY *a1,
        const struct _DXGKARG_POSTMULTIPLANEOVERLAYPRESENT *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiPostMultiPlaneOverlayPresent(a1, a2, a3);
}
