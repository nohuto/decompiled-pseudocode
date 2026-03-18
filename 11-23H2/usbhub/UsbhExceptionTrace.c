/*
 * XREFs of UsbhExceptionTrace @ 0x1C004AC64
 * Callers:
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C002E6BC (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x1C0041698 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x1C00417B8 (log_xstr.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00484FC (WPP_RECORDER_SF_dDD.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C004B4E0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_ds @ 0x1C004B5A8 (WPP_RECORDER_SF_ds.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004B6E8 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_sd @ 0x1C004B7B0 (WPP_RECORDER_SF_sd.c)
 */

void __fastcall UsbhExceptionTrace(char a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int128 *v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rbx
  void *DeviceExtension; // rcx
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v17[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( a2 )
  {
    v4 = a3;
    if ( a3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            0,
            1u,
            0xAu,
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
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1u,
                    0xEu,
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
                    {
                      LODWORD(v14) = *(unsigned __int16 *)(a2 + 32);
                      WPP_RECORDER_SF_dq(
                        (__int64)WPP_GLOBAL_Control->DeviceExtension,
                        *(unsigned __int16 *)(a2 + 32),
                        a3,
                        0x10u,
                        (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                        v14,
                        *(_QWORD *)(a2 + 40));
                    }
                    a3 = a2;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      v7 = (__int128 *)log_xstr((__int64)v17, *(unsigned __int16 *)(a2 + 32), *(_QWORD *)(a2 + 40));
                      v9 = *(_QWORD *)(v8 + 64);
                      v16 = *v7;
                      WPP_RECORDER_SF__HEX_(
                        v9,
                        v10,
                        1u,
                        0x11u,
                        (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                        &v16);
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
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0x12u,
              (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v14) = *v11;
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                0,
                1u,
                0x13u,
                (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                v14);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LODWORD(v15) = v11[1];
                LODWORD(v14) = v15;
                WPP_RECORDER_SF_dD(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  a3,
                  0x14u,
                  (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                  v14,
                  v15);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LODWORD(v15) = v11[3];
                  LODWORD(v14) = v11[2];
                  WPP_RECORDER_SF_dDD(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    a2,
                    a3,
                    0x15u,
                    (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                    v14,
                    v15,
                    v11[4]);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
                    *((_QWORD *)&v16 + 1) = 64LL;
                    *(_QWORD *)&v16 = v11 + 5;
                    WPP_RECORDER_SF__HEX_(
                      (__int64)DeviceExtension,
                      a2,
                      1u,
                      0x16u,
                      (__int64)&WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids,
                      &v16);
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
