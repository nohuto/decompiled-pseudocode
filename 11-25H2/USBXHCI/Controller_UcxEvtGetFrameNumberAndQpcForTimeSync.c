/*
 * XREFs of Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1400322E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     Controller_IsHandlePresentInCollection @ 0x140032728 (Controller_IsHandlePresentInCollection.c)
 *     Controller_TranslateFrameNumberToQpcValue @ 0x1400327F4 (Controller_TranslateFrameNumberToQpcValue.c)
 *     WPP_RECORDER_SF_qq @ 0x14003749C (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_II @ 0x140044AB0 (WPP_RECORDER_SF_II.c)
 *     WPP_RECORDER_SF_qqqd @ 0x140045664 (WPP_RECORDER_SF_qqqd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtGetFrameNumberAndQpcForTimeSync(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  char v13; // r12
  int v14; // ebx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-68h]
  __int64 *v21; // [rsp+50h] [rbp-38h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+20h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  LOBYTE(v7) = 0;
  LOBYTE(v8) = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2240))(WdfDriverGlobals, a2);
  if ( a4 < 0x3C )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 322);
    v14 = -1073741811;
    goto LABEL_33;
  }
  v20 = 0;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 **))(WdfFunctions_01033 + 2152))(
          WdfDriverGlobals,
          a2,
          a4,
          &v21);
  if ( v14 >= 0 )
  {
    if ( !*v21 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), v10, 4, 323, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
      }
LABEL_9:
      v14 = -1073741811;
      goto LABEL_33;
    }
    if ( v13 == 1 )
    {
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2216))(WdfDriverGlobals, a2);
      v8 = v15;
      if ( !v15 )
      {
        v14 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01033 + 2120))(
                   WdfDriverGlobals,
                   a2,
                   (unsigned int)v14,
                   a3);
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v9 + 72),
          v16,
          4,
          324,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          120);
        goto LABEL_33;
      }
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             v15,
             off_14006B218);
      v17 = *(_QWORD *)(v7 + 24);
      v10 = *v21;
      if ( v17 != *v21 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_qq(
            *(_QWORD *)(v9 + 72),
            v10,
            4,
            325,
            (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
            *v21,
            v17);
        }
        goto LABEL_9;
      }
    }
    else
    {
      v8 = *v21;
      if ( !(unsigned __int8)Controller_IsHandlePresentInCollection(v9, *v21) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_q(
            *(_QWORD *)(v9 + 72),
            v10,
            4,
            326,
            (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
            v8);
        }
        goto LABEL_9;
      }
    }
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
           WdfDriverGlobals,
           v8,
           off_14006B218);
    if ( !*(_BYTE *)(v7 + 48) )
    {
      v14 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01033
                                                                                                 + 2120))(
                 WdfDriverGlobals,
                 a2,
                 (unsigned int)v14,
                 a3);
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v9 + 72),
        v10,
        4,
        327,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
        v8);
      goto LABEL_33;
    }
    if ( a3 >= 0x3C )
    {
      v20 = 0;
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64 *))(WdfFunctions_01033
                                                                                                 + 2160))(
              WdfDriverGlobals,
              a2,
              a3,
              &v22);
      if ( v14 >= 0 )
      {
        if ( *(_DWORD *)(v9 + 792) == 1 )
        {
          ++*(_DWORD *)(v7 + 52);
          v18 = v22;
          if ( *(_DWORD *)(v22 + 8) || *(_DWORD *)(v22 + 12) )
          {
            ++*(_DWORD *)(v7 + 56);
            v18 = v22;
          }
          *(_DWORD *)(v18 + 36) = *(_DWORD *)(v9 + 1088);
          *(_QWORD *)(v22 + 24) = *(_QWORD *)(v9 + 1192);
          v14 = Controller_TranslateFrameNumberToQpcValue(v9, v22);
        }
        else
        {
          v14 = -1073741436;
        }
      }
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_II(*(_QWORD *)(v9 + 72), v10, v11, 328);
    goto LABEL_9;
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqd(*(_QWORD *)(v9 + 72), v10, v11, v12, v20, a2, v8, v7, v14);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, unsigned __int64))(WdfFunctions_01033 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v14,
           a3);
}
