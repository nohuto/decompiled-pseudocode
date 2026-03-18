/*
 * XREFs of HUBPDO_CleanupIsTunneledUsb4DeviceProperty @ 0x140081048
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x140016670 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_CleanupIsTunneledUsb4DeviceProperty(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-40h]
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF

  HIDWORD(v6[0]) = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD *)(a1 + 24);
  v6[2] = 0LL;
  v6[0] = 24LL;
  v6[1] = &DEVPKEY_Device_IsDeviceUsb4Tunneled;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, _DWORD, _QWORD))(WdfFunctions_01015 + 3480))(
             WdfDriverGlobals,
             v2,
             v6,
             17LL,
             0,
             0LL);
  if ( (int)(result + 0x80000000) >= 0
    && (_DWORD)result != -1073741772
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
             2u,
             2u,
             0x6Au,
             (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
             v5);
  }
  return result;
}
