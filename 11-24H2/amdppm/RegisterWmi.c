/*
 * XREFs of RegisterWmi @ 0x140028178
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1400249A0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     memset @ 0x14000E780 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  int v4; // eax
  int v5; // edx
  __int64 i; // rdi
  __int128 *v7; // rax
  __int128 v8; // xmm0
  int v9; // edx
  int v10; // ebx
  int v11; // r9d
  unsigned int j; // edi
  __int128 v14; // xmm0
  __int64 v15; // rsi
  __int64 v16; // [rsp+30h] [rbp-A1h]
  _QWORD v17[2]; // [rsp+38h] [rbp-99h] BYREF
  _OWORD v18[4]; // [rsp+48h] [rbp-89h] BYREF
  _OWORD v19[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-29h]
  void *v21; // [rsp+B0h] [rbp-21h]
  _QWORD v22[5]; // [rsp+B8h] [rbp-19h]
  __int128 v23; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+F0h] [rbp+1Fh]
  wchar_t v25; // [rsp+F8h] [rbp+27h]

  v17[0] = 1703960LL;
  v20 = 0LL;
  v25 = aProcessorwmi[12];
  v17[1] = &v23;
  v21 = &ProcessorPerfStateEvent_GUID;
  v22[0] = a1 + 166;
  v22[1] = &ProcessorCStateEvent_GUID;
  v22[2] = a1 + 170;
  v22[3] = &ProcessorThrottleStateEvent_GUID;
  memset(v18, 0, 60);
  v22[4] = a1 + 174;
  memset(v19, 0, sizeof(v19));
  v23 = *(_OWORD *)L"PROCESSORWMI";
  v24 = *(_QWORD *)L"RWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  a1[172] = 0;
  v3 = v2;
  a1[168] = 4;
  a1[176] = 4;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 328))(
         WdfDriverGlobals,
         v2,
         v17);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      4,
      10,
      (__int64)&WPP_03f51a9042f5341de75bcf077a49bb6a_Traceguids,
      v4);
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 4 )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= 3 )
          return 0LL;
        memset(v19, 0, sizeof(v19));
        v20 = 0LL;
        LODWORD(v19[0]) = 40;
        v14 = *(_OWORD *)v22[2 * j - 1];
        DWORD1(v19[1]) = 2;
        *(_OWORD *)((char *)v19 + 4) = v14;
        memset(v18, 0, sizeof(v18));
        *(_QWORD *)&v18[1] = v19;
        LODWORD(v18[0]) = 64;
        v15 = v22[2 * j];
        BYTE9(v18[1]) = 1;
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD, __int64))(WdfFunctions_01015
                                                                                                 + 2984))(
                WdfDriverGlobals,
                v3,
                v18,
                0LL,
                v15);
        if ( v10 < 0 )
          break;
        *(_BYTE *)(v15 + 12) = 1;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v10;
      v11 = 12;
      goto LABEL_10;
    }
    v20 = 0LL;
    v7 = (__int128 *)*(&off_140010000 + 3 * i);
    memset(v19, 0, sizeof(v19));
    LODWORD(v19[0]) = 40;
    v8 = *v7;
    DWORD2(v19[1]) = *((_DWORD *)&off_140010000 + 6 * i + 4);
    *(_OWORD *)((char *)v19 + 4) = v8;
    memset(v18, 0, sizeof(v18));
    *(_QWORD *)&v18[1] = v19;
    LODWORD(v18[0]) = 64;
    *(_QWORD *)&v18[2] = *(&off_140010000 + 3 * i + 1);
    BYTE9(v18[1]) = 1;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
            WdfDriverGlobals,
            v3,
            v18,
            0LL,
            0LL);
    if ( v10 < 0 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (unsigned int)v10;
  v11 = 11;
LABEL_10:
  LODWORD(v16) = v10;
  LOBYTE(v9) = 2;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    4,
    v11,
    (__int64)&WPP_03f51a9042f5341de75bcf077a49bb6a_Traceguids,
    v16);
  return (unsigned int)v10;
}
