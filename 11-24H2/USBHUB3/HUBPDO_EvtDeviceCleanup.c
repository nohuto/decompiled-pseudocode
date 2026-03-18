/*
 * XREFs of HUBPDO_EvtDeviceCleanup @ 0x1400154D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1400341C8 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x140040318 (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     HUBPDO_BillboardCleanup @ 0x14007FE9C (HUBPDO_BillboardCleanup.c)
 */

void __fastcall HUBPDO_EvtDeviceCleanup(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  _QWORD *v3; // r14
  __int64 v4; // rbp
  NTSTATUS v5; // eax
  void *v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rax
  PVOID *v10; // rbx
  __int64 v11; // rsi
  NTSTATUS v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // rcx
  __int64 v20; // [rsp+28h] [rbp-30h]
  char v21; // [rsp+68h] [rbp+10h] BYREF
  __int64 v22; // [rsp+70h] [rbp+18h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  v3 = *(_QWORD **)(v2 + 24);
  v4 = v3[3];
  v22 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v1, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_START, 0LL, v4);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3[1] + 1432LL),
      2u,
      5u,
      0x5Du,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      v5);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", 0x20u);
  v6 = *(void **)(v2 + 408);
  if ( v6 )
  {
    PoUnregisterPowerSettingCallback(v6);
    *(_QWORD *)(v2 + 408) = 0LL;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v7,
      "DRIPS SR Tag",
      6778LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  v8 = *(void **)(v2 + 416);
  if ( v8 )
  {
    PoUnregisterPowerSettingCallback(v8);
    *(_QWORD *)(v2 + 416) = 0LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v9,
      "DRIPS IO Tag",
      6785LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  v10 = (PVOID *)(v2 + 272);
  v11 = 5LL;
  do
  {
    if ( *v10 )
    {
      v12 = PoUnregisterPowerSettingCallback(*v10);
      if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v20) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL),
          2u,
          5u,
          0x5Cu,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
          v20);
      }
      *v10 = 0LL;
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  v13 = v22;
  if ( (*(_DWORD *)(v2 + 32) & 0x1000) != 0 )
    HUBIDLE_AddEvent(v2 + 72, 6006LL, 0LL);
  v21 = 0;
  v14 = *v3;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v15,
    "ControllerPowerReference Tag",
    94LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  (*(void (__fastcall **)(_QWORD, char *))(v14 + 568))(*(_QWORD *)(v14 + 248), &v21);
  KeClearEvent((PRKEVENT)(v3 + 199));
  HUBSM_AddEvent((__int64)(v3 + 64), 4063);
  HUBMISC_WaitForSignal(v3 + 199);
  HUBPDO_BillboardCleanup(v3);
  v16 = *v3;
  (*(void (__fastcall **)(_QWORD, char *))(*v3 + 576LL))(*(_QWORD *)(*v3 + 248LL), &v21);
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v16);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v17,
    "ControllerPowerReference Tag",
    130LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  v3[2] = 0LL;
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v18,
    "DSM PDO Tag",
    6845LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v19 = *(void **)(v2 + 56);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x64334855u);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)v19, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_COMPLETE, 0LL, v13);
}
