/*
 * XREFs of HUBPDO_EvtDeviceD0Entry @ 0x140015900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F63C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14000F6B4 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x1400341C8 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x140040318 (HUBIDLE_AddEvent.c)
 *     SleepstudyHelper_ComponentActive @ 0x140045784 (SleepstudyHelper_ComponentActive.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  int v4; // eax
  int v5; // edx
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  GUID v14; // [rsp+40h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  v3 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 384) = 1;
  v14 = 0LL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006C1E8)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v3 + 2184)) >= 0 )
  {
    v14 = *(GUID *)(v3 + 2184);
    _InterlockedOr((volatile signed __int32 *)(v3 + 1644), 0x80u);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v6 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v7 = *(_DWORD *)(v2 + 32) >> 3;
    LOWORD(v7) = (*(_DWORD *)(v2 + 32) & 8) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v7,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_START,
      &v14,
      *(_QWORD *)(v3 + 24),
      1,
      v4,
      v7);
  }
  v8 = *(_QWORD *)(v3 + 8);
  if ( (*(_DWORD *)(v8 + 204) & 0x800) != 0 && ((*(_DWORD *)(v3 + 2732) - 2) & 0xFFFFFFFD) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v8 + 1432), v5, 5, 74, (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
    }
    PoFxActivateComponent(*(_QWORD *)(*(_QWORD *)v3 + 2624LL), 0LL, 1LL);
  }
  HUBIDLE_AddEvent(v2 + 72, 6007LL, 0LL);
  KeClearEvent((PRKEVENT)(v3 + 1592));
  HUBSM_AddEvent(v3 + 512, 4067);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1592));
  v9 = *(_QWORD *)(v2 + 392);
  v10 = *(_DWORD *)(v3 + 1584);
  if ( v9 )
    SleepstudyHelper_ComponentActive();
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v13) = v6;
    LODWORD(v12) = v10;
    McTemplateK0pqq_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_COMPLETE,
      &v14,
      *(_QWORD *)(v3 + 24),
      v12,
      v13);
  }
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1644), 0xFFFFFF7F);
  return v10;
}
