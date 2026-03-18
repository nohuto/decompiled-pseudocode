/*
 * XREFs of Controller_UcxEvtStopTrackingForTimeSync @ 0x140043890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x14000D698 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     Controller_IsHandlePresentInCollection @ 0x140032728 (Controller_IsHandlePresentInCollection.c)
 *     WPP_RECORDER_SF_dqd @ 0x140032ECC (WPP_RECORDER_SF_dqd.c)
 *     WPP_RECORDER_SF_qq @ 0x14003749C (WPP_RECORDER_SF_qq.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1400425C4 (Controller_StopTimeTrackingForHandle.c)
 *     WPP_RECORDER_SF_II @ 0x140044AB0 (WPP_RECORDER_SF_II.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtStopTrackingForTimeSync(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rdi
  int v8; // r14d
  __int64 v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rsi
  unsigned int v13; // ebx
  int v15; // edx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // edx
  int v20; // edx
  int v21; // eax
  __int64 v22; // [rsp+28h] [rbp-40h]
  __int64 *v23; // [rsp+88h] [rbp+20h] BYREF

  v23 = 0LL;
  v7 = 0LL;
  v8 = (*(char (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 2240))(WdfDriverGlobals);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  v12 = v9;
  if ( a4 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      HIDWORD(v22) = 0;
      WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 310);
    }
    v13 = -1073741811;
    goto LABEL_5;
  }
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **, _QWORD))(WdfFunctions_01033 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v23,
          0LL);
  if ( (v13 & 0x80000000) == 0 )
  {
    if ( !*v23 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), v15, 4, 311, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
      }
LABEL_13:
      v13 = -1073741811;
      goto LABEL_5;
    }
    if ( (_BYTE)v8 == 1 )
    {
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2216))(WdfDriverGlobals, a2);
      v7 = v16;
      if ( !v16 )
      {
        v13 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v13);
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v12 + 72),
          v17,
          4,
          312,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          124);
        goto LABEL_5;
      }
      v18 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                          WdfDriverGlobals,
                          v16,
                          off_14006B218)
                      + 24);
      if ( v18 != *v23 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *(_QWORD *)(v12 + 72),
            2u,
            4u,
            0x139u,
            (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
            *v23,
            v18);
        goto LABEL_13;
      }
    }
    else
    {
      v7 = *v23;
      if ( !Controller_IsHandlePresentInCollection(v12, *v23) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_q(
            *(_QWORD *)(v12 + 72),
            v19,
            4,
            314,
            (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
            v7);
        }
        goto LABEL_13;
      }
    }
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                      WdfDriverGlobals,
                      v7,
                      off_14006B218)
                  + 48) )
    {
      if ( *(_DWORD *)(v12 + 792) == 1 )
      {
        v21 = Controller_StopTimeTrackingForHandle(v12, v7, 1);
        v13 = v21;
        if ( v21 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qd(
              *(_QWORD *)(v12 + 72),
              2u,
              4u,
              0x13Cu,
              (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
              v7,
              v21);
          if ( !(_BYTE)v8 )
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v7);
        }
      }
      else
      {
        v13 = -1073741436;
      }
    }
    else
    {
      v13 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v13);
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v12 + 72),
        v20,
        4,
        315,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
        v7);
    }
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v22) = v13;
    WPP_RECORDER_SF_dqd(
      *(_QWORD *)(v12 + 72),
      5u,
      4u,
      0x13Du,
      (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
      v22,
      v7,
      v8);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v13);
}
