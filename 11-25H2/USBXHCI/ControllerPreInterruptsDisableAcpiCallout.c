/*
 * XREFs of ControllerPreInterruptsDisableAcpiCallout @ 0x1400304A4
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x140038F50 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x14000D698 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ControllerPreInterruptsDisableAcpiCallout(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // r9d
  __int64 v8; // [rsp+30h] [rbp-39h]
  _DWORD v9[2]; // [rsp+50h] [rbp-19h] BYREF
  int v10; // [rsp+58h] [rbp-11h] BYREF
  int v11; // [rsp+5Ch] [rbp-Dh]
  int *v12; // [rsp+60h] [rbp-9h]
  int v13; // [rsp+68h] [rbp-1h]
  int v14; // [rsp+6Ch] [rbp+3h]
  int v15; // [rsp+70h] [rbp+7h] BYREF
  int v16; // [rsp+74h] [rbp+Bh]
  _DWORD *v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+84h] [rbp+1Bh]
  __int64 v20; // [rsp+88h] [rbp+1Fh] BYREF
  int v21; // [rsp+90h] [rbp+27h] BYREF
  __int128 v22; // [rsp+94h] [rbp+2Bh]

  v20 = 0LL;
  v16 = 0;
  v11 = 0;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006B240);
  v4 = *(_QWORD *)(result + 8);
  if ( _bittest64((const signed __int64 *)(v4 + 736), 0x36u) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_q(*(_QWORD *)(v4 + 72), v3, 4, 82, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids, a1);
    }
    v16 = 0;
    v19 = 0;
    v11 = 0;
    v14 = 0;
    v17 = v9;
    v12 = &v21;
    v15 = 1;
    v10 = 1;
    v9[0] = 1114203457;
    v9[1] = 1229804112;
    v18 = 8;
    v22 = 0LL;
    v21 = 1114596673;
    v13 = 20;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 336))(WdfDriverGlobals, a1);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, int *, int *, _QWORD, __int64 *))(WdfFunctions_01033 + 1488))(
               WdfDriverGlobals,
               v5,
               0LL,
               3325956LL,
               &v15,
               &v10,
               0LL,
               &v20);
    if ( (int)result >= 0 )
    {
      if ( v21 == 1114596673 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v7 = 85;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v7 = 84;
      }
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_q(
               *(_QWORD *)(v4 + 72),
               v6,
               4,
               v7,
               (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
               a1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = result;
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v4 + 72),
               4u,
               4u,
               0x53u,
               (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
               a1,
               v8);
    }
  }
  return result;
}
