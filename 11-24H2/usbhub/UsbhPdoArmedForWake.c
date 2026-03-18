/*
 * XREFs of UsbhPdoArmedForWake @ 0x14001E130
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x14001E27C (UsbhSyncSuspendPdoPort.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 */

bool __fastcall UsbhPdoArmedForWake(__int64 a1)
{
  return PdoExt(a1)[588] >= 0;
}
