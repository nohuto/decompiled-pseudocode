/*
 * XREFs of HUBPDO_EvtDeviceD0Exit @ 0x140015B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F63C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14000F6B4 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014AD8 (Feature_UH3WET__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBMISC_WaitForSignal @ 0x1400341C8 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x140040318 (HUBIDLE_AddEvent.c)
 *     SleepstudyHelper_ComponentInactive @ 0x14004580C (SleepstudyHelper_ComponentInactive.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     WMI_FireNotification @ 0x14008EA70 (WMI_FireNotification.c)
 *     WMI_FireNotificationOld @ 0x14008F14C (WMI_FireNotificationOld.c)
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
  int v13; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+28h] [rbp-59h]
  __int64 v19; // [rsp+30h] [rbp-51h]
  __int64 v20; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v21[3]; // [rsp+50h] [rbp-31h] BYREF
  __int128 v22; // [rsp+68h] [rbp-19h] BYREF
  __int64 v23; // [rsp+78h] [rbp-9h]
  __int64 v24; // [rsp+80h] [rbp-1h]
  __int128 v25; // [rsp+88h] [rbp+7h]
  __int64 v26; // [rsp+98h] [rbp+17h]
  GUID v27; // [rsp+A0h] [rbp+1Fh] BYREF

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  v5 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 384) = a2;
  v27 = 0LL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006C1E8)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v5 + 2184)) >= 0 )
  {
    v27 = *(GUID *)(v5 + 2184);
    _InterlockedOr((volatile signed __int32 *)(v5 + 1644), 0x80u);
  }
  KeClearEvent((PRKEVENT)(v5 + 1592));
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
      &v27,
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
  else if ( !v8 && (*(_DWORD *)(v5 + 1640) & 0x400) == 0 )
  {
    v20 = 0LL;
    DWORD1(v22) = 0;
    HIDWORD(v21[0]) = 0;
    _InterlockedOr((volatile signed __int32 *)(v5 + 1640), 0x400u);
    v26 = 0LL;
    v21[0] = 24LL;
    v23 = 0LL;
    v21[1] = HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended;
    v22 = 0LL;
    LODWORD(v22) = 56;
    v24 = 0x100000001LL;
    v25 = a1;
    v21[2] = 1LL;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int128 *, __int64 *))(WdfFunctions_01015 + 3032))(
            WdfDriverGlobals,
            v21,
            &v22,
            &v20);
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v20);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
        2u,
        2u,
        0x4Bu,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v19);
    }
  }
  if ( a2 == 6 )
  {
    HUBSM_AddEvent(v5 + 512, 4079);
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
          LODWORD(v19) = v11;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            3u,
            5u,
            0x4Cu,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            v19);
        }
        _InterlockedAnd((volatile signed __int32 *)(v4 + 32), 0xFFFFFFFB);
      }
      if ( (*(_DWORD *)(v5 + 1640) & 0x4000) == 0 )
        HUBIDLE_AddEvent(v4 + 72, 6008LL, 0LL);
    }
    HUBSM_AddEvent(v5 + 512, 4071);
  }
  HUBMISC_WaitForSignal((PVOID)(v5 + 1592));
LABEL_26:
  LOBYTE(v7) = 1;
  v12 = *(_DWORD *)(v5 + 1584);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
         WdfDriverGlobals,
         *(_QWORD *)(v5 + 2424),
         v7) == 1 )
  {
    IsEnabledDeviceUsageNoInline = Feature_UH3WET__private_IsEnabledDeviceUsageNoInline();
    v15 = *(_QWORD *)(v5 + 8);
    if ( IsEnabledDeviceUsageNoInline )
      WMI_FireNotification(v15, 1LL);
    else
      WMI_FireNotificationOld(*(_QWORD *)v5, *(unsigned __int16 *)(v15 + 200), 1LL);
  }
  if ( *(_QWORD *)(v4 + 392) )
    SleepstudyHelper_ComponentInactive();
  v16 = *(_QWORD *)(v5 + 8);
  if ( (*(_DWORD *)(v16 + 204) & 0x800) != 0 && ((*(_DWORD *)(v5 + 2732) - 2) & 0xFFFFFFFD) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v16 + 1432), v13, 5, 77, (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
    }
    PoFxIdleComponent(*(_QWORD *)(*(_QWORD *)v5 + 2624LL), 0LL, 2LL);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v19) = v8;
    LODWORD(v18) = v12;
    McTemplateK0pqq_EtwWriteTransfer(
      v16,
      &USBHUB3_ETW_EVENT_DEVICE_D0_EXIT_COMPLETE,
      &v27,
      *(_QWORD *)(v5 + 24),
      v18,
      v19);
  }
  _InterlockedAnd((volatile signed __int32 *)(v5 + 1644), 0xFFFFFF7F);
  return v12;
}
