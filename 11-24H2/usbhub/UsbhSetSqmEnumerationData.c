/*
 * XREFs of UsbhSetSqmEnumerationData @ 0x14002C540
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x14002C480 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     UsbhSetPdoRegistryParameter @ 0x140036540 (UsbhSetPdoRegistryParameter.c)
 */

__int64 __fastcall UsbhSetSqmEnumerationData(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  __int64 v3; // r8
  void *v4; // r9
  __int64 result; // rax

  v2 = PdoExt((__int64)DeviceObject);
  v4 = v2 + 706;
  if ( v2[706] )
    UsbhSetPdoRegistryParameter(DeviceObject, L"MsOs20Flags", 4u, v4, 4u);
  result = UsbhGetPortData(*((_QWORD *)v2 + 148), *((unsigned __int16 *)v2 + 714), v3, (__int64)v4);
  if ( result )
    return UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationRetryCount", 4u, (PVOID)(result + 544), 4u);
  return result;
}
