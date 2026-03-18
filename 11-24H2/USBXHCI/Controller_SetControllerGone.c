/*
 * XREFs of Controller_SetControllerGone @ 0x14003C400
 * Callers:
 *     Controller_CheckHealth @ 0x14000CDC4 (Controller_CheckHealth.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x140024160 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400251A0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140026440 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1400277B0 (RootHub_UcxEvtClearPortFeature.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003D690 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_DisableController @ 0x14003FE84 (Controller_DisableController.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_SetControllerGone(__int64 a1, char a2)
{
  int v4; // esi
  int v5; // edx
  int v6; // edi
  int v7; // r8d

  v4 = 16;
  v6 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     *(_QWORD *)a1,
                     off_14006B240)
                 + 28) & 0x10;
  if ( a2 && !*(_BYTE *)(a1 + 797) )
  {
    if ( v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v5, 4, 219, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v5, 4, 218, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
      Controller_HwVerifierBreakIfEnabled(
        a1,
        0,
        0,
        64LL,
        "A register read returned all FFs. Controller is considered physically removed",
        0LL,
        0LL);
    }
  }
  *(_BYTE *)(a1 + 797) = 1;
  if ( a2 )
  {
    v7 = 0;
  }
  else
  {
    v4 = 8;
    v7 = v6 == 0 ? 0x100D : 0;
  }
  return Controller_ReportFatalError(a1, v4, v7, 0, 0LL, 0LL, 0LL);
}
