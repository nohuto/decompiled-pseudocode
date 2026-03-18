/*
 * XREFs of _InitPwSB @ 0x1402E8494
 * Callers:
 *     xxxSetScrollBar @ 0x140032F08 (xxxSetScrollBar.c)
 *     xxxShowScrollBar @ 0x1401C8C38 (xxxShowScrollBar.c)
 *     xxxEnableWndSBArrows @ 0x1401E1A30 (xxxEnableWndSBArrows.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     CalcSBStuff @ 0x140258028 (CalcSBStuff.c)
 * Callees:
 *     DesktopAlloc @ 0x140072EC0 (DesktopAlloc.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x14019AC0C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1401DF350 (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetFnidString @ 0x1402E8240 (GetFnidString.c)
 */

__int64 __fastcall InitPwSB(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 result; // rax
  char v7; // bp
  bool v8; // r15
  const char *FnidString; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rax

  v4 = a1 + 19;
  result = a1[19];
  if ( !result )
  {
    if ( (*(_WORD *)(a1[5] + 42) & 0x2FFF) == 0x29C )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 168);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      FnidString = GetFnidString(*(_WORD *)(a1[5] + 42) & 0x2FFF);
      v10 = *a1;
      v11 = (__int64)FnidString;
      UserSessionState = W32GetUserSessionState(v13, v12);
      LOBYTE(v15) = v8;
      LOBYTE(v16) = v7;
      WPP_RECORDER_AND_TRACE_SF_qs(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        9,
        10,
        (__int64)&WPP_9685cddcfa24367d578f5bca680f2487_Traceguids,
        v10,
        v11);
    }
    v17 = DesktopAlloc(a1[3], 36LL, 6LL, a4);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(v4, v17);
    if ( *v4 )
    {
      *(_DWORD *)(*v4 + 24LL) = 100;
      *(_DWORD *)(*v4 + 8LL) = 100;
    }
    return *v4;
  }
  return result;
}
