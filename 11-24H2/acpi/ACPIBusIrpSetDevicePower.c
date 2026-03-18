/*
 * XREFs of ACPIBusIrpSetDevicePower @ 0x140028AE4
 * Callers:
 *     ACPIBusIrpSetPower @ 0x140028AB0 (ACPIBusIrpSetPower.c)
 *     ACPICMLidSetPower @ 0x14004AA70 (ACPICMLidSetPower.c)
 * Callees:
 *     ACPIDeviceIrpDeviceRequest @ 0x14001A998 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIBusIrpSetDevicePower(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // r8
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  *(_DWORD *)(a2 + 48) = 0;
  *(_BYTE *)(v5 + 3) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 728));
  result = ACPIDeviceIrpDeviceRequest(a1, (_QWORD *)a2, ACPIDeviceIrpCompleteRequest);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
