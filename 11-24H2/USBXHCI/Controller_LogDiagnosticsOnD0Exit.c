/*
 * XREFs of Controller_LogDiagnosticsOnD0Exit @ 0x1400410B4
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1400379B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     WPP_RECORDER_SF_qLLL @ 0x140008454 (WPP_RECORDER_SF_qLLL.c)
 *     Controller_GetPreProcessedSystemPowerAction @ 0x1400400E0 (Controller_GetPreProcessedSystemPowerAction.c)
 *     Feature_UPD0__private_IsEnabledDeviceUsageNoInline @ 0x140043EFC (Feature_UPD0__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqqhq_EtwWriteTransfer @ 0x140044174 (McTemplateK0pqqhq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLDD @ 0x140044DBC (WPP_RECORDER_SF_qLDD.c)
 *     WPP_RECORDER_SF_qLss @ 0x140044ED0 (WPP_RECORDER_SF_qLss.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140056D58 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

char __fastcall Controller_LogDiagnosticsOnD0Exit(__int64 a1, int a2)
{
  __int64 (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, void *); // rax
  __int64 v5; // r15
  __int64 v6; // rbx
  int v7; // edi
  char PreProcessedSystemPowerAction; // al
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // rdx
  __m128i *p_si128; // rax
  unsigned int v14; // eax
  int v15; // r8d
  int v16; // r9d
  char v17; // dl
  unsigned int v18; // edi
  unsigned int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  bool v22; // si
  const char *v23; // r9
  int v25; // [rsp+20h] [rbp-78h]
  __m128i si128; // [rsp+50h] [rbp-48h] BYREF
  int v27; // [rsp+60h] [rbp-38h]

  v4 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v27 = 33570;
  v5 = v4(WdfDriverGlobals, a1, off_14006B240);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3104))(WdfDriverGlobals, a1);
  PreProcessedSystemPowerAction = Controller_GetPreProcessedSystemPowerAction(v6);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
    McTemplateK0pqqhq_EtwWriteTransfer(
      *(unsigned __int8 *)(v6 + 868),
      (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_D0_EXIT_START_V1,
      v10,
      *(_QWORD *)(v6 + 8),
      a2,
      v7,
      *(_BYTE *)(v6 + 868),
      PreProcessedSystemPowerAction);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLL(*(_QWORD *)(v6 + 72), v9, 4u, 0x56u, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  if ( !v7 )
  {
    v11 = *(unsigned int *)(v6 + 820);
    if ( (_DWORD)v11 != 7 )
    {
      if ( (_DWORD)v11 )
      {
        if ( *(_DWORD *)(v6 + 644) == 1 )
          v12 = *(unsigned __int16 *)(v6 + 652) | (*(unsigned __int16 *)(v6 + 648) << 16);
        else
          v12 = 0LL;
        MicrosoftTelemetryAssertTriggeredArgsMsgKM(
          "USBXHCI.SYS",
          v12,
          v11,
          "D0 Exit - WDF and Pre Processed System Power Action are different");
      }
    }
  }
  LODWORD(p_si128) = Feature_UPD0__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)p_si128 )
  {
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 352))(WdfDriverGlobals, a1);
    v17 = 0;
    v18 = v14;
    v19 = 0;
    p_si128 = &si128;
    while ( v18 != p_si128->m128i_i32[0] )
    {
      ++v19;
      p_si128 = (__m128i *)((char *)p_si128 + 4);
      if ( v19 >= 5 )
        goto LABEL_18;
    }
    v17 = 1;
LABEL_18:
    if ( a2 == 5 && !v17 )
    {
      v20 = *(_DWORD *)(v6 + 644);
      v21 = 0LL;
      if ( v20 == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLDD(
            *(_QWORD *)(v6 + 72),
            0,
            v15,
            v16,
            v25,
            a1,
            v18,
            *(_WORD *)(v6 + 648),
            *(_WORD *)(v6 + 652));
        v21 = *(unsigned __int16 *)(v6 + 652) | (*(unsigned __int16 *)(v6 + 648) << 16);
      }
      else if ( v20 == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLss(*(_QWORD *)(v6 + 72), 0, v15, v16, v25, a1, v18, v6 + 704, v6 + 709);
        v21 = 0LL;
      }
      v22 = (*(_BYTE *)(v5 + 28) & 0x10) != 0;
      v23 = "D0 Exit - Exit to D3Final from a non-success state for external XHCI";
      if ( !v22 )
        v23 = "D0 Exit - Exit to D3Final from a non-success state for internal XHCI";
      LOBYTE(p_si128) = MicrosoftTelemetryAssertTriggeredArgsMsgKM("USBXHCI.SYS", v21, v18, v23);
      if ( (v18 == 823 || v18 == 33592) && !v22 )
        LOBYTE(p_si128) = Controller_HwVerifierBreakIfEnabled(
                            v6,
                            0,
                            0,
                            0x8000000LL,
                            "D0 Exit - Exit to D3Final due to failure to connect interrupts for internal XHCI",
                            0LL,
                            0LL);
    }
  }
  return (char)p_si128;
}
