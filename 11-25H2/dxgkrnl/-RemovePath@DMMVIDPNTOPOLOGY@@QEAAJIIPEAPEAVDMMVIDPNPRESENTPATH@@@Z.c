/*
 * XREFs of ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402CE928
 * Callers:
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140186A28 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140252D98 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x140254678 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x14025F150 (-RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1402CE0CC (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1402CF450 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402D1CCC (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1403A8604 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x14001CE9C (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ @ 0x14001D080 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ.c)
 *     ?Remove@?$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x140038A84 (-Remove@-$Set@VDMMVIDPNPRESENTPATH@@@@QEAAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x14003EF8C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040B60 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1400412DC (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x14004A0C4 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstrai.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1403AA660 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 *v13; // rbx
  unsigned int *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int *v19; // rcx
  __int64 result; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF

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
      v24 = 0LL;
      if ( DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v5, &v24) < 0 || (v23 = v24) == 0 )
      {
        WdLogSingleEntry0(1LL);
        v23 = v24;
        WdLogGlobalForLineNumber = 808;
      }
      if ( v23 < 2 )
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
    v12 = (unsigned int)~(1 << (*(_DWORD *)(v9 + 104) - 1));
    *((_DWORD *)this + 49) &= v12;
    v13 = (__int64 *)((char *)this + 24);
    v14 = *(unsigned int **)(v9 + 96);
    if ( (__int64 *)*v13 != v13 )
    {
      v15 = *v13 - 8;
      if ( *v13 != 8 )
      {
        v12 = v14[6];
        while ( *(_DWORD *)(*(_QWORD *)(v15 + 96) + 24LL) != (_DWORD)v12 )
        {
          v21 = *(__int64 **)(v15 + 8);
          v15 = (__int64)(v21 - 1);
          if ( v21 == v13 )
            v15 = 0LL;
          if ( !v15 )
            goto LABEL_15;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 846;
      }
    }
LABEL_15:
    DMMVIDPNTARGET::_SetEmptyCofuncModeSet((DMMVIDPNTARGET *)v14, v12, v10, v11);
    v18 = *v13;
    v19 = *(unsigned int **)(v9 + 88);
    if ( (__int64 *)*v13 == v13 || (v18 -= 8LL) == 0 )
    {
LABEL_29:
      DMMVIDPNSOURCE::_SetEmptyCofuncModeSet((DMMVIDPNSOURCE *)v19, v18, v16, v17);
    }
    else
    {
      v16 = v19[6];
      while ( *(_DWORD *)(*(_QWORD *)(v18 + 88) + 24LL) != (_DWORD)v16 )
      {
        v22 = *(__int64 **)(v18 + 8);
        v18 = (__int64)(v22 - 1);
        if ( v22 == v13 )
          v18 = 0LL;
        if ( !v18 )
          goto LABEL_29;
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
