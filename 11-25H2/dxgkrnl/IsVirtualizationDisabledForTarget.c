/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1402CB454
 * Callers:
 *     _lambda_f44fa2b0187a36f67bd7075047dd61ad_::operator() @ 0x1401BF5A4 (_lambda_f44fa2b0187a36f67bd7075047dd61ad_--operator().c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x140253DB4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x140262EA4 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1402638F8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x140264450 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1402D2BEC (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x140325E40 (DxgkIsVirtualizationDisabledForTarget.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14008FCCC (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CB2B0 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CB7E4 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(__int64 a1, int a2, bool *a3, bool *a4, char *a5)
{
  char v5; // bl
  __int64 v8; // r15
  unsigned int v9; // edx
  MONITOR_MGR *v10; // r10
  __int64 v11; // rdi
  __int64 v12; // rax
  char v13; // r14
  bool v14; // al
  struct DXGMONITOR *v16; // rdx
  void *v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-18h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]

  v5 = 0;
  if ( !a1 || a2 == -1 || !a3 || !a4 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a1 + 3120);
  if ( !v8 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10225;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The selected adapter is render-only",
      10225LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(v8 + 112) )
  {
    v17 = retaddr;
    v18 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v17);
    MONITOR_MGR::_GetMonitorInstance(v10, v9, 1, (struct MONITOR_REF_ACCESSOR *)&v17);
    v11 = v18;
    v19 = v18;
    if ( v18 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v11 + 40), 1u);
    }
    v20[0] = retaddr;
    v12 = 2LL;
    do
    {
      v20[1] = v11;
      --v12;
    }
    while ( v12 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v20);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v17);
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v19, v16);
    v11 = v19;
  }
  if ( v11 )
  {
    if ( *(_DWORD *)(v11 + 280) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5268;
    }
    if ( *(_DWORD *)(*(_QWORD *)(v11 + 240) + 16LL) || (v13 = 0, (*(_BYTE *)(v11 + 176) & 0x40) != 0) )
      v13 = 1;
    ExReleaseResourceLite((PERESOURCE)(v11 + 40));
    KeLeaveCriticalRegion();
    v19 = 0LL;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v20);
    if ( v19 )
    {
      ExReleaseResourceLite((PERESOURCE)(v19 + 40));
      KeLeaveCriticalRegion();
    }
    if ( v13 )
    {
      *a3 = 1;
      v14 = 1;
      goto LABEL_21;
    }
  }
  else
  {
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v20);
    if ( v19 )
    {
      ExReleaseResourceLite((PERESOURCE)(v19 + 40));
      KeLeaveCriticalRegion();
    }
  }
  *a3 = *(_BYTE *)(v8 + 289) == 0;
  v14 = *(_BYTE *)(v8 + 290) == 0;
LABEL_21:
  *a4 = v14;
  if ( a5 )
  {
    if ( *a3 || (*(_DWORD *)(v8 + 24) & 0x20) == 0 )
      v5 = 1;
    *a5 = v5;
  }
  return 0LL;
}
