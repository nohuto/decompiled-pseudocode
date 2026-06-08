/*
 * XREFs of Display_PSS @ 0x14002C840
 * Callers:
 *     ValidatePssCore @ 0x1400314A0 (ValidatePssCore.c)
 *     InitAcpiPerfStates @ 0x1400372A4 (InitAcpiPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_i @ 0x1400075CC (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall Display_PSS(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int i; // esi
  int v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = (__int64)&retaddr;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   2,
                   94,
                   (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = WPP_RECORDER_SF_(
                   WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   2,
                   95,
                   (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
    }
    for ( i = 0; i < *a1; ++i )
    {
      result = i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v7) = i;
          LOBYTE(a2) = 5;
          result = WPP_RECORDER_SF_d(
                     WPP_GLOBAL_Control->DeviceExtension,
                     a2,
                     2,
                     96,
                     (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                     v7);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v7) = a1[12 * i + 2];
            LOBYTE(a2) = 5;
            result = WPP_RECORDER_SF_d(
                       WPP_GLOBAL_Control->DeviceExtension,
                       a2,
                       2,
                       97,
                       (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                       v7);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v7) = a1[12 * i + 3];
              LOBYTE(a2) = 5;
              result = WPP_RECORDER_SF_d(
                         WPP_GLOBAL_Control->DeviceExtension,
                         a2,
                         2,
                         98,
                         (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                         v7);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v7) = a1[12 * i + 4];
                LOBYTE(a2) = 5;
                result = WPP_RECORDER_SF_d(
                           WPP_GLOBAL_Control->DeviceExtension,
                           a2,
                           2,
                           99,
                           (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                           v7);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LODWORD(v7) = a1[12 * i + 5];
                  LOBYTE(a2) = 5;
                  result = WPP_RECORDER_SF_d(
                             WPP_GLOBAL_Control->DeviceExtension,
                             a2,
                             2,
                             100,
                             (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                             v7);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    v7 = *(_QWORD *)&a1[12 * i + 6];
                    result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x65u, v6);
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      v7 = *(_QWORD *)&a1[12 * i + 8];
                      result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x66u, v6);
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v7 = *(_QWORD *)&a1[12 * i + 10];
                        result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x67u, v6);
                      }
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        {
                          v7 = *(_QWORD *)&a1[12 * i + 12];
                          result = WPP_RECORDER_SF_i((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, 0x68u, v6);
                        }
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          {
                            LOBYTE(a2) = 5;
                            result = WPP_RECORDER_SF_(
                                       WPP_GLOBAL_Control->DeviceExtension,
                                       a2,
                                       2,
                                       105,
                                       (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
