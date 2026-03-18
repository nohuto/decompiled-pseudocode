/*
 * XREFs of UsbhPdo_ResetDriverProblemDesc @ 0x14005D2D0
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x14001D150 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 */

NTSTATUS __fastcall UsbhPdo_ResetDriverProblemDesc(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rbx
  NTSTATUS result; // eax

  v2 = PdoExt((__int64)Pdo);
  result = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0, 0, 0LL);
  v2[705] = 0;
  return result;
}
