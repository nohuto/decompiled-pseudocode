/*
 * XREFs of ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1402CB080
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1402CEBD8 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 * Callees:
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14008FCCC (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AddingMonitorOrientation(
        ADAPTER_DISPLAY *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  char v5; // si
  MONITOR_MGR *v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rax
  char v9; // di
  struct DXGMONITOR *v11; // rdx
  void *v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]

  v3 = *((_QWORD *)this + 2);
  v5 = a2;
  if ( !v3 || a3 == -1 )
  {
LABEL_14:
    v9 = 0;
    return ((v9 + v5 - 1) & 3u) + 1;
  }
  if ( !*(_QWORD *)(v3 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 782;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 3120) + 112LL) )
  {
    v13 = 0LL;
    v12 = retaddr;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v12);
    MONITOR_MGR::_GetMonitorInstance(v6, a3, 1u, (struct MONITOR_REF_ACCESSOR *)&v12);
    v7 = v13;
    v14 = v13;
    if ( v13 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v7 + 40), 1u);
    }
    v15[0] = retaddr;
    v8 = 2LL;
    do
    {
      v15[1] = v7;
      --v8;
    }
    while ( v8 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v15);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v12);
  }
  else
  {
    WdLogSingleEntry1(2LL, v3);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v14, v11);
    v7 = v14;
  }
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 2643;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v15);
    if ( v14 )
    {
      ExReleaseResourceLite((PERESOURCE)(v14 + 40));
      KeLeaveCriticalRegion();
    }
    goto LABEL_14;
  }
  v9 = 0;
  if ( *(_DWORD *)(v7 + 312) != *(_DWORD *)(v7 + 304) )
    v9 = *(_DWORD *)(v7 + 312);
  ExReleaseResourceLite((PERESOURCE)(v7 + 40));
  KeLeaveCriticalRegion();
  v14 = 0LL;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v15);
  if ( v14 )
  {
    ExReleaseResourceLite((PERESOURCE)(v14 + 40));
    KeLeaveCriticalRegion();
  }
  return ((v9 + v5 - 1) & 3u) + 1;
}
