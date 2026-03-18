/*
 * XREFs of ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CFC04
 * Callers:
 *     ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x14025A5E0 (-AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_V.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x140262EA4 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1402634C8 (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1402638F8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x140264450 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1402CF450 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402D1CCC (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1402D2BEC (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1403B9434 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1403DF784 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z @ 0x14003B744 (-GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x14004160C (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1402CE0CC (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402D0038 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5,
        unsigned __int16 a6,
        char a7,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  DMMVIDPN *Container; // rbp
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  __int64 result; // rax
  _QWORD *v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v22; // ebp
  int v23; // ecx
  int v24; // eax
  DMMVIDPNPRESENTPATH *v25; // rax
  DMMVIDPNPRESENTPATH *v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  _QWORD *v33; // rax
  void (__fastcall **v34)(DMMVIDPNPRESENTPATH *, __int64); // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  struct DMMVIDPNTARGET *TargetFromId; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  DMMVIDPNPRESENTPATH *v51; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v52; // [rsp+78h] [rbp+10h] BYREF

  v8 = a4;
  v9 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2629;
  }
  Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v51 = 0LL;
  v13 = (_QWORD *)(*((_QWORD *)Container + 38) + 24LL);
  if ( (_QWORD *)*v13 == v13 || (v14 = *v13 - 8LL, *v13 == 8LL) )
  {
LABEL_9:
    WdLogSingleEntry2(2LL, v9, a2);
    result = 3223192324LL;
    WdLogGlobalForLineNumber = 2644;
    return result;
  }
  while ( *(_DWORD *)(v14 + 24) != (_DWORD)v9 )
  {
    v17 = *(_QWORD **)(v14 + 8);
    v14 = (__int64)(v17 - 1);
    if ( v17 == v13 )
      v14 = 0LL;
    if ( !v14 )
      goto LABEL_9;
  }
  v15 = (_QWORD *)(*((_QWORD *)Container + 39) + 24LL);
  if ( (_QWORD *)*v15 == v15 || (v18 = *v15 - 8LL, *v15 == 8LL) )
  {
LABEL_7:
    WdLogSingleEntry2(2LL, v8, a2);
    WdLogGlobalForLineNumber = 2658;
    return 3223192325LL;
  }
  while ( *(_DWORD *)(v18 + 24) != (_DWORD)v8 )
  {
    v19 = *(_QWORD **)(v18 + 8);
    v18 = (__int64)(v19 - 1);
    if ( v19 == v15 )
      v18 = 0LL;
    if ( !v18 )
      goto LABEL_7;
  }
  v52 = 0;
  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(a2, v9, 0LL, &v52) < 0 )
    goto LABEL_21;
  if ( !(unsigned __int8)RtlIsMultiSessionSku(v20) )
  {
    if ( !g_OSTestSigningEnabled
      || (v36 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(this) + 111), (v36 & 8) == 0) )
    {
      v45 = WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
      *(_QWORD *)(v45 + 24) = v8;
      *(_QWORD *)(v45 + 32) = 1LL;
      WdLogGlobalForLineNumber = 2697;
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v51);
      return 3223192321LL;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v18 + 96) + 556LL) & 0x100) != 0 )
  {
    v44 = WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
    *(_QWORD *)(v44 + 24) = v8;
    *(_QWORD *)(v44 + 32) = 2LL;
    WdLogGlobalForLineNumber = 2705;
    return 3223192321LL;
  }
  TargetFromId = DMMVIDPN::GetTargetFromId(Container, v52);
  if ( !TargetFromId )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2715;
    return 3223192325LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)TargetFromId + 12) + 556LL) & 0x100) != 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v41, v40, v42, v21);
    v43[3] = v52;
    v43[4] = v8;
    v43[5] = 3LL;
    WdLogGlobalForLineNumber = 2725;
    return 3223192321LL;
  }
LABEL_21:
  v22 = a5;
  if ( a5 != 255 )
    goto LABEL_25;
  v23 = *((_DWORD *)a2 + 49);
  v22 = D3DKMDT_VPPI_PRIMARY;
  v24 = 1;
  if ( (v23 & 1) == 0 )
    goto LABEL_25;
  do
  {
    ++v22;
    v24 *= 2;
  }
  while ( (v23 & v24) != 0 );
  if ( v22 > 32 )
  {
    WdLogSingleEntry2(2LL, 32LL, a2);
    WdLogGlobalForLineNumber = 295;
    v50 = WdLogNewEntry5_WdTrace(v47, v46, v48, v49);
    *(_QWORD *)(v50 + 24) = a2;
    *(_QWORD *)(v50 + 32) = -1071774892LL;
    result = 3223192404LL;
    WdLogGlobalForLineNumber = 2744;
  }
  else
  {
LABEL_25:
    v25 = (DMMVIDPNPRESENTPATH *)operator new(0xC0uLL, 0x4E506456u, 256LL, v21);
    if ( v25 )
      v26 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
              v25,
              (struct DMMVIDPNSOURCE *)v14,
              (struct DMMVIDPNTARGET *)v18,
              v22,
              a6);
    else
      v26 = 0LL;
    v51 = v26;
    if ( v26 )
    {
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v26 + 7))((__int64)v26 + 56) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2771;
      }
      v27 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v26, a8, a7);
      v32 = v27;
      if ( v27 >= 0 )
      {
        return 0LL;
      }
      else
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
        v33[3] = v9;
        v33[4] = v8;
        v33[5] = a2;
        v33[6] = v32;
        v34 = *(void (__fastcall ***)(DMMVIDPNPRESENTPATH *, __int64))v26;
        WdLogGlobalForLineNumber = 2785;
        (*v34)(v26, 1LL);
        return (unsigned int)v32;
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 2765;
    }
  }
  return result;
}
