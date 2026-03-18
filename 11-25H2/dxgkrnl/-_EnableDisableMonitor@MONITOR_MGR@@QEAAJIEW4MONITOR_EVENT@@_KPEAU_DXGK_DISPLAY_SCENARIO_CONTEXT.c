/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x140354944
 * Callers:
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14035409C (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140402270 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042BF30 (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z @ 0x140012928 (-reset@-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140032C94 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x1400357A0 (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005F4BC (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005F4E0 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1402EBB14 (-_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x140354DC4 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140355118 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // r13
  unsigned int v8; // edi
  char v9; // r12
  unsigned int v10; // r14d
  int v12; // eax
  int v13; // ebx
  int v14; // ebx
  char v16; // al
  char v17; // dl
  unsigned __int8 v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // bl
  __int64 v22; // rax
  __int64 v23; // rbx
  MUTEX_LOCK *i; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned int v27; // r14d
  unsigned int *v28; // rbx
  __int64 v29; // r8
  __int64 j; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r15
  __int64 v35; // r14
  int v36; // eax
  _BYTE v37[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v38[8]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v39; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v40[8]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v41[2]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-18h]
  __int128 v43; // [rsp+70h] [rbp-10h]

  v7 = a7;
  v8 = 0;
  v9 = a3;
  v10 = a4;
  if ( a7 )
    *a7 = 0;
  if ( (unsigned int)(a4 - 1) > 1 && (_DWORD)a4 != 8 )
    return 3221225485LL;
  v12 = *(_BYTE *)(a1 + 17) & 1;
  v13 = 2 * (*(_BYTE *)(a1 + 18) & 1);
  v41[1] = a4;
  v42 = a5;
  v14 = a3 & 1 | (2 * (*(_BYTE *)(a1 + 16) & 1 | (2 * (v12 | v13))));
  v41[0] = v14;
  v43 = 0LL;
  if ( (_DWORD)a2 != -1 )
    return MONITOR_MGR::_EnableDisableMonitorInternal(a1, a2, a3, a4, a5, a6, v7);
  if ( (_DWORD)a4 != 2 && (_DWORD)a4 != 8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2821;
  }
  if ( a5 >= 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2836;
  }
  if ( v10 == 8 )
  {
    *(_BYTE *)(a1 + 17) = v9 == 0;
    v16 = *(_BYTE *)(a1 + 18);
  }
  else
  {
    v16 = v9 == 0;
    *(_BYTE *)(a1 + 18) = v9 == 0;
  }
  v17 = *(_BYTE *)(a1 + 17);
  if ( v17 || (v18 = 1, v16) )
    v18 = 0;
  v41[0] = v14 & 0xFFFFFF8F | (16 * (v18 | (2 * (v17 & 1 | (2 * (v16 & 1))))));
  MONITOR_MGR::_LogMonitorPresentEvent(a1, 14LL, 0xFFFFFFFFLL, 0LL, v41);
  v21 = 0;
  if ( *(_BYTE *)(a1 + 18) && *(_BYTE *)(a1 + 17) )
  {
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v37, a1);
    v22 = *(_QWORD *)(a1 + 40);
    if ( v22 == a1 + 40 )
    {
      v23 = 0LL;
    }
    else
    {
      v23 = v22 - 152;
      if ( !v22 )
        v23 = 0LL;
    }
    for ( i = (MUTEX_LOCK *)v37; ; i = (MUTEX_LOCK *)v38 )
    {
      MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>(i);
      if ( !v23 )
      {
        v21 = 0;
        goto LABEL_16;
      }
      v39 = v23;
      MonitorResourceLock::AcquireShared((PERESOURCE)(v23 + 40));
      if ( *(_DWORD *)(*(_QWORD *)(v23 + 240) + 16LL) )
      {
        if ( !DXGMONITOR::_IsMonitorDisabled((DXGMONITOR *)v23) )
          break;
      }
      ExReleaseResourceLite((PERESOURCE)(v23 + 40));
      KeLeaveCriticalRegion();
      MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v38, a1);
      v25 = *(_QWORD *)(v23 + 152);
      if ( v25 == a1 + 40 )
      {
        v23 = 0LL;
      }
      else
      {
        v23 = v25 - 152;
        if ( !v25 )
          v23 = 0LL;
      }
    }
    v21 = 1;
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v39);
  }
LABEL_16:
  if ( v18 != *(_BYTE *)(a1 + 16) || v21 )
  {
    LOBYTE(v19) = v18;
    if ( v10 != 8 )
      v10 = 2;
    v8 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, 0xFFFFFFFFLL, v19, v10, v18 ^ 1LL, a6, v7);
    *(_BYTE *)(a1 + 16) = v18;
    return v8;
  }
  if ( !v9 || v18 || !*(_BYTE *)(a1 + 17) )
    return v8;
  v26 = 4LL * *(unsigned int *)(a1 + 32);
  v27 = 0;
  if ( !is_mul_ok(*(unsigned int *)(a1 + 32), 4uLL) )
    v26 = -1LL;
  a7 = (_BYTE *)operator new[](v26, 0x4D677844u, 256LL, v20);
  v28 = (unsigned int *)a7;
  if ( a7 )
  {
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v40, a1);
    v29 = a1 + 40;
    for ( j = *(_QWORD *)(a1 + 40); j != v29; j = *(_QWORD *)(v31 + 152) )
    {
      v31 = j - 152;
      if ( !j )
        v31 = 0LL;
      if ( !v31 )
        break;
      if ( *(_DWORD *)(*(_QWORD *)(v31 + 240) + 16LL) && DXGMONITOR::_IsMonitorDisabled((DXGMONITOR *)v31) )
      {
        v32 = v27++;
        v28[v32] = *(_DWORD *)(v31 + 180);
      }
    }
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)v40);
    if ( v27 )
    {
      v34 = v27;
      do
      {
        v35 = *v28;
        if ( (_DWORD)v35 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2970;
        }
        LOBYTE(v33) = 1;
        v36 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, (unsigned int)v35, v33, 2LL, 0LL, a6, v7);
        if ( v36 < 0 )
        {
          WdLogSingleEntry3(2LL, v35, a1, v36);
          WdLogGlobalForLineNumber = 2977;
        }
        ++v28;
        --v34;
      }
      while ( v34 );
    }
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&a7);
    return v8;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2942;
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&a7);
  return 3221225495LL;
}
