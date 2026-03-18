/*
 * XREFs of ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1402E2240
 * Callers:
 *     ?MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026EEA0 (-MonitorRebuildMonitorModeListCache@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1402E1D8C (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DmmGetNextVideoPresentTarget(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  bool v13; // zf
  unsigned int v14; // ebx
  __int64 result; // rax

  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 6978;
    return result;
  }
  *a3 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 6995;
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7001;
  }
  v6 = *(_QWORD *)(a1 + 3120);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 7006;
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
  v7 = *(_QWORD *)(v6 + 104);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 7020;
    return result;
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v7 + 40));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 120) + 72LL));
  v8 = *(_QWORD *)(v7 + 120);
  v9 = v8 + 24;
  v10 = *(_QWORD *)(v8 + 24);
  if ( a2 == -1 )
  {
    if ( v10 == v9 )
      v11 = 0LL;
    else
      v11 = v10 - 8;
  }
  else
  {
    if ( v10 == v9 || (v11 = v10 - 8) == 0 )
    {
LABEL_15:
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
      v14 = -1071774971;
LABEL_18:
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v7 + 40));
      return v14;
    }
    while ( 1 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      v13 = *(_DWORD *)(v11 + 24) == a2;
      v11 = v12 - 8;
      if ( v13 )
        break;
      if ( v12 == v9 )
        v11 = 0LL;
      if ( !v11 )
        goto LABEL_15;
    }
    if ( v12 == v9 )
      v11 = 0LL;
  }
  if ( !v11 )
  {
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    v14 = -1073741275;
    goto LABEL_18;
  }
  *a3 = *(_DWORD *)(v11 + 24);
  if ( v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v7 + 40));
  return 0LL;
}
