/*
 * XREFs of UsbhQueryChange @ 0x1C0019300
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhQueryPortState @ 0x1C0016540 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryChange(__int64 a1, unsigned __int16 a2, _WORD *a3, int *a4)
{
  __int16 v8; // bx
  __int64 PortData; // rax
  __int64 v10; // rbp
  int v11; // esi
  int v12; // ebx
  int v14; // [rsp+A0h] [rbp+18h] BYREF
  int v15; // [rsp+A8h] [rbp+20h] BYREF

  v14 = 0;
  v8 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 19, (__int64)"FKh&", a2);
  v15 = 0;
  PortData = UsbhGetPortData(a1, a2);
  *a3 = 0;
  v10 = PortData;
  v11 = UsbhQueryPortState(a1, a2, (__int64)&v14, &v15);
  if ( v11 >= 0 )
  {
    if ( (v14 & 0x10000) == 0 )
    {
      while ( 1 )
      {
        v8 *= 2;
        if ( (v8 & 0xFFE0) != 0 )
          break;
        if ( ((unsigned __int16)v8 & HIWORD(v14)) != 0 )
          goto LABEL_8;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 20, (__int64)"FKh&");
      Log(a1, 4, 1666076515, 0LL, 0LL);
      if ( (FdoExt(a1)[640] & 1) == 0 || (++*(_DWORD *)(v10 + 408), *(int *)(v10 + 408) >= 3) )
      {
        v12 = -1073704960;
        UsbhException(a1, a2, 10, (int)&v14, 4, v11, -1073704960, usbfile_bus_c, 1463, 0);
        v11 = -1073741823;
        goto LABEL_11;
      }
LABEL_8:
      if ( (v8 & 0x1F) == 0 )
        goto LABEL_10;
    }
    *a3 |= v8;
  }
LABEL_10:
  v12 = v15;
LABEL_11:
  if ( *a3 )
    *(_DWORD *)(v10 + 408) = 0;
  Log(a1, 4, 1348692071, (unsigned __int16)*a3, v11);
  if ( a4 )
    *a4 = v12;
  return (unsigned int)v11;
}
