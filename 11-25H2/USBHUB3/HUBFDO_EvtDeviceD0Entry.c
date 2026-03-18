/*
 * XREFs of HUBFDO_EvtDeviceD0Entry @ 0x14000D440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14000F664 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x140033EF8 (HUBMISC_WaitForSignal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140042720 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     SleepstudyHelper_ComponentActive @ 0x140044F44 (SleepstudyHelper_ComponentActive.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  PVOID *Handle; // rbx
  struct _DEVICE_OBJECT *v5; // rax
  NTSTATUS v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // rax
  NTSTATUS v10; // eax
  struct _DEVICE_OBJECT *v11; // rax
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebx
  char v14; // bp
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  void *v19; // rbx
  int v20; // edx
  __int64 v22; // [rsp+28h] [rbp-30h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C198);
  v3 = v2;
  *(_DWORD *)(v2 + 2608) = 1;
  _InterlockedOr((volatile signed __int32 *)(v2 + 40), 0x20000u);
  if ( (*(_DWORD *)(v2 + 44) & 0x10) != 0 && !*(_BYTE *)(v2 + 240) && (*(_DWORD *)(v2 + 40) & 0x4000000) != 0 )
  {
    Handle = (PVOID *)(v2 + 2648);
    if ( !*(_QWORD *)(v2 + 2648) )
    {
      v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                      WdfDriverGlobals,
                                      a1);
      v6 = PoRegisterPowerSettingCallback(
             v5,
             &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
             HUBFDO_IdleResiliencyCallback,
             (PVOID)v3,
             Handle);
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               a1,
               0LL,
               HUBFDO_IdleResiliencyCallback,
               1857,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( v7 < 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsMsgKM(v8, (unsigned int)v7, 0LL, "WdfDeviceStopIdle failed");
          PoUnregisterPowerSettingCallback(*Handle);
          *Handle = 0LL;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 2528),
          2u,
          3u,
          0x31u,
          (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
          v6);
      }
    }
  }
  if ( (!*(_BYTE *)(v3 + 240) || (*(_DWORD *)(v3 + 44) & 0x100) != 0) && !*(_QWORD *)(v3 + 2776) )
  {
    v9 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                    WdfDriverGlobals,
                                    a1);
    v10 = PoRegisterPowerSettingCallback(
            v9,
            &GUID_LOW_POWER_EPOCH,
            HUBFDO_LowPowerEpochCallback,
            (PVOID)v3,
            (PVOID *)(v3 + 2776));
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2528),
        2u,
        3u,
        0x32u,
        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
        v22);
    }
  }
  if ( !*(_QWORD *)(v3 + 2568) && (*(_DWORD *)(v3 + 40) & 0x4000000) != 0 )
  {
    v11 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                     WdfDriverGlobals,
                                     a1);
    v12 = PoRegisterPowerSettingCallback(
            v11,
            &GUID_USB_SETTING_SELECTIVE_SUSPEND,
            HUBFDO_PowerSettingCallback,
            (PVOID)v3,
            (PVOID *)(v3 + 2568));
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 2528),
          2u,
          3u,
          0x33u,
          (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
          v22);
      }
      *(_QWORD *)(v3 + 2568) = 0LL;
    }
  }
  v13 = 0;
  v14 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v13 = EtwActivityIdControl(3u, (LPGUID)(v3 + 2284));
    if ( v13 >= 0 )
    {
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v3 + 824), v3 + 2284);
      v14 = 1;
    }
  }
  if ( (*(_DWORD *)(v3 + 40) & 0x80u) != 0 && *(_QWORD *)(v3 + 2624) )
    SleepstudyHelper_ComponentActive();
  if ( (*(_DWORD *)(v3 + 44) & 1) != 0 && *(_QWORD *)(v3 + 2632) )
    SleepstudyHelper_ComponentActive();
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v16 = v15;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v17 = *(_DWORD *)(v3 + 40) >> 10;
    LOWORD(v17) = (*(_DWORD *)(v3 + 40) & 0x400) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v17,
      (unsigned int)&USBHUB3_ETW_EVENT_HUB_D0_ENTRY_START,
      v3 + 2284,
      *(_QWORD *)(v3 + 248),
      1,
      v15,
      (*(_DWORD *)(v3 + 40) & 0x400) != 0);
  }
  if ( !v16 )
  {
    v19 = (void *)(v3 + 1160);
    KeResetEvent((PRKEVENT)(v3 + 1160));
    v20 = 2007;
    goto LABEL_42;
  }
  if ( v16 == 2 || v16 == 3 || v16 == 4 || (v18 = v16 - 5, (unsigned int)(v16 - 5) <= 1) )
  {
    v19 = (void *)(v3 + 1160);
    KeResetEvent((PRKEVENT)(v3 + 1160));
    v20 = 2011;
LABEL_42:
    HUBSM_AddEvent(v3 + 1272, v20);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    HUBMISC_WaitForSignal(v19);
    v13 = *(_DWORD *)(v3 + 1184);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      v18,
      (unsigned int)&USBHUB3_ETW_EVENT_HUB_D0_ENTRY_COMPLETE,
      v3 + 2284,
      *(_QWORD *)(v3 + 248),
      v13,
      v16);
  if ( v14 == 1 )
    *(_OWORD *)(v3 + 2284) = 0LL;
  return (unsigned int)v13;
}
