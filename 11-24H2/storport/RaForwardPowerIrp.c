/*
 * XREFs of RaForwardPowerIrp @ 0x140089E84
 * Callers:
 *     RaidAdapterPowerIrp @ 0x140006D90 (RaidAdapterPowerIrp.c)
 *     NvmeAdapterPowerIrp @ 0x1400D54F4 (NvmeAdapterPowerIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 */

NTSTATUS __fastcall RaForwardPowerIrp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  PoStartNextPowerIrp(a2);
  return RaForwardIrp(a1, a2);
}
