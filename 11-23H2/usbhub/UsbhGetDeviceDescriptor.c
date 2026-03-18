/*
 * XREFs of UsbhGetDeviceDescriptor @ 0x1C00546D0
 * Callers:
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0037CEC (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001A250 (UsbhSyncSendCommandToDevice.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C0052668 (UsbhValidateDeviceDescriptor.c)
 */

__int64 __fastcall UsbhGetDeviceDescriptor(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int16 v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+42h] [rbp-26h]
  __int16 v11; // [rsp+46h] [rbp-22h]
  __int16 v12; // [rsp+80h] [rbp+18h] BYREF

  v9 = 1664;
  v10 = 256;
  v11 = 18;
  v12 = 18;
  v4 = PdoExt(a2) + 350;
  v5 = UsbhSyncSendCommandToDevice(a1, a2, &v9, (__int64)v4, &v12);
  v7 = v5;
  if ( v5 < 0 )
    return (unsigned int)v7;
  if ( v12 == 18 && UsbhValidateDeviceDescriptor(a1, (__int64)v4, v6, 0LL, 0LL) )
  {
    Log(a1, 256, 1197818948, v7, 0LL);
    return (unsigned int)v7;
  }
  return 3221225628LL;
}
