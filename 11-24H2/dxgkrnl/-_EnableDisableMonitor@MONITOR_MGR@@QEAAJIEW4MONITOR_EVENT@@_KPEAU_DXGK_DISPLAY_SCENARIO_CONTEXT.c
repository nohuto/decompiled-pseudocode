/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14028D3B4
 * Callers:
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028CB0C (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403FC0F0 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042DE1C (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z @ 0x140021DB8 (-reset@-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140032BC4 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x1400356FC (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005FD74 (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005FD98 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14028D834 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14028DB88 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1403CF0FC (-_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ.c)
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
  char v20; // bl
  __int64 v21; // rax
  __int64 v22; // rbx
  MUTEX_LOCK *i; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // r14d
  unsigned int *v27; // rbx
  __int64 v28; // r8
  __int64 j; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r15
  __int64 v34; // r14
  int v35; // eax
  _BYTE v36[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v37[8]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v38; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v39[8]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v40[2]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-18h]
  __int128 v42; // [rsp+70h] [rbp-10h]

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
  v40[1] = a4;
  v41 = a5;
  v14 = a3 & 1 | (2 * (*(_BYTE *)(a1 + 16) & 1 | (2 * (v12 | v13))));
  v40[0] = v14;
  v42 = 0LL;
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
  v40[0] = v14 & 0xFFFFFF8F | (16 * (v18 | (2 * (v17 & 1 | (2 * (v16 & 1))))));
  MONITOR_MGR::_LogMonitorPresentEvent(a1, 14LL, 0xFFFFFFFFLL, 0LL, v40);
  v20 = 0;
  if ( *(_BYTE *)(a1 + 18) && *(_BYTE *)(a1 + 17) )
  {
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v36, a1);
    v21 = *(_QWORD *)(a1 + 40);
    if ( v21 == a1 + 40 )
    {
      v22 = 0LL;
    }
    else
    {
      v22 = v21 - 152;
      if ( !v21 )
        v22 = 0LL;
    }
    for ( i = (MUTEX_LOCK *)v36; ; i = (MUTEX_LOCK *)v37 )
    {
      MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>(i);
      if ( !v22 )
      {
        v20 = 0;
        goto LABEL_16;
      }
      v38 = v22;
      MonitorResourceLock::AcquireShared((PERESOURCE)(v22 + 40));
      if ( *(_DWORD *)(*(_QWORD *)(v22 + 240) + 16LL) )
      {
        if ( !DXGMONITOR::_IsMonitorDisabled((DXGMONITOR *)v22) )
          break;
      }
      ExReleaseResourceLite((PERESOURCE)(v22 + 40));
      KeLeaveCriticalRegion();
      MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v37, a1);
      v24 = *(_QWORD *)(v22 + 152);
      if ( v24 == a1 + 40 )
      {
        v22 = 0LL;
      }
      else
      {
        v22 = v24 - 152;
        if ( !v24 )
          v22 = 0LL;
      }
    }
    v20 = 1;
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v38);
  }
LABEL_16:
  if ( v18 != *(_BYTE *)(a1 + 16) || v20 )
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
  v25 = 4LL * *(unsigned int *)(a1 + 32);
  v26 = 0;
  if ( !is_mul_ok(*(unsigned int *)(a1 + 32), 4uLL) )
    v25 = -1LL;
  a7 = (_BYTE *)operator new[](v25, 0x4D677844u, 256LL);
  v27 = (unsigned int *)a7;
  if ( a7 )
  {
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v39, a1);
    v28 = a1 + 40;
    for ( j = *(_QWORD *)(a1 + 40); j != v28; j = *(_QWORD *)(v30 + 152) )
    {
      v30 = j - 152;
      if ( !j )
        v30 = 0LL;
      if ( !v30 )
        break;
      if ( *(_DWORD *)(*(_QWORD *)(v30 + 240) + 16LL) && DXGMONITOR::_IsMonitorDisabled((DXGMONITOR *)v30) )
      {
        v31 = v26++;
        v27[v31] = *(_DWORD *)(v30 + 180);
      }
    }
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)v39);
    if ( v26 )
    {
      v33 = v26;
      do
      {
        v34 = *v27;
        if ( (_DWORD)v34 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2970;
        }
        LOBYTE(v32) = 1;
        v35 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, (unsigned int)v34, v32, 2LL, 0LL, a6, v7);
        if ( v35 < 0 )
        {
          WdLogSingleEntry3(2LL, v34, a1, v35);
          WdLogGlobalForLineNumber = 2977;
        }
        ++v27;
        --v33;
      }
      while ( v33 );
    }
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&a7);
    return v8;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2942;
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&a7);
  return 3221225495LL;
}
