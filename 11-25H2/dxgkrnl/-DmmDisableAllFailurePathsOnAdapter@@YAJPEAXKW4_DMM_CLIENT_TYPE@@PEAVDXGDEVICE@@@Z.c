/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x140256A30
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1402DA8D0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140186A28 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402CE7D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402D12C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402D1388 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x14030C5F8 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x140312F00 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1403AA660 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v7; // r15
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  struct DMMVIDPN *v11; // rbx
  DMMVIDPNTOPOLOGY *v12; // r13
  int NumPathsFromSource; // eax
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  ADAPTER_DISPLAY *v17; // rax
  unsigned int v18; // esi
  char v19; // al
  _BYTE v21[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPN *v23; // [rsp+60h] [rbp-A0h] BYREF
  VIDPN_MGR *v24; // [rsp+68h] [rbp-98h]
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v27[272]; // [rsp+90h] [rbp-70h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4189;
  }
  if ( a4 && (*(_DWORD *)(a4 + 464) != 2 || *(_QWORD *)(a4 + 1880) != a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4192;
  }
  v24 = *(VIDPN_MGR **)(*(_QWORD *)(a1 + 3120) + 104LL);
  v7 = v24;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, (__int64)v24);
  v23 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v24);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    WdLogSingleEntry3(2LL, *(int *)(a1 + 416), *(unsigned int *)(a1 + 412), ClientVidPnFromLastClientCommitedVidPn);
    WdLogGlobalForLineNumber = 4218;
    goto LABEL_34;
  }
  v10 = 0;
  v11 = v23;
  v12 = (struct DMMVIDPN *)((char *)v23 + 96);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 3120) + 96LL) )
  {
    while ( 1 )
    {
      if ( _bittest(&a2, v10) )
      {
        v22 = 0LL;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v12, v10, &v22);
        if ( NumPathsFromSource >= 0 )
          goto LABEL_15;
        if ( NumPathsFromSource != -1071774919 || v22 )
          break;
      }
LABEL_20:
      if ( ++v10 >= *(_DWORD *)(*(_QWORD *)(a1 + 3120) + 96LL) )
      {
        v7 = v24;
        goto LABEL_22;
      }
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4246;
LABEL_15:
    if ( v22 )
    {
      LOBYTE(v14) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        v26,
        ((unsigned __int64)v12 + 56) & -(__int64)(v12 != 0LL),
        v14);
      v15 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v12, v10);
      if ( ((v15 + 0x80000000) & 0x80000000) == 0 && v15 != -1071774919 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4263;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v26);
    }
    goto LABEL_20;
  }
LABEL_22:
  memset(v27, 0, 0x104uLL);
  v21[0] = 0;
  v16 = VIDPN_MGR::SetTimingsFromVidPn(v7, 0LL, 1LL, v11, v27, v21, 0, a4, 0LL);
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, v16);
    v17 = *(ADAPTER_DISPLAY **)(a1 + 3120);
    v18 = 0;
    for ( WdLogGlobalForLineNumber = 4285; v18 < *((_DWORD *)v17 + 24); ++v18 )
    {
      if ( _bittest(&a2, v18) )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v17, v18, 0, 0LL, 0, 0);
      v17 = *(ADAPTER_DISPLAY **)(a1 + 3120);
    }
  }
  v19 = v21[0];
  if ( (v21[0] & 1) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v19 = v21[0];
    WdLogGlobalForLineNumber = 4299;
  }
  if ( (v19 & 2) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4300;
  }
  if ( (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v7, v11) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4306;
  }
  v9 = 0;
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v23, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
  return v9;
}
