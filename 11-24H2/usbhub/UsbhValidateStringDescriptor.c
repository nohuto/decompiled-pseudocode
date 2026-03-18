/*
 * XREFs of UsbhValidateStringDescriptor @ 0x140037B38
 * Callers:
 *     UsbhGetProductIdString @ 0x1400277A4 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x140027A08 (UsbhGetSerialNumber.c)
 *     UsbhGetBillboardInfo @ 0x1400465D8 (UsbhGetBillboardInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhValidateStringDescriptor(__int64 a1, unsigned __int8 *a2, unsigned int a3, _DWORD *a4)
{
  signed int v4; // eax
  PDEVICE_OBJECT v5; // rcx
  int v6; // r9d

  v4 = *a2;
  if ( v4 > a3 )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v6 = 10;
LABEL_19:
    WPP_RECORDER_SF_(v5->DeviceExtension, 0, 1, v6, (__int64)&WPP_e1fde88e9ac33323a903575de9e6ca97_Traceguids);
    return 0;
  }
  if ( (unsigned __int8)v4 <= 2u )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v6 = 11;
    goto LABEL_19;
  }
  if ( a2[1] != 3 )
  {
    if ( a4 )
      *a4 = -1072693246;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0;
    v6 = 12;
    goto LABEL_19;
  }
  if ( v4 % 2 )
  {
    if ( a4 )
      *a4 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        13,
        (__int64)&WPP_e1fde88e9ac33323a903575de9e6ca97_Traceguids,
        v4 % 2);
    return 0;
  }
  return 1;
}
