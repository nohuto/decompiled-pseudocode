/*
 * XREFs of Controller_CheckHealth @ 0x14000957C
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x14000A670 (Controller_WdfEvtWatchdogTimerFunc.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     RootHub_DetectLinkErrorState @ 0x14000A288 (RootHub_DetectLinkErrorState.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x14003C470 (Controller_SetControllerGone.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x14004F318 (Etw_ReportControllerHealthWithPortInfo.c)
 */

char __fastcall Controller_CheckHealth(__int64 a1, char a2)
{
  int Ulong; // eax
  __int64 v5; // rdx
  char v6; // bl
  int v8; // r8d

  Ulong = XilRegister_ReadUlong(*(_QWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) + 4LL);
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v5, 4, 290, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    LOBYTE(v5) = 1;
    Controller_SetControllerGone(a1, v5);
    return 0;
  }
  if ( (Ulong & 4) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 1;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v5,
        4,
        291,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
        Ulong);
    }
    v6 = 0;
    Controller_HwVerifierBreakIfEnabled(a1, 0, 0, 2, (__int64)"Controller reported Host System Error", 0LL, 0LL);
    v8 = 4097;
    goto LABEL_14;
  }
  if ( (Ulong & 0x1000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 1;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v5,
        4,
        292,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
        Ulong);
    }
    v6 = 0;
    Controller_HwVerifierBreakIfEnabled(a1, 0, 0, 4, (__int64)"Controller reported Host Controller Error", 0LL, 0LL);
    v8 = 4098;
LABEL_14:
    Controller_ReportFatalError(a1, 2, v8, 0, 0LL, 0LL, 0LL);
    return v6;
  }
  RootHub_DetectLinkErrorState(*(_QWORD *)(a1 + 152));
  if ( a2 && *(_BYTE *)(a1 + 872) )
  {
    Etw_ReportControllerHealthWithPortInfo(a1, 0LL, 0LL, 0LL);
    ++*(_DWORD *)(a1 + 964);
    *(_BYTE *)(a1 + 872) = 0;
  }
  return 1;
}
