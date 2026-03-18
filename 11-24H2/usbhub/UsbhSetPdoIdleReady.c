/*
 * XREFs of UsbhSetPdoIdleReady @ 0x14001E578
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhIdleIrp_NoIrp @ 0x14001C40C (UsbhIdleIrp_NoIrp.c)
 *     UsbhPdoSetDx @ 0x14001F800 (UsbhPdoSetDx.c)
 *     UsbhBusIf_SuspendChildHub @ 0x140036F20 (UsbhBusIf_SuspendChildHub.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x14001E740 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x14001E9F0 (UsbhDerefPdoDeviceHandle.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSetPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbp
  __int64 result; // rax
  __int64 v8; // rbx
  _DWORD *v9; // rax

  v6 = PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232364915LL);
  v8 = result;
  if ( result )
  {
    Log(a1, 32, 1919306034, 0, result);
    v6[446] = 1;
    v9 = FdoExt(a1);
    if ( *((_QWORD *)v9 + 560) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64))v9 + 560))(*((_QWORD *)v9 + 529), v8, 1LL);
    return UsbhDerefPdoDeviceHandle(a1, v8, a3, 1232364915LL);
  }
  return result;
}
