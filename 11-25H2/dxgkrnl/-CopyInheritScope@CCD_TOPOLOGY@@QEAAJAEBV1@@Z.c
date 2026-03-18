/*
 * XREFs of ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x140379754
 * Callers:
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1402642A0 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x140264B4C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14036D944 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403783FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403796C4 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x140374BE0 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1403B83D0 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyInheritScope(void **this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  __int64 v8; // rdx
  unsigned __int16 v9; // di
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdi
  unsigned int i; // r14d
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v17; // r8
  int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // rcx
  __int64 v21; // rax

  CCD_TOPOLOGY::Clear(this);
  v6 = *((_QWORD *)a2 + 8);
  v7 = 0;
  if ( v6 )
  {
    v8 = *(unsigned __int16 *)(v6 + 20);
    v9 = *(_WORD *)(v6 + 20);
  }
  else
  {
    v8 = 0LL;
    v9 = 0;
  }
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)this, v8, v4, v5) >= v9 )
  {
    LODWORD(v12) = 0;
    for ( i = 0; ; ++i )
    {
      v14 = *((_QWORD *)a2 + 8);
      v15 = v14 ? *(_WORD *)(v14 + 20) : 0;
      if ( i >= v15 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
      v18 = CCD_TOPOLOGY::AddPathDescriptor((CCD_TOPOLOGY *)this, PathDescriptor, v17);
      v12 = v18;
      if ( v18 < 0 )
      {
        v19 = *((_QWORD *)a2 + 8);
        if ( v19 )
          v7 = *(_WORD *)(v19 + 20);
        WdLogSingleEntry4(1LL, v12, i, this, v7);
        WdLogGlobalForLineNumber = 170;
        return (unsigned int)v12;
      }
    }
    v20 = this[8];
    if ( v20 )
    {
      v21 = *((_QWORD *)a2 + 8);
      if ( v21 )
      {
        *(_OWORD *)v20 = *(_OWORD *)v21;
        v20[4] = *(_DWORD *)(v21 + 16);
      }
    }
    return (unsigned int)v12;
  }
  else
  {
    v10 = *((_QWORD *)a2 + 8);
    if ( v10 )
      v7 = *(_WORD *)(v10 + 20);
    WdLogSingleEntry2(6LL, this, v7);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 154;
  }
  return result;
}
