/*
 * XREFs of HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x140031174
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003D548 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140034050 (HUBMISC_VerifierDbgBreak.c)
 */

int __fastcall HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode(__int64 a1)
{
  __int64 v2; // rcx
  _UNKNOWN **v3; // rax

  v2 = *(unsigned int *)(a1 + 1640);
  if ( (v2 & 0x800) != 0
    && (*(_DWORD *)(a1 + 1464) & 0x10000) != 0
    && (v2 & 2) == 0
    && (*(_DWORD *)(a1 + 1652) & 0x80000) == 0 )
  {
    v3 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LODWORD(v3) = WPP_RECORDER_SF_(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      2,
                      5,
                      43,
                      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
    if ( (*(_DWORD *)(a1 + 2444) & 0x800) != 0 )
      LODWORD(v3) = HUBMISC_VerifierDbgBreak("DeviceHwVerifierSuperSpeedDeviceWorkingAtLowerSpeed", a1 + 512);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
      LODWORD(v3) = McTemplateK0p_EtwWriteTransfer(
                      v2,
                      &USBHUB3_ETW_EVENT_SSDEVICE_CONNECTED_AT_LS,
                      (const GUID *)(a1 + 1524),
                      *(_QWORD *)(a1 + 24));
  }
  return (int)v3;
}
