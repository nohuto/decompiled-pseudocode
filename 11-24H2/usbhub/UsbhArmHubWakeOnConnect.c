/*
 * XREFs of UsbhArmHubWakeOnConnect @ 0x140013A7C
 * Callers:
 *     UsbhSshSuspendHub @ 0x140013464 (UsbhSshSuspendHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSetHubRemoteWake @ 0x140013AD0 (UsbhSetHubRemoteWake.c)
 *     UsbhArmHubForWakeDetect @ 0x140013CAC (UsbhArmHubForWakeDetect.c)
 */

_DWORD *__fastcall UsbhArmHubWakeOnConnect(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *result; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rdx

  result = FdoExt((__int64)DeviceObject);
  v3 = result;
  if ( (result[640] & 0x80000) == 0 )
  {
    UsbhArmHubForWakeDetect(DeviceObject);
    LOBYTE(v4) = 1;
    result = (_DWORD *)UsbhSetHubRemoteWake(DeviceObject, v4);
    if ( (int)result >= 0 )
      v3[640] |= 0x80000u;
  }
  return result;
}
