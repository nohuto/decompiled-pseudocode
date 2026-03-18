/*
 * XREFs of ?MonitorGetMonitorOrientationsFromTarget@@YAJPEAXIPEAK1@Z @ 0x1402E0B54
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 * Callees:
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140091130 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402E1840 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402E1D74 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromTarget(
        _QWORD *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  MONITOR_MGR *v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax
  struct DXGMONITOR *v12; // rdx
  void *v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]

  if ( !a1 || a2 == -1 )
    return 3221225485LL;
  if ( !a1[390] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 782;
  }
  if ( *(_QWORD *)(a1[390] + 112LL) )
  {
    v14 = 0LL;
    v13 = retaddr;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v13);
    MONITOR_MGR::_GetMonitorInstance(v7, a2, 1u, (struct MONITOR_REF_ACCESSOR *)&v13);
    v8 = v14;
    v15 = v14;
    if ( v14 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v8 + 40), 1u);
    }
    v16[0] = retaddr;
    v9 = 2LL;
    do
    {
      v16[1] = v8;
      --v9;
    }
    while ( v9 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v16);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v13);
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v15, v12);
    v8 = v15;
  }
  if ( v8 )
  {
    if ( a3 )
    {
      v10 = 0;
      if ( *(_DWORD *)(v8 + 312) != *(_DWORD *)(v8 + 304) )
        v10 = *(_DWORD *)(v8 + 312);
      *a3 = v10;
    }
    ExReleaseResourceLite((PERESOURCE)(v8 + 40));
    KeLeaveCriticalRegion();
    v15 = 0LL;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v16);
    if ( v15 )
    {
      ExReleaseResourceLite((PERESOURCE)(v15 + 40));
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 2643;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v16);
    if ( v15 )
    {
      ExReleaseResourceLite((PERESOURCE)(v15 + 40));
      KeLeaveCriticalRegion();
    }
    return 3221226021LL;
  }
}
