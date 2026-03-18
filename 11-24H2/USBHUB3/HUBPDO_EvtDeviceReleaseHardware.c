/*
 * XREFs of HUBPDO_EvtDeviceReleaseHardware @ 0x140082700
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddDsmEvent @ 0x14000A820 (HUBSM_AddDsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1400341C8 (HUBMISC_WaitForSignal.c)
 *     SleepstudyHelper_UnregisterComponent @ 0x1400458F0 (SleepstudyHelper_UnregisterComponent.c)
 *     DereferenceDeviceResetInterface @ 0x140045978 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     HUBREG_DeleteUxdSettings @ 0x140086AC0 (HUBREG_DeleteUxdSettings.c)
 *     HUBWNF_PublishUsbPartnerDualRoleFeatures @ 0x14008FCA4 (HUBWNF_PublishUsbPartnerDualRoleFeatures.c)
 *     TUNNEL_ReleaseUsb4HostPowerReferenceForPort @ 0x1400927A0 (TUNNEL_ReleaseUsb4HostPowerReferenceForPort.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceReleaseHardware(const void *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-48h]
  _BYTE v15[8]; // [rsp+30h] [rbp-38h] BYREF
  GUID v16; // [rsp+38h] [rbp-30h] BYREF

  v16 = 0LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, const void *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  v3 = *(_QWORD *)(v2 + 24);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006C1E8)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v3 + 2184)) >= 0 )
  {
    v16 = *(GUID *)(v3 + 2184);
    _InterlockedOr((volatile signed __int32 *)(v3 + 1644), 0x80u);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_DEVICE_RELEASE_HARDWARE_START, &v16, *(_QWORD *)(v3 + 24));
  v5 = *(void **)(v2 + 392);
  if ( v5 )
  {
    SleepstudyHelper_UnregisterComponent(v5);
    *(_QWORD *)(v2 + 392) = 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, const void *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  *(_BYTE *)v6 = 1;
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1644), 0xFFFFBFFF);
  v15[0] = 0;
  v7 = *(_QWORD *)v3;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v8,
    "ControllerPowerReference Tag",
    94LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  (*(void (__fastcall **)(_QWORD, _BYTE *))(v7 + 568))(*(_QWORD *)(v7 + 248), v15);
  KeClearEvent((PRKEVENT)(v3 + 1592));
  HUBSM_AddDsmEvent(v3, 4099LL);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1592), "Device PDORemoved", a1);
  v9 = *(_QWORD *)v3;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v3 + 576LL))(*(_QWORD *)(*(_QWORD *)v3 + 248LL), v15);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v9);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v10,
    "ControllerPowerReference Tag",
    130LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\ucx.h");
  v12 = *(_DWORD *)(v6 + 32);
  if ( (v12 & 0x400) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 32), 0xFFFFFBFF);
  }
  else
  {
    if ( (v12 & 0x800) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v6 + 32), 0xFFFFF7FF);
      HUBREG_DeleteUxdSettings(*(_QWORD *)(v6 + 24), 1LL);
    }
    if ( (*(_DWORD *)(v3 + 1640) & 0x40000) != 0 )
    {
      HUBWNF_PublishUsbPartnerDualRoleFeatures(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 1416LL), 0LL, 0LL);
      _InterlockedAnd((volatile signed __int32 *)(v3 + 1640), 0xFFFBFFFF);
    }
    if ( (*(_DWORD *)(v3 + 1652) & 0x4000000) != 0 )
      DereferenceDeviceResetInterface((_QWORD *)(v6 + 456));
    v11 = *(_QWORD *)(v3 + 8);
    if ( _bittest((const signed __int32 *)(v11 + 204), 0xBu) && ((*(_DWORD *)(v3 + 2732) - 2) & 0xFFFFFFFD) == 0 )
      TUNNEL_ReleaseUsb4HostPowerReferenceForPort();
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v14) = 0;
    McTemplateK0pq_EtwWriteTransfer(
      v11,
      &USBHUB3_ETW_EVENT_DEVICE_RELEASE_HARDWARE_COMPLETE,
      &v16,
      *(_QWORD *)(v3 + 24),
      v14);
  }
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1644), 0xFFFFFF7F);
  return 0LL;
}
