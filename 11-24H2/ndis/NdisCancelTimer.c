/*
 * XREFs of NdisCancelTimer @ 0x14004DBC0
 * Callers:
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140152420 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140166CD0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisCancelTimer(PNDIS_TIMER Timer, PBOOLEAN TimerCancelled)
{
  *TimerCancelled = KeCancelTimer(&Timer->Timer);
}
