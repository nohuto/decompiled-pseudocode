/*
 * XREFs of UsbhBuildDeviceID @ 0x1C004F9EC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbhCreatePdo @ 0x1C0053530 (UsbhCreatePdo.c)
 *     UsbhUpdateUxdSettings @ 0x1C005ACF0 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhMakeId @ 0x1C0050D48 (UsbhMakeId.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0050FD4 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C005109C (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C0051200 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C00598B4 (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildDeviceID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // r13
  int v8; // eax
  int v9; // r8d
  int v10; // r11d
  __int16 v11; // r11
  unsigned __int16 v12; // r10
  unsigned __int16 v13; // r12
  unsigned __int64 v14; // r13
  int v15; // r8d
  int v16; // r9d
  unsigned __int16 v17; // r10
  __int16 v18; // r11
  __int64 Pool2; // rax
  _WORD *v20; // rcx
  __int64 Id; // rdx
  int v22; // r8d
  int v23; // r8d
  char v24; // al
  unsigned int v26; // r10d
  int v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+78h] [rbp+10h] BYREF

  if ( a2 )
  {
    v7 = PdoExt(a2);
    if ( (v7[355] & 0x10004) == 0x10000 )
    {
      v8 = UsbhBuildUxdPnpId(v6, a2, a3);
      if ( v8 >= 0 )
      {
        Log(a1, 4096, 1684624728, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v10 )
        {
          WPP_RECORDER_SF_Sqd(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_QWORD *)(a3 + 8),
            v9,
            v10 + 10,
            (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
            *(_QWORD *)(a3 + 8),
            *(_QWORD *)(a3 + 8),
            *(_DWORD *)(a3 + 4));
        }
        return 0LL;
      }
      Log(a1, 4096, 1684625477, 0LL, v8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != v11 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0xBu,
          (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids);
      }
    }
    v12 = *((_WORD *)v7 + 704);
    v13 = *((_WORD *)v7 + 705);
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  v14 = v12;
  Log(a1, 4096, 1685473604, v12, v13);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != v18 )
  {
    WPP_RECORDER_SF_DD(WPP_GLOBAL_Control->DeviceExtension, v17, v15, v16, v27, v17, v13);
  }
  Pool2 = ExAllocatePool2(64LL, 24LL, 1112885333LL);
  if ( Pool2 )
  {
    v20 = (_WORD *)Pool2;
    v28 = 24;
    *(_OWORD *)Pool2 = *(_OWORD *)L"USB\\VID_nnnn";
    for ( *(_QWORD *)(Pool2 + 16) = *(_QWORD *)L"nnnn"; *v20 != 110; ++v20 )
      ;
    *v20 = (unsigned __int8)Nibble[v14 >> 12];
    v20[1] = (unsigned __int8)Nibble[(v14 >> 8) & 0xF];
    v20[2] = (unsigned __int8)Nibble[(unsigned __int8)v14 >> 4];
    v20[3] = (unsigned __int8)Nibble[v14 & 0xF];
    Id = UsbhMakeId(0, (int)L"&PID_nnnn", Pool2, (int)&v28, 2, 4, v13, 0LL);
    if ( Id )
    {
      v24 = v28;
      *(_DWORD *)(a3 + 4) = v28;
      *(_QWORD *)(a3 + 8) = Id;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Sd(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v22,
          13,
          (__int64)&WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
          Id,
          v24);
      return 0LL;
    }
    v23 = 1684615474;
  }
  else
  {
    v23 = 1684615457;
  }
  Log(a1, 4096, v23, a2, -1073741670LL);
  return v26;
}
