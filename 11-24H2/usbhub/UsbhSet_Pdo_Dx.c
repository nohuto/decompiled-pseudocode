/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x140016F34
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_SuspendChildHub @ 0x140036F20 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400388C8 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPdoSetD0_Finish @ 0x14004AFF4 (UsbhPdoSetD0_Finish.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x140015B70 (UsbhSshSetPortsBusyState.c)
 */

POWER_STATE __fastcall UsbhSet_Pdo_Dx(PDEVICE_OBJECT DeviceObject, POWER_STATE State)
{
  POWER_STATE result; // eax
  __int32 v5; // ebx
  __int32 v6; // ebx
  _DWORD *v7; // rbx
  _DWORD *v8; // rax
  int v9; // r8d

  PdoExt((__int64)DeviceObject)[197] = State.SystemState;
  result.SystemState = PoSetPowerState(DeviceObject, DevicePowerState, State).SystemState;
  v5 = State.SystemState - 1;
  if ( !v5 )
  {
    v7 = PdoExt((__int64)DeviceObject);
    v8 = PdoExt((__int64)DeviceObject);
    v9 = 2;
    return (POWER_STATE)UsbhSshSetPortsBusyState(*((_QWORD *)v8 + 148), *((_WORD *)v7 + 714), v9, 0);
  }
  v6 = v5 - 1;
  if ( !v6 || (unsigned int)(v6 - 1) < 2 )
  {
    v7 = PdoExt((__int64)DeviceObject);
    v8 = PdoExt((__int64)DeviceObject);
    v9 = 1;
    return (POWER_STATE)UsbhSshSetPortsBusyState(*((_QWORD *)v8 + 148), *((_WORD *)v7 + 714), v9, 0);
  }
  return result;
}
