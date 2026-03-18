/*
 * XREFs of HUBPDO_EvtDeviceD0Entry @ 0x140015860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14000F664 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x140033EF8 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x14003FADC (HUBIDLE_AddEvent.c)
 *     SleepstudyHelper_ComponentActive @ 0x140044F44 (SleepstudyHelper_ComponentActive.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  int v4; // eax
  int v5; // esi
  __int64 v6; // rcx
  int v7; // edx
  int v8; // r9d
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
    && EtwActivityIdControl(3u, (LPGUID)(v3 + 2176)) >= 0 )
  {
    v14 = *(GUID *)(v3 + 2176);
    _InterlockedOr((volatile signed __int32 *)(v3 + 1636), 0x80u);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v5 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v6 = *(_DWORD *)(v2 + 32) >> 3;
    LOWORD(v6) = (*(_DWORD *)(v2 + 32) & 8) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v6,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_START,
      &v14,
      *(_QWORD *)(v3 + 24),
      1,
      v4,
      v6);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 8) + 204LL) & 0x800) != 0 )
  {
    if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( ((*(_DWORD *)(v3 + 2724) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v8 = 74;
    }
    else
    {
      if ( (*(_DWORD *)(v3 + 1636) & 0x200000) != 0 )
        goto LABEL_16;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v8 = 75;
    }
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      v7,
      5,
      v8,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
LABEL_15:
    PoFxActivateComponent(*(_QWORD *)(*(_QWORD *)v3 + 2616LL), 0LL, 1LL);
  }
LABEL_16:
  HUBIDLE_AddEvent(v2 + 72, 6007LL, 0LL);
  KeClearEvent((PRKEVENT)(v3 + 1584));
  HUBSM_AddEvent(v3 + 504, 4067);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1584));
  v9 = *(_QWORD *)(v2 + 392);
  v10 = *(_DWORD *)(v3 + 1576);
  if ( v9 )
    SleepstudyHelper_ComponentActive();
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v13) = v5;
    LODWORD(v12) = v10;
    McTemplateK0pqq_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_COMPLETE,
      &v14,
      *(_QWORD *)(v3 + 24),
      v12,
      v13);
  }
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1636), 0xFFFFFF7F);
  return v10;
}
