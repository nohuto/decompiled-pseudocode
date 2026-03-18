/*
 * XREFs of ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0
 * Callers:
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140259BD0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025B514 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x14025D8D0 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1402637B0 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14030F324 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x140316E98 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x14031854C (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x140319430 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x14031AC7C (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140377B54 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403A8F14 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403D3284 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rbx
  int v9; // eax

  v6 = a3;
  *(_BYTE *)(a1 + 8) = a3;
  v7 = a2;
  *(_BYTE *)(a1 + 10) = 1;
  *(_QWORD *)a1 = a2;
  if ( a3 >= *(_BYTE *)(a2 + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 243;
  }
  v9 = *(unsigned __int16 *)(v7 + 22);
  *(_BYTE *)(a1 + 9) = _bittest(&v9, v6);
  if ( v6 >= *(_QWORD *)(v7 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 74;
  }
  *(_BYTE *)(a1 + 11) = *(_BYTE *)(v6 + *(_QWORD *)(v7 + 48));
  if ( v6 >= *(_QWORD *)(v7 + 80) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 74;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(v7 + 88) + 8 * v6);
  if ( !*(_BYTE *)(a1 + 9) )
  {
    if ( (*(_BYTE *)(a1 + 11) & 0xF) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 212;
    }
    if ( *(_QWORD *)(a1 + 16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 213;
    }
    if ( !*(_BYTE *)(a1 + 9) )
    {
      if ( (unsigned __int8)v6 >= *(_BYTE *)(v7 + 20) && (_BYTE)v6 != 0xFF )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      LOBYTE(a2) = v6;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, char))(*(_QWORD *)v7 + 24LL))(v7, a2, 1LL, a6, -1);
      if ( (_BYTE)v6 == 0xFF )
      {
        if ( a6 != 255 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 78;
        }
        *(_WORD *)(v7 + 22) |= (2 << *(_BYTE *)(v7 + 20)) - 1;
        memset(*(void **)(v7 + 48), 0, *(_QWORD *)(v7 + 40));
      }
      else
      {
        *(_WORD *)(v7 + 22) |= 1 << v6;
        if ( v6 >= *(_QWORD *)(v7 + 40) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 82;
        }
        *(_BYTE *)(v6 + *(_QWORD *)(v7 + 48)) &= 0xF0u;
        if ( v6 >= *(_QWORD *)(v7 + 80) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 82;
        }
        *(_QWORD *)(*(_QWORD *)(v7 + 88) + 8 * v6) = a6;
      }
    }
  }
  return a1;
}
