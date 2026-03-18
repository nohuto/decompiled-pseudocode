/*
 * XREFs of HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1400255B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x140030D30 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSContainerIdDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rdx
  int v6; // edx
  __int64 v7; // rcx
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_14006C1E8);
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL);
  if ( *(_DWORD *)(v1 + 256) == 24 )
  {
    if ( *(_QWORD *)(v1 + 1740) != *(_QWORD *)&GUID_NULL.Data1 || *(_QWORD *)(v1 + 1748) != *(_QWORD *)GUID_NULL.Data4 )
    {
      *(_OWORD *)(v1 + 2064) = *(_OWORD *)(v1 + 1740);
      _InterlockedOr((volatile signed __int32 *)(v1 + 1632), 8u);
      return v2;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(v4, v3, 5, 269, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    }
    v5 = 114LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 24;
      v9 = *(_DWORD *)(v1 + 256);
      WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x10Cu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v9, v10);
    }
    v5 = 117LL;
  }
  HUBMISC_LogDescriptorValidationErrorForDevice(v1, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(v4, v6, 5, 270, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  v2 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      v7,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_CONTAINER_ID_DESCRIPTOR,
      (const GUID *)(v1 + 1516),
      *(_QWORD *)(v1 + 24));
  return v2;
}
