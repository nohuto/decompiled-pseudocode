/*
 * XREFs of ADAPTER_DISPLAY_DdiCancelQueuedFlips @ 0x14006BB00
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCancelQueuedFlips@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CANCELQUEUEDFLIPS@@@Z @ 0x1400686C8 (-DdiCancelQueuedFlips@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CANCELQUEUEDFLIPS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiCancelQueuedFlips(
        ADAPTER_DISPLAY *a1,
        struct _DXGKARG_CANCELQUEUEDFLIPS *a2,
        __int64 a3)
{
  return ADAPTER_DISPLAY::DdiCancelQueuedFlips(a1, a2, a3);
}
