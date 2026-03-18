/*
 * XREFs of WmipUpdateDeviceStackSize @ 0x1409CF85C
 * Callers:
 *     WmipForwardWmiIrp @ 0x1409CE2C0 (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x1409D0548 (WmipRegisterDevice.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

LONG __fastcall WmipUpdateDeviceStackSize(CCHAR a1)
{
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( WmipServiceDeviceObject->StackSize < a1 )
    WmipServiceDeviceObject->StackSize = a1;
  return KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
}
