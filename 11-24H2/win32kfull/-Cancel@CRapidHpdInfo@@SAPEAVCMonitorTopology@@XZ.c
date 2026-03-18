/*
 * XREFs of ?Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ @ 0x1401CB108
 * Callers:
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1401CAEC8 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1401CB0A8 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1401F2F30 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 */

struct CMonitorTopology *__fastcall CRapidHpdInfo::Cancel(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  char v5; // si
  bool v6; // bp
  int v7; // ebx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx

  v2 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(UserSessionState + 71504);
  if ( v4 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v5 = 0;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 12LL);
      v8 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
      LOBYTE(v9) = v6;
      LOBYTE(v10) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v10,
        v9,
        *(_QWORD *)(v8 + 69416),
        3,
        7,
        12,
        (__int64)&WPP_24961469f9f338f3d0acbcc72a179045_Traceguids,
        v7);
    }
    v2 = *(volatile signed __int32 **)(*(_QWORD *)(UserSessionState + 71504) + 40LL);
    _InterlockedIncrement(v2);
    CRapidHpdInfo::Delete(2LL);
  }
  return (struct CMonitorTopology *)v2;
}
