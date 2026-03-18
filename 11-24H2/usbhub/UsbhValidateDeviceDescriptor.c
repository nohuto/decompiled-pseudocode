/*
 * XREFs of UsbhValidateDeviceDescriptor @ 0x1400396FC
 * Callers:
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 *     UsbhGetHubDeviceInformation @ 0x14003C0B0 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x140046448 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetDeviceDescriptor @ 0x14005C10C (UsbhGetDeviceDescriptor.c)
 * Callees:
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 */

char __fastcall UsbhValidateDeviceDescriptor(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  PDEVICE_OBJECT v6; // rcx
  int v7; // r9d
  __int64 v9; // rcx

  if ( *(_BYTE *)a2 < 0x12u )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v6 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v7 = 14;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(a2 + 1) != 1 )
  {
    if ( a4 )
      *a4 = -1072693246;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v6 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v7 = 15;
LABEL_13:
    WPP_RECORDER_SF_(v6->DeviceExtension, 0, 1, v7, (__int64)&WPP_e1fde88e9ac33323a903575de9e6ca97_Traceguids);
    return 0;
  }
  if ( *(_BYTE *)(a2 + 4) == 17 && !*(_BYTE *)(a2 + 5) && !*(_BYTE *)(a2 + 6) )
  {
    v9 = *(unsigned __int16 *)(a2 + 2);
    if ( (unsigned __int16)(v9 - 513) > 0xFEu )
    {
      Log(a1, 256, 1447314481, v9, 0LL);
      return 0;
    }
    if ( a5 )
      *a5 = 1;
  }
  return 1;
}
