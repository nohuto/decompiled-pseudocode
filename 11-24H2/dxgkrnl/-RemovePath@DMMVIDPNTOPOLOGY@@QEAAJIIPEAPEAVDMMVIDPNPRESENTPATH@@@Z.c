/*
 * XREFs of ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14031A9CC
 * Callers:
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140188D58 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140259BD0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025B514 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x140266050 (-RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14030F324 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x140319430 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x14031AC7C (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403A8F14 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x14000D8BC (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ @ 0x14000DAA0 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ.c)
 *     ?Remove@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x140038710 (-Remove@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x14003E97C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x140040D8C (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x14004983C (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstrai.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140311390 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemovePath(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct DMMVIDPNPRESENTPATH **a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  ProtectableFromChange *v8; // r15
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  DMMVIDPNTARGET *v11; // rbp
  __int64 v12; // rcx
  DMMVIDPNSOURCE *v13; // rcx
  __int64 v14; // rdx
  __int64 result; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  if ( a4 )
    *a4 = 0LL;
  v8 = (DMMVIDPNTOPOLOGY *)((char *)this + 56);
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u) )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 778;
    return 3221225506LL;
  }
  if ( DMMVIDPNTOPOLOGY::FindPath(this, v5, v4) )
  {
    if ( *((_BYTE *)this + 76) <= 2u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 306;
    }
    if ( (*(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)this + 80, 2uLL) & 1) != 0 )
    {
      v19 = 0LL;
      if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v5, &v19) < 0 || (v18 = v19) == 0 )
      {
        WdLogSingleEntry0(1LL);
        v18 = v19;
        WdLogGlobalForLineNumber = 808;
      }
      if ( v18 < 2 )
      {
        WdLogSingleEntry3(2LL, this, v5, v4);
        WdLogGlobalForLineNumber = 815;
        return 3221225506LL;
      }
    }
    v9 = Set<DMMVIDPNPRESENTPATH>::Remove((__int64)this);
    if ( !v9 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 826;
    }
    *((_DWORD *)this + 49) &= ~(1 << (*(_DWORD *)(v9 + 104) - 1));
    v10 = (_QWORD *)((char *)this + 24);
    v11 = *(DMMVIDPNTARGET **)(v9 + 96);
    if ( (_QWORD *)*v10 != v10 )
    {
      v12 = *v10 - 8LL;
      if ( *v10 != 8LL )
      {
        while ( *(_DWORD *)(*(_QWORD *)(v12 + 96) + 24LL) != *((_DWORD *)v11 + 6) )
        {
          v16 = *(_QWORD **)(v12 + 8);
          v12 = (__int64)(v16 - 1);
          if ( v16 == v10 )
            v12 = 0LL;
          if ( !v12 )
            goto LABEL_14;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 846;
      }
    }
LABEL_14:
    DMMVIDPNTARGET::_SetEmptyCofuncModeSet(v11);
    v13 = *(DMMVIDPNSOURCE **)(v9 + 88);
    if ( (_QWORD *)*v10 == v10 || (v14 = *v10 - 8LL, *v10 == 8LL) )
    {
LABEL_27:
      DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(v13);
    }
    else
    {
      while ( *(_DWORD *)(*(_QWORD *)(v14 + 88) + 24LL) != *((_DWORD *)v13 + 6) )
      {
        v17 = *(_QWORD **)(v14 + 8);
        v14 = (__int64)(v17 - 1);
        if ( v17 == v10 )
          v14 = 0LL;
        if ( !v14 )
          goto LABEL_27;
      }
    }
    if ( a4 )
      *a4 = (struct DMMVIDPNPRESENTPATH *)v9;
    else
      (**(void (__fastcall ***)(__int64, __int64))v9)(v9, 1LL);
    ProtectableFromChange::OnModifyingActionCompletion(v8, 2u);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, v5, v4, this);
    result = 3223192359LL;
    WdLogGlobalForLineNumber = 791;
  }
  return result;
}
