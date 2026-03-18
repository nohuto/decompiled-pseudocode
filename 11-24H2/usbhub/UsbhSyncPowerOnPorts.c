/*
 * XREFs of UsbhSyncPowerOnPorts @ 0x140038394
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 *     UsbhFinishStart @ 0x14004604C (UsbhFinishStart.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhSetPortPower @ 0x14003D390 (UsbhSetPortPower.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhSyncPowerOnPorts(__int64 a1)
{
  int v2; // ebx
  unsigned __int16 v3; // si
  int v5; // [rsp+28h] [rbp-20h]

  v2 = 0;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  v3 = 1;
  if ( !*((_BYTE *)FdoExt(a1) + 2938) )
    goto LABEL_8;
  do
  {
    v2 = UsbhSetPortPower(a1, v3);
    if ( (v2 & 0xC0000000) == 0xC0000000 )
      break;
    ++v3;
  }
  while ( v3 <= *((unsigned __int8 *)FdoExt(a1) + 2938) );
  if ( v2 >= 0 )
LABEL_8:
    UsbhWait(a1, dword_14006F5D4);
  Log(a1, 8, 1934643031, v2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = v2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v5);
  }
  return (unsigned int)v2;
}
