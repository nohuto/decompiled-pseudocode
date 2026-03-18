/*
 * XREFs of ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1401CB20C
 * Callers:
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1401CAEC8 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1401CB0A8 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1402C327C (-OnRapidHpdTimeout@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1400681E8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?StartDesktopRecalc@DesktopRecalc@InputTraceLogging@@SAXIW4InputTracing_DesktopRecalcInitReason@@@Z @ 0x1401CB6DC (-StartDesktopRecalc@DesktopRecalc@InputTraceLogging@@SAXIW4InputTracing_DesktopRecalcInitReason@.c)
 *     ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x1401CB768 (-RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?TraceLoggingStartingRecalc@@YAXHIIIPEBU_GUID@@HH@Z @ 0x1401CB878 (-TraceLoggingStartingRecalc@@YAXHIIIPEBU_GUID@@HH@Z.c)
 *     ?LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ @ 0x1401CBA98 (-LogComparisonToCurrent@CMonitorTopology@@QEBAXXZ.c)
 *     ?MinimizeSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x1401CBD00 (-MinimizeSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x1401CC140 (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReas.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1401CC868 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     ?SessionDisconnectEvent@DesktopRecalc@InputTraceLogging@@SAXIH@Z @ 0x1402204E8 (-SessionDisconnectEvent@DesktopRecalc@InputTraceLogging@@SAXIH@Z.c)
 */

void __fastcall DesktopRecalc::StartRecalc(
        DesktopRecalc *this,
        struct tagWINDOWSTATION *a2,
        const struct _GUID *a3,
        const struct _GUID *a4)
{
  struct tagWINDOWSTATION *v4; // rbp
  unsigned int v5; // r12d
  __int64 UserSessionState; // rsi
  int IsDisconnectConnection; // eax
  __int64 v8; // rdx
  char v9; // di
  unsigned int v10; // r12d
  bool v11; // si
  bool v12; // bp
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  bool v16; // si
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  bool v20; // bp
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  bool v25; // si
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  bool v31; // si
  int v32; // ebx
  __int64 v33; // rax
  DesktopRecalc *v34; // r14
  int v35; // r8d
  int v36; // edx
  __int64 v37; // r9
  const char *v38; // rax
  __int64 i; // rbx
  struct tagTHREADINFO *v40; // rax
  int v41; // edi
  DesktopRecalcSettings *v42; // rcx
  int v43; // ebx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // [rsp+20h] [rbp-78h]
  int v48; // [rsp+28h] [rbp-70h]
  int v49; // [rsp+30h] [rbp-68h]
  __int16 v50; // [rsp+30h] [rbp-68h]
  int v51; // [rsp+38h] [rbp-60h]
  bool v52; // [rsp+50h] [rbp-48h]
  unsigned int v53; // [rsp+54h] [rbp-44h]
  unsigned int v54; // [rsp+54h] [rbp-44h]
  char v57; // [rsp+B8h] [rbp+20h]
  bool v58; // [rsp+B8h] [rbp+20h]

  v57 = 0;
  v4 = a2;
  v5 = this != 0LL ? 2 : 0;
  UserSessionState = W32GetUserSessionState(this, a2);
  IsDisconnectConnection = UserIsDisconnectConnection();
  v8 = *(_QWORD *)(UserSessionState + 71488);
  v9 = 1;
  if ( IsDisconnectConnection )
  {
    if ( !v8 )
    {
      *(_QWORD *)(UserSessionState + 71488) = v4;
      _InterlockedAdd((volatile signed __int32 *)v4, 1u);
      v10 = *(_DWORD *)(*(_QWORD *)(UserSessionState + 71488) + 12LL);
      v11 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v15,
          v14,
          *(_QWORD *)(v13 + 69416),
          4,
          7,
          144,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v10);
      }
      InputTraceLogging::DesktopRecalc::SessionDisconnectEvent(v10, 1);
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v9 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v18,
        *(_QWORD *)(v17 + 69416),
        4,
        7,
        145,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
    return;
  }
  if ( v8 )
  {
    v53 = *(_DWORD *)(v8 + 12);
    v20 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v58;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v23,
        *(_QWORD *)(v21 + 69416),
        4,
        7,
        146,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v53);
    }
    InputTraceLogging::DesktopRecalc::SessionDisconnectEvent(v53, 0);
    v4 = *(struct tagWINDOWSTATION **)(UserSessionState + 71488);
    *(_QWORD *)(UserSessionState + 71488) = 0LL;
    v57 = 1;
    if ( *(_BYTE *)(UserSessionState + 71536) )
    {
      v5 = 1;
      v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_46;
      v28 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24) + 69416);
      v50 = 147;
    }
    else
    {
      v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_46;
      v28 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24) + 69416);
      v50 = 148;
    }
    LOBYTE(v26) = v25;
    LOBYTE(v27) = v52;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v26,
      v27,
      v28,
      4,
      7,
      v50,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
LABEL_46:
  v54 = CMonitorTopology::CompareToCurrent((__int64)v4, 0LL);
  CMonitorTopology::LogComparisonToCurrent(v4);
  v30 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v29 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v29 & 0x40) == 0)
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v9 = 0;
  }
  v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v9 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
  {
    v34 = this;
  }
  else
  {
    v32 = *((_DWORD *)v4 + 3);
    v33 = W32GetUserSessionState(v29, *(_QWORD *)&WPP_GLOBAL_Control);
    v34 = this;
    LOBYTE(v35) = v31;
    LOBYTE(v36) = v9;
    v37 = *(_QWORD *)(v33 + 69416);
    v38 = "for mode change";
    if ( !this )
      v38 = "for SPI_SETWORKAREA";
    WPP_RECORDER_AND_TRACE_SF_sd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v36,
      v35,
      v37,
      v47,
      v48,
      v49,
      v51,
      (__int64)v38,
      v32);
  }
  if ( v34 )
  {
    for ( i = *((_QWORD *)v34 + 2); i; i = *(_QWORD *)(i + 32) )
      DesktopRecalc::StartRecalcForDesktop(i, v4, v5);
  }
  else
  {
    v40 = PtiCurrent(v29, v30);
    DesktopRecalc::StartRecalcForDesktop(*((_QWORD *)v40 + 62), v4, v5);
  }
  v41 = DesktopRecalcSettings::RestoreStateSettingEnabled((DesktopRecalcSettings *)v29);
  v43 = DesktopRecalcSettings::MinimizeSettingEnabled(v42);
  v46 = W32GetUserSessionState(v45, v44);
  TraceLoggingStartingRecalc(v34 == 0LL, v54, *((_DWORD *)v4 + 1), ***(_DWORD ***)(v46 + 57008), a3, v43, v41);
  InputTraceLogging::DesktopRecalc::StartDesktopRecalc(*((unsigned int *)v4 + 3), v34 == 0LL);
  if ( v57 )
    CMonitorTopology::Release(v4);
}
