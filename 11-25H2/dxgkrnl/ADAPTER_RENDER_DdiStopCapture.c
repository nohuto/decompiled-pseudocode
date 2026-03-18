/*
 * XREFs of ADAPTER_RENDER_DdiStopCapture @ 0x14005A480
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1403F540C (-DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiStopCapture(ADAPTER_RENDER *a1, struct _DXGKARG_STOPCAPTURE *a2)
{
  return ADAPTER_RENDER::DdiStopCapture(a1, a2);
}
