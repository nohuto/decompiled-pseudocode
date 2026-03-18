/*
 * XREFs of ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x140319BE4
 * Callers:
 *     ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402614E0 (-AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_V.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x140269DA4 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14026A3C8 (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x14026A7F8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026B350 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x140316098 (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x140319430 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1403A859C (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403A8F14 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x14040205C (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z @ 0x140039D04 (-GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x140039D4C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1400410BC (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x14031A018 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x14031AC7C (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 */

__int64 __fastcall VIDPN_MGR::AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5,
        unsigned __int16 a6,
        unsigned __int8 a7,
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
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v21; // ebp
  int v22; // ecx
  int v23; // eax
  DMMVIDPNPRESENTPATH *v24; // rax
  DMMVIDPNPRESENTPATH *v25; // rbx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  _QWORD *v32; // rax
  void (__fastcall **v33)(DMMVIDPNPRESENTPATH *, __int64); // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  struct DMMVIDPNTARGET *TargetFromId; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
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
      || (v35 = *((unsigned int *)VIDPN_MGR::GetContainingAdapter(this) + 111), (v35 & 8) == 0) )
    {
      v45 = WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
      *(_QWORD *)(v45 + 24) = v8;
      *(_QWORD *)(v45 + 32) = 1LL;
      WdLogGlobalForLineNumber = 2697;
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v51);
      return 3223192321LL;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v18 + 96) + 556LL) & 0x100) != 0 )
  {
    v44 = WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
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
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
    v43[3] = v52;
    v43[4] = v8;
    v43[5] = 3LL;
    WdLogGlobalForLineNumber = 2725;
    return 3223192321LL;
  }
LABEL_21:
  v21 = a5;
  if ( a5 != 255 )
    goto LABEL_25;
  v22 = *((_DWORD *)a2 + 49);
  v21 = D3DKMDT_VPPI_PRIMARY;
  v23 = 1;
  if ( (v22 & 1) == 0 )
    goto LABEL_25;
  do
  {
    ++v21;
    v23 *= 2;
  }
  while ( (v22 & v23) != 0 );
  if ( v21 > 32 )
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
    v24 = (DMMVIDPNPRESENTPATH *)operator new(0xC0uLL, 0x4E506456u, 256LL);
    if ( v24 )
      v25 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
              v24,
              (struct DMMVIDPNSOURCE *)v14,
              (struct DMMVIDPNTARGET *)v18,
              v21,
              a6);
    else
      v25 = 0LL;
    v51 = v25;
    if ( v25 )
    {
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v25 + 7))((__int64)v25 + 56) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2771;
      }
      v26 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v25, a8, a7);
      v31 = v26;
      if ( v26 >= 0 )
      {
        return 0LL;
      }
      else
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
        v32[3] = v9;
        v32[4] = v8;
        v32[5] = a2;
        v32[6] = v31;
        v33 = *(void (__fastcall ***)(DMMVIDPNPRESENTPATH *, __int64))v25;
        WdLogGlobalForLineNumber = 2785;
        (*v33)(v25, 1LL);
        return (unsigned int)v31;
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
