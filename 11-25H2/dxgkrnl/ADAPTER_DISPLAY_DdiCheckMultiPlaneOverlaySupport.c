/*
 * XREFs of ADAPTER_DISPLAY_DdiCheckMultiPlaneOverlaySupport @ 0x14006BE00
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT@@@Z @ 0x1403CC5C4 (-DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPO.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiCheckMultiPlaneOverlaySupport(
        ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT *a2)
{
  return ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(a1, a2);
}
