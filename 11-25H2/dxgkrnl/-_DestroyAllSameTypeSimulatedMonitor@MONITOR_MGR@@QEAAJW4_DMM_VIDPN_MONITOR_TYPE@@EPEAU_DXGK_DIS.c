/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402BCB18
 * Callers:
 *     ?MonitorAdapterPowerChange@@YAJPEAXEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402BCA3C (-MonitorAdapterPowerChange@@YAJPEAXEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?MonitorDestroyAllSameTypeSimulatedMonitor@@YAJPEAXW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1403D8A64 (-MonitorDestroyAllSameTypeSimulatedMonitor@@YAJPEAXW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z @ 0x1400385FC (-Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x140052418 (--$-9V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@det.c)
 *     ??0?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z @ 0x14005F4BC (--0-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0GI@@@QEAA@AEAVMONITOR_MGR@@@Z.c)
 *     ??1?$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ @ 0x14005F4E0 (--1-$MUTEX_MEMBER_LOCK@VMONITOR_MGR@@$0JI@@@QEAA@XZ.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14026CAB0 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x14026ECA0 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140355118 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403552A0 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x140404204 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // r14
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rcx
  unsigned int v27; // ebx
  unsigned int v28; // eax
  __int64 *v29; // rax
  struct DXGMONITOR *v30; // rdx
  __int64 v31; // rcx
  _BYTE v32[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v33[8]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v34[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-38h] BYREF
  __int64 **v36; // [rsp+50h] [rbp-30h]
  void *v37; // [rsp+58h] [rbp-28h] BYREF
  __int64 *v38; // [rsp+60h] [rbp-20h]
  void *v39; // [rsp+68h] [rbp-18h] BYREF
  __int64 v40; // [rsp+70h] [rbp-10h]
  void *retaddr; // [rsp+B8h] [rbp+38h]
  char v42; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v43; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v44; // [rsp+D8h] [rbp+58h]

  v44 = a4;
  if ( a2 == 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2178;
  }
  v7 = 0LL;
  v36 = &v35;
  v35 = (__int64 *)&v35;
  v37 = retaddr;
  v38 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v37);
  v39 = retaddr;
  v40 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v39);
  MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)&v42, a1);
  v8 = a1 + 40;
  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 == a1 + 40 )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = v9 - 152;
    if ( !v9 )
      v10 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v37);
  v38 = (__int64 *)v10;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v37);
  MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)&v42);
  while ( v10 )
  {
    MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v32, a1);
    v15 = (__int64 *)(v10 + 152);
    v16 = *(_QWORD *)(v10 + 152);
    if ( v16 != v8 )
    {
      v7 = v16 - 152;
      if ( !v16 )
        v7 = 0LL;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v39);
    v40 = v7;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v39);
    MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)v32);
    if ( a2 == *(_DWORD *)(v10 + 280) )
    {
      if ( !a3
        || (v43 = 0,
            DmmIsTargetInClientVidPnTopology(
              *(void *const *)(*(_QWORD *)(a1 + 24) + 16LL),
              *(_DWORD *)(v10 + 180),
              &v43) >= 0)
        && !v43 )
      {
        MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v33, a1);
        v17 = (__int64 *)*v15;
        if ( *(__int64 **)(*v15 + 8) != v15 )
          goto LABEL_47;
        v18 = *(__int64 ***)(v10 + 160);
        if ( *v18 != v15 )
          goto LABEL_47;
        *v18 = v17;
        v17[1] = (__int64)v18;
        v19 = v36;
        if ( *v36 != (__int64 *)&v35 )
          goto LABEL_47;
        *(_QWORD *)(v10 + 160) = v36;
        *v15 = (__int64)&v35;
        *v19 = v15;
        v36 = (__int64 **)(v10 + 152);
        MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)v33);
        v20 = *(_QWORD *)(v10 + 296);
        if ( v20 )
        {
          if ( *(_DWORD *)(v20 + 280) != 1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2251;
          }
          MUTEX_MEMBER_LOCK<MONITOR_MGR,104>::MUTEX_MEMBER_LOCK<MONITOR_MGR,104>((MUTEX_LOCK *)v34, a1);
          v21 = *(_QWORD *)v8;
          v22 = (_QWORD *)(*(_QWORD *)(v10 + 296) + 152LL);
          if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
            goto LABEL_47;
          *v22 = v21;
          v22[1] = v8;
          *(_QWORD *)(v21 + 8) = v22;
          *(_QWORD *)v8 = v22;
          MUTEX_MEMBER_LOCK<MONITOR_MGR,152>::~MUTEX_MEMBER_LOCK<MONITOR_MGR,152>((MUTEX_LOCK *)v34);
          if ( MONITOR_MGR::_UsingCCDNameForTTM
            || wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>((_QWORD *)(*(_QWORD *)(v10 + 200) + 40LL)) )
          {
            DXGMONITOR::_CreateTtmDevice(*(DXGMONITOR **)(v10 + 296), v23, v24, v25);
          }
        }
        else
        {
          --*(_DWORD *)(a1 + 32);
        }
      }
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v37);
    v10 = v7;
    v7 = 0LL;
    v37 = v39;
    v40 = 0LL;
    v38 = (__int64 *)v10;
  }
  v11 = v35;
  if ( v35 == (__int64 *)&v35 )
  {
    v12 = 0LL;
  }
  else
  {
    v26 = (__int64 *)*v35;
    if ( (__int64 **)v35[1] != &v35 || (__int64 *)v26[1] != v35 )
LABEL_47:
      __fastfail(3u);
    v35 = (__int64 *)*v35;
    v12 = v11 - 19;
    v26[1] = (__int64)&v35;
    if ( !v11 )
      v12 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v37);
  v38 = v12;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v37);
  v13 = v44;
  while ( v12 )
  {
    v27 = *((_DWORD *)v12 + 45);
    MONITOR_MGR::_IssueMonitorEvent(a1 + 8, v27, 0LL, 2LL, *((_DWORD *)v12 + 70), v13);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)(v12 + 36));
    v28 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, (const struct MONITOR_REF_ACCESSOR *)&v37);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826LL, v27, v28, 0LL);
    v29 = v35;
    if ( v35 == (__int64 *)&v35 )
    {
      v30 = 0LL;
    }
    else
    {
      if ( (__int64 **)v35[1] != &v35 )
        goto LABEL_47;
      v31 = *v35;
      if ( *(__int64 **)(*v35 + 8) != v35 )
        goto LABEL_47;
      v35 = (__int64 *)*v35;
      *(_QWORD *)(v31 + 8) = &v35;
      v30 = (struct DXGMONITOR *)(v29 - 19);
      if ( !v29 )
        v30 = 0LL;
    }
    MONITOR_REF_ACCESSOR::Assign((MONITOR_REF_ACCESSOR *)&v37, v30);
    v12 = v38;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v39);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v37);
  return 0LL;
}
