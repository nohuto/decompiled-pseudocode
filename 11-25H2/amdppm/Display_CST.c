/*
 * XREFs of Display_CST @ 0x14002BFF4
 * Callers:
 *     InitAcpiCStates @ 0x140024CE4 (InitAcpiCStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     DisplayGenAddr @ 0x14002B7E4 (DisplayGenAddr.c)
 */

_UNKNOWN **__fastcall Display_CST(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebx
  unsigned __int8 *v7; // rsi
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                WPP_GLOBAL_Control->DeviceExtension,
                                5,
                                2,
                                131,
                                (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  5,
                                  2,
                                  132,
                                  (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v9 = *a1;
            result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    5,
                                    2,
                                    133,
                                    (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                                    v9);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    5,
                                    2,
                                    134,
                                    (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
          }
        }
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      v7 = (unsigned __int8 *)&a1[5 * i];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v8) = i;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            2,
            135,
            (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
            v8);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v8) = v7[16];
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              5,
              2,
              136,
              (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
              v8);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v8) = *((unsigned __int16 *)v7 + 9);
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                5,
                2,
                137,
                (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                v8);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v8) = *((_DWORD *)v7 + 5);
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  5,
                  2,
                  138,
                  (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                  v8);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  5,
                  2,
                  139,
                  (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
              }
            }
          }
        }
      }
      result = (_UNKNOWN **)DisplayGenAddr(v7 + 4, "    ", a3, a4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  5,
                                  2,
                                  140,
                                  (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
    }
  }
  return result;
}
