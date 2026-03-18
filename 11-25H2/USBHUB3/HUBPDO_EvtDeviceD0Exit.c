/*
 * XREFs of HUBPDO_EvtDeviceD0Exit @ 0x140015AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14000F664 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x140033EF8 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x14003FADC (HUBIDLE_AddEvent.c)
 *     SleepstudyHelper_ComponentInactive @ 0x140044FCC (SleepstudyHelper_ComponentInactive.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     WMI_FireNotification @ 0x14008FB20 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Exit(unsigned __int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  int v8; // r14d
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r9d
  __int64 v17; // [rsp+20h] [rbp-59h]
  __int64 v18; // [rsp+28h] [rbp-51h]
  __int64 v19; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v21; // [rsp+60h] [rbp-19h] BYREF
  __int64 v22; // [rsp+70h] [rbp-9h]
  __int64 v23; // [rsp+78h] [rbp-1h]
  __int128 v24; // [rsp+80h] [rbp+7h]
  __int64 v25; // [rsp+90h] [rbp+17h]
  GUID v26; // [rsp+98h] [rbp+1Fh] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  v5 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 384) = a2;
  v26 = 0LL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006C1E8)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v5 + 2176)) >= 0 )
  {
    v26 = *(GUID *)(v5 + 2176);
    _InterlockedOr((volatile signed __int32 *)(v5 + 1636), 0x80u);
  }
  KeClearEvent((PRKEVENT)(v5 + 1584));
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 3104))(
         WdfDriverGlobals,
         a1);
  v8 = v6;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v9 = *(_DWORD *)(v4 + 32) >> 3;
    LOWORD(v9) = (*(_DWORD *)(v4 + 32) & 8) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_START,
      &v26,
      *(_QWORD *)(v5 + 24),
      a2,
      v6,
      v9);
  }
  if ( a2 == 5 )
  {
    if ( !v8 )
      goto LABEL_26;
  }
  else if ( !v8 && (*(_DWORD *)(v5 + 1632) & 0x400) == 0 )
  {
    v19 = 0LL;
    DWORD1(v21) = 0;
    HIDWORD(v20[0]) = 0;
    _InterlockedOr((volatile signed __int32 *)(v5 + 1632), 0x400u);
    v25 = 0LL;
    v20[2] = 1LL;
    v22 = 0LL;
    v20[1] = HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended;
    v21 = 0LL;
    v23 = 0x100000001LL;
    LODWORD(v21) = 56;
    v24 = a1;
    v20[0] = 24LL;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01015 + 3032))(
            WdfDriverGlobals,
            v20,
            &v21,
            &v19);
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v19);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
        2u,
        2u,
        0x4Cu,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v18);
    }
  }
  if ( a2 == 6 )
  {
    HUBSM_AddEvent(v5 + 504, 4079);
  }
  else
  {
    if ( a2 == 4 )
    {
      if ( (*(_DWORD *)(v4 + 32) & 4) != 0 )
      {
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64))(WdfFunctions_01015 + 688))(
                WdfDriverGlobals,
                a1,
                3221226195LL);
        if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v18) = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            3u,
            5u,
            0x4Du,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
            v18);
        }
        _InterlockedAnd((volatile signed __int32 *)(v4 + 32), 0xFFFFFFFB);
      }
      if ( (*(_DWORD *)(v5 + 1632) & 0x4000) == 0 )
        HUBIDLE_AddEvent(v4 + 72, 6008LL, 0LL);
    }
    HUBSM_AddEvent(v5 + 504, 4071);
  }
  HUBMISC_WaitForSignal((PVOID)(v5 + 1584));
LABEL_26:
  LOBYTE(v7) = 1;
  v12 = *(_DWORD *)(v5 + 1576);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
         WdfDriverGlobals,
         *(_QWORD *)(v5 + 2416),
         v7) == 1 )
    WMI_FireNotification(*(_QWORD *)v5, *(unsigned __int16 *)(*(_QWORD *)(v5 + 8) + 200LL), 1LL);
  v13 = *(_QWORD *)(v4 + 392);
  if ( v13 )
    SleepstudyHelper_ComponentInactive();
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 204LL) & 0x800) != 0 )
  {
    if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( ((*(_DWORD *)(v5 + 2724) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_40;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v15 = 78;
    }
    else
    {
      if ( (*(_DWORD *)(v5 + 1636) & 0x200000) != 0 )
        goto LABEL_40;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v15 = 79;
    }
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
      v14,
      5,
      v15,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
LABEL_39:
    PoFxIdleComponent(*(_QWORD *)(*(_QWORD *)v5 + 2616LL), 0LL, 2LL);
  }
LABEL_40:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v18) = v8;
    LODWORD(v17) = v12;
    McTemplateK0pqq_EtwWriteTransfer(
      v13,
      &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_COMPLETE,
      &v26,
      *(_QWORD *)(v5 + 24),
      v17,
      v18);
  }
  _InterlockedAnd((volatile signed __int32 *)(v5 + 1636), 0xFFFFFF7F);
  return v12;
}
