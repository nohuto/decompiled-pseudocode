/*
 * XREFs of UsbhGetHubPowerStatus @ 0x14003C2F8
 * Callers:
 *     UsbhGetMaxPowerPerPort @ 0x14003C444 (UsbhGetMaxPowerPerPort.c)
 *     UsbhInitialize @ 0x14003C7C0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     UsbhQueryHubState @ 0x140047294 (UsbhQueryHubState.c)
 */

void __fastcall UsbhGetHubPowerStatus(__int64 a1)
{
  _DWORD *v2; // rbx
  int v3; // eax
  int v4; // r10d
  int v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  v2 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      31,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  if ( *((_QWORD *)v2 + 328) )
  {
    v5 = 0;
    v3 = UsbhQueryHubState(a1, &v5, &v6);
    Log(a1, 8, 1752396916, 0LL, v3);
    if ( v4 >= 0 )
    {
      if ( (v5 & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              32,
              (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
        }
        v2[762] = 100;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            33,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
        v2[762] = 500;
      }
    }
  }
  else
  {
    v2[762] = 0;
  }
}
