/*
 * XREFs of UsbhEnableDeviceForWake @ 0x1400265EC
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x14001E27C (UsbhSyncSuspendPdoPort.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x140026E60 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

__int64 __fastcall UsbhEnableDeviceForWake(__int64 a1, __int64 a2)
{
  int v3; // esi
  _DWORD *v4; // rbp
  int v5; // eax
  int v6; // r10d
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int16 v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  v3 = a1;
  FdoExt(a1);
  v4 = PdoExt(a2);
  v8 = 66304LL;
  v5 = UsbhSyncSendCommandToDevice(v3, a2, (unsigned int)&v8, 0, (__int64)&v9);
  Log(v3, 256, 1162770283, v5, 0LL);
  if ( v6 >= 0 )
    v4[355] |= 0x8000u;
  return (unsigned int)v6;
}
