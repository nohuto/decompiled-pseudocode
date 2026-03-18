/*
 * XREFs of HUBPSM20_GettingPortStatusInWaitingForStopSuspend @ 0x140012A50
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_GetPortStatusUsingControlTransfer @ 0x1400050AC (HUBHTX_GetPortStatusUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM20_GettingPortStatusInWaitingForStopSuspend(__int64 a1)
{
  HUBHTX_GetPortStatusUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
