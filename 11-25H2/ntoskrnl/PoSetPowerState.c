/*
 * XREFs of PoSetPowerState @ 0x140475220
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

POWER_STATE __stdcall PoSetPowerState(PDEVICE_OBJECT DeviceObject, POWER_STATE_TYPE Type, POWER_STATE State)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbp
  int v6; // edi
  KIRQL v7; // cl
  ULONG PowerFlags; // eax

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  if ( Type )
  {
    if ( Type == DevicePowerState )
    {
      PowerFlags = DeviceObjectExtension->PowerFlags;
      v6 = (unsigned __int8)PowerFlags >> 4;
      if ( v6 != State.SystemState )
        DeviceObjectExtension->PowerFlags = PowerFlags ^ ((unsigned __int8)PowerFlags ^ (unsigned __int8)(16 * LOBYTE(State.SystemState))) & 0xF0;
    }
  }
  else
  {
    v6 = DeviceObjectExtension->PowerFlags & 0xF;
    if ( v6 != State.SystemState )
      DeviceObjectExtension->PowerFlags ^= (LOBYTE(State.SystemState) ^ (unsigned __int8)DeviceObjectExtension->PowerFlags) & 0xF;
  }
  KeReleaseSpinLock(&PopIrpSerialLock, v7);
  return (POWER_STATE)v6;
}
