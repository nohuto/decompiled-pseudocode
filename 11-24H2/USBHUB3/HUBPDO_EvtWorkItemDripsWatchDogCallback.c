/*
 * XREFs of HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x140082CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x14001CD70 (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDDLd @ 0x14001D67C (WPP_RECORDER_SF_DDDLd.c)
 *     WPP_RECORDER_SF_II @ 0x14001D8A0 (WPP_RECORDER_SF_II.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x140087C3C (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

void __fastcall HUBPDO_EvtWorkItemDripsWatchDogCallback(__int64 a1)
{
  unsigned __int8 v1; // bp
  _QWORD *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // eax
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // di
  NTSTATUS v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  NTSTATUS v19; // edx
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // r9
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rax
  PVOID *Handle; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  int v30; // [rsp+98h] [rbp+10h] BYREF
  PVOID v31; // [rsp+A0h] [rbp+18h] BYREF

  v31 = 0LL;
  v30 = 0;
  v1 = 1;
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_14006C1C0);
  v4 = *(_QWORD *)(*v2 + 64LL);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(unsigned int *)(v5 + 1640);
  if ( (v6 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *(_QWORD *)(v5 + 8);
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v7 + 1432), v5, 2, 173, (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
    }
    v8 = 1;
    goto LABEL_37;
  }
  v9 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v30, v5, v3);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
        3u,
        2u,
        0xAEu,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v9);
    v8 = 2;
    goto LABEL_37;
  }
  if ( v30 )
  {
    v6 = *(_QWORD *)(v4 + 24);
    if ( (*(_DWORD *)(v6 + 1652) & 0x800000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
          3,
          2,
          176,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
      v8 = 4;
      goto LABEL_37;
    }
    if ( !*(_QWORD *)(v6 + 24)
      || (v12 = MEMORY[0xFFFFF78000000014]
              - (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 592LL))(*(_QWORD *)(*(_QWORD *)v6 + 248LL)),
          v12 >= 300000000) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 1, 0) )
      {
        DbgkWerCaptureLiveKernelDump(L"UsbDripsBlockerSurpriseRemoval", 421LL, *v2, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v4);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(
          WdfDriverGlobals,
          v18,
          2LL);
        v8 = 12;
      }
      else
      {
        v19 = PoRegisterPowerSettingCallback(
                0LL,
                &GUID_LOW_POWER_EPOCH,
                (PPOWER_SETTING_CALLBACK)HUBPDO_ReEnumerationCallback,
                *(PVOID *)(v4 + 24),
                &v31);
        if ( v19 >= 0 )
        {
          *(_QWORD *)(v4 + 408) = v31;
          v20 = IoRequestDeviceRemovalForReset(*v2, 0LL);
          if ( v20 >= 0 )
          {
            v1 = 0;
            v8 = 0;
          }
          else
          {
            PoUnregisterPowerSettingCallback(*(PVOID *)(v4 + 408));
            *(_QWORD *)(v4 + 408) = 0LL;
            _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 0, 1);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
                2u,
                2u,
                0xB4u,
                (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
                v20);
            v8 = 8;
          }
        }
        else
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 400), 0, 1);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
              2u,
              2u,
              0xB3u,
              (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
              v19);
          v8 = 7;
        }
      }
      goto LABEL_37;
    }
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 404), 1, 0);
    if ( !v15 )
    {
      v16 = PoRegisterPowerSettingCallback(
              0LL,
              &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
              (PPOWER_SETTING_CALLBACK)HUBPDO_IdleResiliencyCallback,
              *(PVOID *)(v4 + 24),
              (PVOID *)(v4 + 416));
      if ( v16 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v4);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                  + 1640))(
          WdfDriverGlobals,
          v17,
          "DRIPS IO Tag",
          11963LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 404), 0, 1);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_25:
          v8 = v15 != 0 ? 11 : 5;
          goto LABEL_37;
        }
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0xB1u,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
          v16);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = v12;
      WPP_RECORDER_SF_II(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL), v11, v13, v14, (int)Handle);
    }
    goto LABEL_25;
  }
  v8 = 3;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_39;
  LOBYTE(v10) = 3;
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL) + 1432LL),
    v10,
    2,
    175,
    (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids);
LABEL_37:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = *(_QWORD *)(v4 + 24);
    LODWORD(v29) = *(unsigned __int16 *)(v21 + 2008);
    LODWORD(v28) = *(unsigned __int16 *)(v21 + 2006);
    LODWORD(v27) = *(unsigned __int16 *)(v21 + 2004);
    WPP_RECORDER_SF_DDDLd(
      *(_QWORD *)(*(_QWORD *)(v21 + 8) + 1432LL),
      v1,
      *(unsigned __int16 *)(v21 + 2008),
      *(unsigned __int16 *)(v21 + 2006),
      (int)Handle);
  }
LABEL_39:
  if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
  {
    v22 = *(_QWORD *)(v4 + 24);
    LOWORD(v29) = *(_WORD *)(v22 + 2008);
    LOWORD(v28) = *(_WORD *)(v22 + 2006);
    LOWORD(v27) = *(_WORD *)(v22 + 2004);
    LODWORD(Handle) = v8;
    McTemplateK0pqhhh_EtwWriteTransfer(
      v6,
      &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
      (const GUID *)(v22 + 1524),
      *(_QWORD *)(v22 + 24),
      Handle,
      v27,
      v28,
      v29);
  }
  if ( v8 != 1 )
  {
    if ( v8 == 12 )
    {
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
        goto LABEL_48;
      v23 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_INFO;
    }
    else
    {
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 8) == 0 )
        goto LABEL_48;
      v23 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE_PUBLISH_WARNING;
    }
    v24 = *(_QWORD *)(v4 + 24);
    LOWORD(v29) = *(_WORD *)(v24 + 2008);
    LOWORD(v28) = *(_WORD *)(v24 + 2006);
    LOWORD(v27) = *(_WORD *)(v24 + 2004);
    LODWORD(Handle) = v8;
    McTemplateK0pqhhh_EtwWriteTransfer(
      v6,
      v23,
      (const GUID *)(v24 + 1524),
      *(_QWORD *)(v24 + 24),
      Handle,
      v27,
      v28,
      v29);
  }
LABEL_48:
  if ( v1 )
  {
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v4);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v25,
      "DRIPS SR Tag",
      12101LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 424), "DRIPS SR Tag", 0x20u);
}
