/*
 * XREFs of ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14026A3C8
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x140269DA4 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14026424C (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140319BE4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // r14
  __int64 Container; // rax
  VIDPN_MGR *v6; // r15
  int FirstAvailableTarget; // eax
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r12
  unsigned int v11; // edi
  unsigned int v12; // ebx
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rdi
  unsigned int v15; // ebx
  struct DXGADAPTER *v16; // rax
  __int64 result; // rax
  __int64 v18; // rdi
  unsigned int v19; // ebx
  struct DXGADAPTER *v20; // rax
  unsigned int v21; // edi
  unsigned int v22; // ebx
  struct DXGADAPTER *ContainingAdapter; // rax
  unsigned int v24; // [rsp+90h] [rbp+48h] BYREF
  int v25; // [rsp+98h] [rbp+50h] BYREF
  int v26; // [rsp+A0h] [rbp+58h] BYREF
  int v27; // [rsp+A8h] [rbp+60h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 6) = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v25 = 0;
  v24 = -1;
  v26 = -2;
  v6 = *(VIDPN_MGR **)(Container + 48);
  v27 = -2;
  while ( 1 )
  {
    while ( 1 )
    {
      FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                               a1,
                               v3,
                               1,
                               &v24,
                               (DMMVIDPNTARGETSET *)&v26,
                               &v27,
                               &v25);
      v8 = FirstAvailableTarget;
      if ( FirstAvailableTarget == -1071774925 )
      {
        v21 = *((_DWORD *)a2 + 3);
        v22 = *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v6) + 103);
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v6);
        WdLogSingleEntry3(7LL, *((int *)ContainingAdapter + 104), v22, v21);
        result = 3223192371LL;
        WdLogGlobalForLineNumber = 358;
        return result;
      }
      if ( FirstAvailableTarget < 0 )
      {
        v18 = *((unsigned int *)a2 + 3);
        v19 = *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v6) + 103);
        v20 = VIDPN_MGR::GetContainingAdapter(v6);
        WdLogSingleEntry4(2LL, v8, *((int *)v20 + 104), v19, v18);
        result = (unsigned int)v8;
        WdLogGlobalForLineNumber = 368;
        return result;
      }
      if ( !v25 )
        break;
      LODWORD(v3) = v24;
    }
    v3 = v24;
    v9 = VIDPN_MGR::AddPathToVidPnTopology(
           v6,
           a1,
           *((_DWORD *)a2 + 3),
           v24,
           (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
           0xFFFFu,
           0,
           D3DKMDT_MCC_ENFORCE);
    v10 = v9;
    if ( v9 != -1071774975 )
      break;
    v11 = *((_DWORD *)a2 + 3);
    v12 = *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v6) + 103);
    v13 = VIDPN_MGR::GetContainingAdapter(v6);
    WdLogSingleEntry4(7LL, *((int *)v13 + 104), v12, v11, v3);
    WdLogGlobalForLineNumber = 392;
  }
  if ( v9 >= 0 )
  {
    *((_DWORD *)a2 + 5) = v26;
    *((_DWORD *)a2 + 6) = v27;
    *((_DWORD *)a2 + 4) = v3;
  }
  else
  {
    v14 = *((unsigned int *)a2 + 3);
    v15 = *((_DWORD *)VIDPN_MGR::GetContainingAdapter(v6) + 103);
    v16 = VIDPN_MGR::GetContainingAdapter(v6);
    WdLogSingleEntry5(2LL, v10, *((int *)v16 + 104), v15, v14, v3);
    WdLogGlobalForLineNumber = 407;
  }
  return (unsigned int)v10;
}
