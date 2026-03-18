/*
 * XREFs of UsbhPublishDualRoleFeaturesProperty @ 0x14005D53C
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x14002C480 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

void __fastcall UsbhPublishDualRoleFeaturesProperty(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rdi
  NTSTATUS v3; // eax
  int Data; // [rsp+58h] [rbp+10h] BYREF

  v2 = PdoExt((__int64)Pdo);
  Data = v2[762];
  v3 = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbDualRoleFeatures, 0, 0, 7u, 4u, &Data);
  if ( v3 < 0 )
    Log(*((_QWORD *)v2 + 148), 256, 1685221425, v3, (__int64)Pdo);
}
