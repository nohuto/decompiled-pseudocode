/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1403AA77C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1403A8604 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x140184CDC (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402D597C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        VIDPN_MGR **this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rsi
  int PathSourceFromTarget; // eax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 result; // rax
  DMMVIDPNTARGET **Path; // rbp
  int v10; // eax
  __int64 v11; // rbp
  struct DXGADAPTER *v12; // rax

  v3 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1054;
  }
  memset(a3, 0, 0x1F0uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(this + 12), (unsigned int)v3);
  if ( PathSourceFromTarget == -1 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[6]);
    WdLogSingleEntry3(7LL, v3, ContainingAdapter, this);
    result = 3223192384LL;
    WdLogGlobalForLineNumber = 1070;
  }
  else
  {
    Path = (DMMVIDPNTARGET **)DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(this + 12), PathSourceFromTarget, v3);
    if ( !Path )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1082;
    }
    v10 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v11 = v10;
    if ( v10 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v12 = VIDPN_MGR::GetContainingAdapter(this[6]);
      WdLogSingleEntry4(3LL, v3, v12, this, v11);
      result = (unsigned int)v11;
      WdLogGlobalForLineNumber = 1092;
    }
  }
  return result;
}
