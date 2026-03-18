/*
 * XREFs of HUBMISC_LogResetTimeout @ 0x140030F9C
 * Callers:
 *     HUBDSM_LoggingResetTimeoutInResettingFor30 @ 0x140023340 (HUBDSM_LoggingResetTimeoutInResettingFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140033D80 (HUBMISC_VerifierDbgBreak.c)
 */

_UNKNOWN **__fastcall HUBMISC_LogResetTimeout(__int64 a1)
{
  _UNKNOWN **result; // rax
  _BYTE *v3; // rdx

  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer(
      a1,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RESET_TIMEOUT,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24));
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                            2,
                            5,
                            119,
                            (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids);
  v3 = *(_BYTE **)(a1 + 8);
  *(_DWORD *)(a1 + 2432) = 1073807362;
  if ( (v3[184] & 1) != 0 )
  {
    result = *(_UNKNOWN ***)v3;
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 2600LL) & 0x40) != 0 )
      return (_UNKNOWN **)HUBMISC_VerifierDbgBreak("HubHwVerifierPortResetTimeout", v3 + 272);
  }
  return result;
}
