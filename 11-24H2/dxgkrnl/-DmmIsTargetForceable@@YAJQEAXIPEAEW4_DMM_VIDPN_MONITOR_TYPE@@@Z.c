/*
 * XREFs of ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402E2950
 * Callers:
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C3738 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401C6560 (DxgkHandleForceProjectionMonitor.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026B350 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D7CC (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273334 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x140402760 (_anonymous_namespace_--DetermineIfNeedToChangeActivity.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1402E2B94 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsTargetForceable(__int64 a1, unsigned int a2, unsigned __int8 *a3, int a4)
{
  __int64 v4; // r14
  __int64 v8; // rdi
  struct _KTHREAD **v9; // rdi
  struct _KTHREAD *v10; // rbx
  struct _KTHREAD *v11; // rcx
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rax
  __int64 result; // rax
  unsigned __int8 IsTargetForceable; // al

  v4 = a2;
  *a3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 7090;
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7096;
  }
  v8 = *(_QWORD *)(a1 + 3120);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 7101;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(struct _KTHREAD ***)(v8 + 104);
  if ( v9 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 5));
    _InterlockedIncrement((volatile signed __int32 *)v9[15] + 18);
    v10 = v9[15];
    v11 = (struct _KTHREAD *)*((_QWORD *)v10 + 3);
    if ( v11 == (struct _KTHREAD *)((char *)v10 + 24) || (v12 = (__int64)v11 - 8) == 0 )
    {
LABEL_13:
      if ( !v9[1] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      WdLogSingleEntry2(3LL, v4, *((_QWORD *)v9[1] + 2));
      WdLogGlobalForLineNumber = 7139;
      if ( v10 )
        ReferenceCounted::Release((struct _KTHREAD *)((char *)v10 + 64));
      DXGFASTMUTEX::Release(v9 + 5);
      return 3223192325LL;
    }
    else
    {
      while ( *(_DWORD *)(v12 + 24) != (_DWORD)v4 )
      {
        v13 = *(struct _KTHREAD **)(v12 + 8);
        v12 = (__int64)v13 - 8;
        if ( v13 == (struct _KTHREAD *)((char *)v10 + 24) )
          v12 = 0LL;
        if ( !v12 )
          goto LABEL_13;
      }
      if ( a4 == 5 )
        IsTargetForceable = *(_QWORD *)(v12 + 112) == 0LL;
      else
        IsTargetForceable = DMMVIDEOPRESENTTARGET::IsTargetForceable((DMMVIDEOPRESENTTARGET *)v12);
      *a3 = IsTargetForceable;
      if ( v10 )
        ReferenceCounted::Release((struct _KTHREAD *)((char *)v10 + 64));
      DXGFASTMUTEX::Release(v9 + 5);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 7115;
  }
  return result;
}
