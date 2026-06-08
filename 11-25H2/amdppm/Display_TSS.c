/*
 * XREFs of Display_TSS @ 0x14002CB38
 * Callers:
 *     InitAcpiThrottleStates @ 0x140037630 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Ds @ 0x1400071B8 (WPP_RECORDER_SF_Ds.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 */

int __fastcall Display_TSS(unsigned int *a1)
{
  int result; // eax
  unsigned int i; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-78h]
  char DstBuf[16]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v10; // [rsp+50h] [rbp-48h]
  char v11; // [rsp+60h] [rbp-38h]

  if ( a1 )
  {
    result = 0;
    *(_OWORD *)DstBuf = 0LL;
    v11 = 0;
    v10 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   111,
                   (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   5,
                   2,
                   112,
                   (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    }
    for ( i = 0; i < *a1; ++i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            2,
            113,
            (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              5,
              2,
              114,
              (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                5,
                2,
                115,
                (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                5,
                2,
                116,
                (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
            }
          }
        }
      }
      _itoa_s(a1[5 * i + 4], DstBuf, 0x21uLL, 2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_Ds((__int64)WPP_GLOBAL_Control->DeviceExtension, v4, v5, 0x75u, v8, a1[5 * i + 4], DstBuf);
      result = _itoa_s(a1[5 * i + 5], DstBuf, 0x21uLL, 2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = WPP_RECORDER_SF_Ds(
                     (__int64)WPP_GLOBAL_Control->DeviceExtension,
                     v6,
                     v7,
                     0x76u,
                     v8,
                     a1[5 * i + 5],
                     DstBuf);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            result = WPP_RECORDER_SF_(
                       WPP_GLOBAL_Control->DeviceExtension,
                       5,
                       2,
                       119,
                       (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
        }
      }
    }
  }
  return result;
}
