/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402D1CCC
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x1402D2570 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140030B40 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003EB9C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402C51C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1402CD5FC (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402CE7D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402CE928 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CFC04 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402D12C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402D1388 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402D22CC (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1402D2378 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_IsBetterAnchorTarget@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402D23AC (-_IsBetterAnchorTarget@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAA_NAEBVDXGADAPTER@@AEBVDMMVIDEO.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1402D24A4 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402D597C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *a1,
        _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  VIDPN_MGR *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  unsigned int PathSourceFromTarget; // eax
  unsigned int v16; // r15d
  struct DMMVIDPNTOPOLOGY *v17; // rdi
  unsigned int v18; // r8d
  __int64 v19; // rdi
  DXGMONITOR *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  char IsVirtualModeSupportDisabled; // di
  char v25; // dl
  DMMVIDPNTOPOLOGY *v26; // rdx
  char v27; // r8
  char v28; // r10
  __int64 v29; // r9
  unsigned int v30; // edx
  DMMVIDPNTOPOLOGY *v31; // r15
  __int64 v32; // [rsp+20h] [rbp-79h]
  __int64 v33; // [rsp+50h] [rbp-49h] BYREF
  __int64 v34; // [rsp+58h] [rbp-41h] BYREF
  DMMVIDPNTOPOLOGY *v35; // [rsp+60h] [rbp-39h]
  DMMVIDPNTOPOLOGY *v36; // [rsp+68h] [rbp-31h]
  __int64 v37; // [rsp+70h] [rbp-29h] BYREF
  _QWORD *v38; // [rsp+78h] [rbp-21h]
  DXGMONITOR *v39; // [rsp+80h] [rbp-19h]
  __int64 v40; // [rsp+88h] [rbp-11h]
  DXGMONITOR *v41[3]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v42[72]; // [rsp+A8h] [rbp+Fh] BYREF
  unsigned int v43; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v44; // [rsp+110h] [rbp+77h]
  int AdapterPreference; // [rsp+118h] [rbp+7Fh]

  AdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference();
  if ( AdapterPreference < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(VIDPN_MGR **)(*(_QWORD *)(v4 + 3120) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v37, (__int64)v6);
  v7 = *((_QWORD *)a1 + 390);
  v8 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  if ( *(_BYTE *)(v7 + 290) )
  {
    v9 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6, &v34);
    v8 = v34;
    if ( v9 >= 0 )
    {
      if ( !v34 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 649;
      }
      v36 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
    }
  }
  v33 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPn((struct _KTHREAD **)v6, &v33);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v35 = (DMMVIDPNTOPOLOGY *)(v33 + 96);
    if ( v33 == -96 )
    {
      WdLogSingleEntry5(2LL, v10, a1, *((int *)a1 + 104), *((unsigned int *)a1 + 103), a2);
      WdLogGlobalForLineNumber = 676;
      auto_rc<DMMVIDPN>::reset(&v33, 0LL);
      auto_rc<DMMVIDPN>::reset(&v34, 0LL);
      goto LABEL_30;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 15) + 72LL));
    v12 = (_QWORD *)*((_QWORD *)v6 + 15);
    v38 = v12;
    v13 = (_QWORD *)v12[3];
    if ( v13 == v12 + 3 )
      NextTarget = 0LL;
    else
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v13 - 1);
    while ( 1 )
    {
      if ( !NextTarget )
      {
        if ( v12 )
          ReferenceCounted::Release((ReferenceCounted *)(v12 + 8));
        if ( v33 )
          ReferenceCounted::Release((ReferenceCounted *)(v33 + 24));
        if ( v34 )
          ReferenceCounted::Release((ReferenceCounted *)(v34 + 24));
        v11 = 0;
        goto LABEL_30;
      }
      v43 = 0;
      if ( DMMVIDEOPRESENTTARGET::IsMonitorConnected(NextTarget, (enum _DMM_VIDPN_MONITOR_TYPE *)&v43) )
      {
        if ( !*((_DWORD *)NextTarget + 23) )
        {
          v44 = v43;
          if ( (unsigned __int8)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_IsBetterAnchorTarget(a2, a1, NextTarget, v43) )
            break;
        }
      }
LABEL_13:
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v12, NextTarget);
    }
    if ( !v36
      || (PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v36, *((_DWORD *)NextTarget + 6)),
          v16 = PathSourceFromTarget,
          PathSourceFromTarget == -1) )
    {
      v17 = v35;
    }
    else
    {
      v17 = v35;
      if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                  v6,
                  v35,
                  PathSourceFromTarget,
                  *((_DWORD *)NextTarget + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE) >= 0 )
        goto LABEL_19;
    }
    v16 = 0;
    if ( *(_DWORD *)(*((_QWORD *)a1 + 390) + 96LL) )
    {
      do
      {
        if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                    v6,
                    v17,
                    v16,
                    *((_DWORD *)NextTarget + 6),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE) >= 0 )
          break;
        ++v16;
      }
      while ( v16 < *(_DWORD *)(*((_QWORD *)a1 + 390) + 96LL) );
      v12 = v38;
    }
LABEL_19:
    v18 = *((_DWORD *)NextTarget + 6);
    if ( v18 == -1 )
      goto LABEL_51;
    v19 = *((_QWORD *)a1 + 390);
    v40 = v19;
    if ( !v19 )
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
LABEL_51:
      WdLogSingleEntry3(2LL, *((unsigned int *)NextTarget + 6), *((int *)a1 + 104), *((unsigned int *)a1 + 103));
      WdLogGlobalForLineNumber = 777;
      if ( v12 )
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 8));
      if ( v33 )
        ReferenceCounted::Release((ReferenceCounted *)(v33 + 24));
      if ( v34 )
        ReferenceCounted::Release((ReferenceCounted *)(v34 + 24));
      v11 = -1073741811;
      goto LABEL_30;
    }
    MONITOR_MGR::AcquireMonitorShared(v41, (__int64)a1, v18, 1u);
    v20 = v41[0];
    v39 = v41[0];
    if ( v41[0] )
    {
      if ( *((_DWORD *)v41[0] + 70) != 1 )
      {
        WdLogSingleEntry0(1LL);
        v20 = v39;
        WdLogGlobalForLineNumber = 5268;
      }
      IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v20);
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v41);
      if ( IsVirtualModeSupportDisabled )
      {
        LOBYTE(v21) = 1;
        LOBYTE(v22) = 1;
LABEL_47:
        *(_QWORD *)a2 = *(_QWORD *)((char *)a1 + 412);
        a2[2] = v16;
        a2[3] = *((_DWORD *)NextTarget + 6);
        a2[4] = *((_DWORD *)NextTarget + 20);
        a2[5] = *((_DWORD *)NextTarget + 21);
        a2[6] = *((_DWORD *)NextTarget + 25);
        a2[7] = *((_DWORD *)NextTarget + 31);
        a2[8] = v44;
        a2[9] = AdapterPreference;
        *((_BYTE *)a2 + 40) = *((_BYTE *)NextTarget + 405);
        a2[11] = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference(a1, v21, v22);
        *((_BYTE *)a2 + 41) = v25 ^ 1;
        v26 = v35;
        *((_BYTE *)a2 + 48) = v27 ^ 1;
        *((_BYTE *)a2 + 42) = v28 ^ 1;
        *((_BYTE *)a2 + 49) = *((_BYTE *)NextTarget + 412);
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v42,
          (__int64)v26 + 56,
          2u,
          v29,
          v32,
          255LL);
        v30 = v16;
        v31 = v35;
        if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v35, v30, *((_DWORD *)NextTarget + 6), 0LL) < 0 || *((_QWORD *)v31 + 5) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 808;
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v42);
        goto LABEL_13;
      }
      v19 = v40;
    }
    else
    {
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v41);
    }
    LOBYTE(v21) = *(_BYTE *)(v19 + 289) == 0;
    LOBYTE(v22) = *(_BYTE *)(v19 + 290) == 0;
    goto LABEL_47;
  }
  WdLogSingleEntry5(2LL, v10, a1, *((int *)a1 + 104), *((unsigned int *)a1 + 103), a2);
  WdLogGlobalForLineNumber = 663;
  if ( v33 )
    ReferenceCounted::Release((ReferenceCounted *)(v33 + 24));
  if ( v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 24));
LABEL_30:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v37 + 40));
  return v11;
}
