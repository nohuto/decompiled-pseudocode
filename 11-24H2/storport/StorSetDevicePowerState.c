/*
 * XREFs of StorSetDevicePowerState @ 0x14003C60C
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x140034B54 (RaidAdapterDevicePowerstopAdapter.c)
 *     NvmeAdapterDevicePowerStopAdapter @ 0x14012DFFC (NvmeAdapterDevicePowerStopAdapter.c)
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x14012FE8C (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x1401347A8 (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     <none>
 */

POWER_STATE __fastcall StorSetDevicePowerState(struct _DEVICE_OBJECT *a1, POWER_STATE a2)
{
  return PoSetPowerState(a1, DevicePowerState, a2);
}
