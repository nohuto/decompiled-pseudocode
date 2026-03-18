/*
 * XREFs of ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x140162268
 * Callers:
 *     ?ComputeDominantState@tagWND@@QEAAXXZ @ 0x140161EC0 (-ComputeDominantState@tagWND@@QEAAXXZ.c)
 *     ?DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A4BB8 (-DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 *     ?DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A4FD0 (-DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A56D0 (-ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x1401A5878 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 */

void __fastcall tagPROCESSINFO::OnDwsChanged(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v6; // ebp
  char v7; // r14
  __int16 v8; // ax
  __int16 v9; // ax
  int v10; // ecx
  unsigned __int64 v11; // rax
  _WORD *v12; // rdx
  bool v13; // r15
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rcx

  v3 = a3;
  v4 = a2;
  if ( a2 == a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 241LL);
  if ( (int)v4 < *(_DWORD *)(a1 + 1172) )
    goto LABEL_30;
  v6 = 5;
  v7 = 1;
  if ( (_DWORD)v4 != 5 )
  {
    v8 = *(_WORD *)(a1 + 2 * v4 + 1160);
    if ( !v8 )
      goto LABEL_30;
    *(_WORD *)(a1 + 2 * v4 + 1160) = v8 - 1;
  }
  if ( (_DWORD)v3 == 5 )
    goto LABEL_10;
  v9 = *(_WORD *)(a1 + 2 * v3 + 1160);
  if ( v9 == -2 )
LABEL_30:
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  *(_WORD *)(a1 + 2 * v3 + 1160) = v9 + 1;
LABEL_10:
  v10 = *(_DWORD *)(a1 + 1172);
  if ( (int)v4 <= v10 && ((_DWORD)v4 != v10 || !*(_WORD *)(a1 + 2 * v4 + 1160)) || (int)v3 < v10 )
  {
    v11 = 0LL;
    v12 = (_WORD *)(a1 + 1160);
    while ( !*v12 )
    {
      ++v11;
      ++v12;
      if ( v11 >= 5 )
        goto LABEL_19;
    }
    v6 = v11;
LABEL_19:
    if ( v6 == v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 290LL);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v7 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v7;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69400));
    }
    v17 = *(_QWORD *)(a1 + 1216);
    *(_DWORD *)(a1 + 1172) = v6;
    CQoSReport::ReportProcess(*(CQoSReport **)(v17 + 41368), (struct tagPROCESSINFO *)a1);
  }
}
