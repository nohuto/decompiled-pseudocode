/*
 * XREFs of HUBPDO_AssignUsb4TunnelStateProperty @ 0x140080CDC
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x140016670 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_AssignUsb4TunnelStateProperty(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  int v5; // edx
  __int64 result; // rax
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // dl
  __int64 v9; // [rsp+28h] [rbp-40h]
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF

  HIDWORD(v10[0]) = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD **)(a1 + 24);
  v10[0] = 24LL;
  v4 = v2;
  v10[2] = 0LL;
  v10[1] = &DEVPKEY_Device_Usb4TunnelState;
  if ( *(_BYTE *)(*v3 + 240LL) )
    v5 = *(_DWORD *)(*v3 + 280LL);
  else
    v5 = *((_DWORD *)v3 + 681);
  result = (unsigned int)(v5 - 1);
  v11 = v5;
  if ( (unsigned int)result > 3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v7 = 107;
    LODWORD(v9) = v5;
    v8 = 2;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v3[1] + 1432LL),
             v8,
             2u,
             v7,
             (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
             v9);
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, int, int *))(WdfFunctions_01015
                                                                                                  + 3480))(
             WdfDriverGlobals,
             v4,
             v10,
             7LL,
             4,
             &v11);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = result;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v3[1] + 1432LL),
               2u,
               2u,
               0x6Cu,
               (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
               v9);
    }
    return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = (__int64)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v7 = 109;
      LODWORD(v9) = v11;
      v8 = 5;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v3[1] + 1432LL),
               v8,
               2u,
               v7,
               (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
               v9);
    }
  }
  return result;
}
