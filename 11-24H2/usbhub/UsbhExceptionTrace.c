/*
 * XREFs of UsbhExceptionTrace @ 0x1400343AC
 * Callers:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14003DB54 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x14004DA08 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x14004DB24 (log_xstr.c)
 *     WPP_RECORDER_SF_dDD @ 0x140053B9C (WPP_RECORDER_SF_dDD.c)
 *     WPP_RECORDER_SF_Dd @ 0x140056120 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_ds @ 0x1400561E8 (WPP_RECORDER_SF_ds.c)
 *     WPP_RECORDER_SF_qq @ 0x140056324 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_sd @ 0x1400563EC (WPP_RECORDER_SF_sd.c)
 */

void __fastcall UsbhExceptionTrace(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int128 *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  int v10; // edx
  _DWORD *v11; // rbx
  void *DeviceExtension; // rcx
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( a2 )
  {
    v4 = a3;
    if ( a3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            10,
            (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, v13, a2, a1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_ds(
                WPP_GLOBAL_Control->DeviceExtension,
                a2,
                a3,
                a4,
                v13,
                *(_DWORD *)v4,
                *(_QWORD *)(v4 + 8));
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_sd(
                  WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  a3,
                  a4,
                  v13,
                  *(_QWORD *)(a2 + 592),
                  *(_DWORD *)(a2 + 584));
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    14,
                    (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_Dd(
                      WPP_GLOBAL_Control->DeviceExtension,
                      a2,
                      a3,
                      a4,
                      v13,
                      *(_DWORD *)(a2 + 24),
                      *(_DWORD *)(a2 + 28));
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_dq(
                        WPP_GLOBAL_Control->DeviceExtension,
                        *(unsigned __int16 *)(a2 + 32),
                        a3,
                        16,
                        (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                        *(_WORD *)(a2 + 32),
                        *(_QWORD *)(a2 + 40));
                    LODWORD(a3) = a2;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      v7 = (__int128 *)log_xstr(v16, *(unsigned __int16 *)(a2 + 32), *(_QWORD *)(a2 + 40), a4);
                      v9 = *(_QWORD *)(v8 + 64);
                      v15 = *v7;
                      WPP_RECORDER_SF__HEX_(
                        v9,
                        v10,
                        1,
                        17,
                        (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                        (__int64)&v15);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( *(_DWORD *)v4 == 4 )
      {
        v11 = *(_DWORD **)(a2 + 40);
        if ( v11 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              18,
              (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v14) = *v11;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                0,
                1,
                19,
                (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                v14);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                WPP_RECORDER_SF_dD(
                  WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  a3,
                  20,
                  (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                  v11[1],
                  v11[1]);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_dDD(
                    WPP_GLOBAL_Control->DeviceExtension,
                    a2,
                    a3,
                    21,
                    (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                    v11[2],
                    v11[3],
                    v11[4]);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
                    *((_QWORD *)&v15 + 1) = 64LL;
                    *(_QWORD *)&v15 = v11 + 5;
                    WPP_RECORDER_SF__HEX_(
                      (_DWORD)DeviceExtension,
                      a2,
                      1,
                      22,
                      (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                      (__int64)&v15);
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
