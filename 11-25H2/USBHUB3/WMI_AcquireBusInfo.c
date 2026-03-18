/*
 * XREFs of WMI_AcquireBusInfo @ 0x14008F768
 * Callers:
 *     WMI_ExecuteMethodUsbWmiStdData @ 0x14008FA40 (WMI_ExecuteMethodUsbWmiStdData.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBUCX_GetControllerName @ 0x140027368 (HUBUCX_GetControllerName.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 */

__int64 __fastcall WMI_AcquireBusInfo(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  int ControllerName; // ebx
  int v8; // eax
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int16 v12; // [rsp+34h] [rbp-24h]

  *a3 = 0;
  if ( a2 >= 0x10 )
  {
    v11 = 0;
    v12 = 0;
    ControllerName = HUBUCX_GetControllerName(a1, &v11, 6u);
    if ( ControllerName >= 0 )
    {
      a4[1] = 0;
      v8 = v11;
      a4[2] = 0;
      a4[3] = v8;
      *a3 = 16;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = ControllerName;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        3u,
        0xCu,
        (__int64)&WPP_9d9b99bdbcfa37b3732b5a7eb5557008_Traceguids,
        v10);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), a2, 3, 11, (__int64)&WPP_9d9b99bdbcfa37b3732b5a7eb5557008_Traceguids);
    }
    return (unsigned int)-1073741789;
  }
  return (unsigned int)ControllerName;
}
