/*
 * XREFs of ?MonitorIsMonitorVirtualModeDisabled@@YAJPEAXIPEAE@Z @ 0x1402CA7F0
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14008FCCC (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

__int64 __fastcall MonitorIsMonitorVirtualModeDisabled(_QWORD *a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned __int8 v6; // di
  MONITOR_MGR *v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rax
  struct DXGMONITOR *v11; // rdx
  void *v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]

  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  v6 = 1;
  if ( !a1[390] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 782;
  }
  if ( *(_QWORD *)(a1[390] + 112LL) )
  {
    v13 = 0LL;
    v12 = retaddr;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v12);
    MONITOR_MGR::_GetMonitorInstance(v7, a2, 1u, (struct MONITOR_REF_ACCESSOR *)&v12);
    v8 = v13;
    v14 = v13;
    if ( v13 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v8 + 40), 1u);
    }
    v15[0] = retaddr;
    v9 = 2LL;
    do
    {
      v15[1] = v8;
      --v9;
    }
    while ( v9 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v15);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v12);
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v14, v11);
    v8 = v14;
  }
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 280) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5268;
    }
    if ( !*(_DWORD *)(*(_QWORD *)(v8 + 240) + 16LL) && (*(_BYTE *)(v8 + 176) & 0x40) == 0 )
      v6 = 0;
    *a3 = v6;
    ExReleaseResourceLite((PERESOURCE)(v8 + 40));
    KeLeaveCriticalRegion();
    v14 = 0LL;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v15);
    if ( v14 )
    {
      ExReleaseResourceLite((PERESOURCE)(v14 + 40));
      KeLeaveCriticalRegion();
    }
    return 0LL;
  }
  else
  {
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v15);
    if ( v14 )
    {
      ExReleaseResourceLite((PERESOURCE)(v14 + 40));
      KeLeaveCriticalRegion();
    }
    return 3221225664LL;
  }
}
