/*
 * XREFs of HUBPDO_AssignIsTunneledUsb4DeviceProperty @ 0x140080970
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x140016670 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_AssignIsTunneledUsb4DeviceProperty(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-40h]
  int v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+44h] [rbp-24h]
  void *v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+50h] [rbp-18h]
  char v10; // [rsp+70h] [rbp+8h] BYREF

  v7 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v7 = 0;
  v9 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  v8 = &DEVPKEY_Device_IsDeviceUsb4Tunneled;
  v6 = 24;
  v10 = ((*(_DWORD *)(v3 + 1636) & 0x200000) != 0) - 1;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *, __int64, int, char *))(WdfFunctions_01015
                                                                                                + 3480))(
             WdfDriverGlobals,
             v2,
             &v6,
             17LL,
             1,
             &v10);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
             2u,
             2u,
             0x69u,
             (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
             v5);
  }
  return result;
}
