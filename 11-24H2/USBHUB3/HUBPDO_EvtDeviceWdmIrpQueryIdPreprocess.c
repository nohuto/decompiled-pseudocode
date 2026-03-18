/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1400181A8
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1400166A0 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1400341C8 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rax
  __int64 v9; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      a1,
                      off_14006C0F8)
                  + 24);
  if ( (*((_DWORD *)v3 + 411) & 0x4000) == 0 && !*(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) && !KeGetCurrentIrql() )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v3);
    LOBYTE(v5) = 1;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
           WdfDriverGlobals,
           v4,
           v5,
           0LL,
           4032,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    if ( v6 >= 0 )
    {
      KeClearEvent((PRKEVENT)(v3 + 202));
      HUBSM_AddEvent((__int64)(v3 + 64), 4095);
      HUBMISC_WaitForSignal(v3 + 202);
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v3);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
        WdfDriverGlobals,
        v7,
        0LL,
        4054LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3[1] + 1432LL),
        2u,
        5u,
        0x38u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v9);
    }
  }
  return 0LL;
}
