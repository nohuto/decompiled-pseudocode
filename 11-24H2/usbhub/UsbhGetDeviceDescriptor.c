/*
 * XREFs of UsbhGetDeviceDescriptor @ 0x14005C10C
 * Callers:
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x140046448 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x140026E60 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhValidateDeviceDescriptor @ 0x1400396FC (UsbhValidateDeviceDescriptor.c)
 */

__int64 __fastcall UsbhGetDeviceDescriptor(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v9; // [rsp+28h] [rbp-40h]
  __int16 v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+42h] [rbp-26h]
  __int16 v12; // [rsp+46h] [rbp-22h]
  __int16 v13; // [rsp+80h] [rbp+18h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v10 = 1664;
  v11 = 256;
  v12 = 18;
  v13 = 18;
  v4 = PdoExt(a2) + 350;
  v5 = UsbhSyncSendCommandToDevice(a1, a2, (char *)&v10, (__int64)v4, &v13, v9, &v14);
  v7 = v5;
  if ( v5 < 0 )
    return (unsigned int)v7;
  if ( v13 == 18 && UsbhValidateDeviceDescriptor(a1, (__int64)v4, v6, 0LL, 0LL) )
  {
    Log(a1, 256, 1197818948, v7, 0LL);
    return (unsigned int)v7;
  }
  return 3221225628LL;
}
