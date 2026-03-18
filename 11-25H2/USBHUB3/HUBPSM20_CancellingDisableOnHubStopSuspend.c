/*
 * XREFs of HUBPSM20_CancellingDisableOnHubStopSuspend @ 0x140012390
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CancelControlTransfer @ 0x140002AA4 (HUBHTX_CancelControlTransfer.c)
 */

__int64 __fastcall HUBPSM20_CancellingDisableOnHubStopSuspend(__int64 a1)
{
  HUBHTX_CancelControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
