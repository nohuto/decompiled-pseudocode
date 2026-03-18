/*
 * XREFs of ADAPTER_DISPLAY_DdiDestroyPeriodicFrameNotification @ 0x14005B700
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiDestroyPeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DESTROYPERIODICFRAMENOTIFICATION@@@Z @ 0x1403E8BE0 (-DdiDestroyPeriodicFrameNotification@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_DESTROYPERIODICFRAMENOTI.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiDestroyPeriodicFrameNotification(
        ADAPTER_DISPLAY *a1,
        struct _DXGKARG_DESTROYPERIODICFRAMENOTIFICATION *a2)
{
  return ADAPTER_DISPLAY::DdiDestroyPeriodicFrameNotification(a1, a2);
}
