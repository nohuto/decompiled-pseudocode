/*
 * XREFs of ACPIDispatchPowerIrpSuccess @ 0x140028E60
 * Callers:
 *     ACPIBusIrpSetSystemPower @ 0x140028B44 (ACPIBusIrpSetSystemPower.c)
 *     ACPIBusIrpQueryPower @ 0x140028D80 (ACPIBusIrpQueryPower.c)
 *     ACPIDockIrpQueryPower @ 0x140057710 (ACPIDockIrpQueryPower.c)
 *     ACPIDockIrpSetSystemPower @ 0x140057AFC (ACPIDockIrpSetSystemPower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchPowerIrpSuccess(__int64 a1, IRP *a2)
{
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 259LL;
}
