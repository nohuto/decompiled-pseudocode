/*
 * XREFs of Display_LPI @ 0x140034288
 * Callers:
 *     AcpiGetCoordinatedLpiStates @ 0x1400326D4 (AcpiGetCoordinatedLpiStates.c)
 *     InitAcpiLpiStates @ 0x140046F90 (InitAcpiLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x140005F14 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x140009708 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DS @ 0x14000C800 (WPP_RECORDER_SF_DS.c)
 *     WPP_RECORDER_SF_i @ 0x14000CA9C (WPP_RECORDER_SF_i.c)
 *     DisplayGenAddr @ 0x140028380 (DisplayGenAddr.c)
 */

_UNKNOWN **__fastcall Display_LPI(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  const wchar_t *v5; // rdi
  unsigned int i; // esi
  __int64 v8; // rdi
  int v9; // edx
  struct _DEVICE_OBJECT *v10; // r8
  __int64 v11; // r9
  int v12; // edx
  struct _DEVICE_OBJECT *v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  if ( a1 )
  {
    result = &retaddr;
    v5 = (const wchar_t *)a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                WPP_GLOBAL_Control->DeviceExtension,
                                a2,
                                2,
                                168,
                                (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  5u,
                                  2u,
                                  0xA9u,
                                  (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
                                  v5);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                    5u,
                                    2u,
                                    0xAAu,
                                    (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              result = (_UNKNOWN **)WPP_RECORDER_SF_D(
                                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                      5u,
                                      2u,
                                      0xABu,
                                      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                result = (_UNKNOWN **)WPP_RECORDER_SF_i(
                                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                        a2,
                                        (__int64)a3,
                                        0xACu,
                                        v15);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(a2) = 5;
                result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                        WPP_GLOBAL_Control->DeviceExtension,
                                        a2,
                                        2,
                                        173,
                                        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
              }
            }
          }
        }
      }
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v8 = 80LL * i;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DS(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            a2,
            (__int64)a3,
            a4,
            v15,
            i,
            *(const wchar_t **)(v8 + a1 + 96));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0xAFu,
              (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0xB0u,
                (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  5u,
                  2u,
                  0xB1u,
                  (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_D(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    2u,
                    0xB2u,
                    (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_D(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      5u,
                      2u,
                      0xB3u,
                      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        5u,
                        2u,
                        0xB4u,
                        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(a2) = 5;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        a2,
                        2,
                        181,
                        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
                    }
                  }
                }
              }
            }
          }
        }
      }
      DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 48), "    ", a3, a4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v9) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          2,
          182,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
      DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 60), "    ", v10, v11);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v12) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          2,
          183,
          (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
      }
      result = (_UNKNOWN **)DisplayGenAddr((unsigned __int8 *)(v8 + a1 + 72), "    ", v13, v14);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(a2) = 5;
          result = (_UNKNOWN **)WPP_RECORDER_SF_(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  a2,
                                  2,
                                  184,
                                  (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
        }
      }
    }
  }
  return result;
}
