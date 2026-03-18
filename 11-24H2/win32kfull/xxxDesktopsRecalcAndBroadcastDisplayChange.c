/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x140226CB0
 * Callers:
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x140226BB0 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 * Callees:
 *     SelectWindowRgn @ 0x140030A9C (SelectWindowRgn.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x140116AE0 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1401CAEC8 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x14020A840 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        struct tagWINDOWSTATION *a2,
        __int16 a3,
        unsigned int a4,
        _DWORD *a5,
        struct CMonitorTopology *a6)
{
  char WorkAreasFromShell; // r14
  BOOL v11; // ebp
  struct _DXGK_SET_DISPLAY_CONFIG_PARAMS_EX *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // bl
  bool v16; // di
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  struct tagWND *i; // rbx
  __int64 v21; // rdx
  __int16 v22; // r8
  bool v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  _BYTE v28[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v29; // [rsp+48h] [rbp-30h]

  v28[0] = 0;
  WorkAreasFromShell = xxxGetWorkAreasFromShell(a1, (__int64)a2);
  v11 = a2 != 0LL;
  v29 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v28);
  if ( a2 )
  {
    DesktopRecalc::OnMonitorRectsChanged(*(DesktopRecalc **)(a1 + 40), a2, a6, v12);
  }
  else
  {
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v28);
    v15 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v18,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        7,
        10,
        (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
    }
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    for ( i = *(struct tagWND **)(v14 + 112); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 21LL) & 8) != 0 )
        SelectWindowRgn(i, 2LL, 0);
    }
  }
  v22 = *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928) + 6996LL);
  if ( (*a5 & 4) == 0 || (*a5 & 1) == 0 )
    xxxBroadcastDisplaySettingsChange(a1, v22 != a3, v11, a4);
  if ( WorkAreasFromShell )
  {
    v23 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v23;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(v25 + 69416),
        4,
        7,
        11,
        (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
    }
    xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x2FuLL, 0LL, 1);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v28);
}
