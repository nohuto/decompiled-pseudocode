/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403DA174
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1402521D8 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1402525F8 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x140045D68 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x140062CC8 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x14008DA4C (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x140252C5C (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1402C28F0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402C51C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402D0358 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402D12C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402D1388 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403DA558 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1403DA7A4 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::RecommendFunctionalVidPn(
        struct _KTHREAD **this,
        DXGK_RECOMMENDFUNCTIONALVIDPN_REASON a2,
        void *const a3,
        UINT a4,
        struct DMMVIDPN **const a5)
{
  struct DMMVIDPN **v5; // r12
  int ClientVidPn; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  DMMVIDPN *v16; // rdi
  DXGADAPTER *ContainingAdapter; // r14
  __int64 NumTargetsWithMonitorObjects; // rax
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // esi
  __int64 v22; // r9
  DMMVIDPN *v24; // rax
  unsigned __int8 v25; // r8
  DMMVIDPN *v26; // rax
  struct DMMVIDPN **v27; // rsi
  __int64 v28; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v29; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v30[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v31; // [rsp+68h] [rbp-1h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2029;
  }
  *v5 = 0LL;
  v29 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(this, (__int64 *)&v29);
  v15 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = ClientVidPn;
    WdLogGlobalForLineNumber = 2042;
LABEL_32:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v29, 0LL);
    return v15;
  }
  v16 = v29;
  *(_QWORD *)&v31.NumberOfVidPnTargets = 0LL;
  *((_DWORD *)&v31.RequestReason + 1) = 0;
  *(&v31.PrivateDriverDataSize + 1) = 0;
  v31.pVidPnTargetPrioritizationVector = 0LL;
  if ( v29 == (DMMVIDPN *)-88LL )
    v31.hRecommendedFunctionalVidPn = 0LL;
  else
    v31.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v29;
  v31.RequestReason = a2;
  v31.pPrivateDriverData = a3;
  v31.PrivateDriverDataSize = a4;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2067;
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)v16 + 172)) - 1) & *((_WORD *)v16 + 87)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2076;
  }
  NumTargetsWithMonitorObjects = VIDPN_MGR::GetNumTargetsWithMonitorObjects((VIDPN_MGR *)this);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v30,
    ((unsigned __int64)v16 + 152) & -(__int64)((DMMVIDPN *)((char *)v16 + 96) != 0LL),
    1u,
    v19,
    v28,
    NumTargetsWithMonitorObjects);
  if ( !this[1] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v20 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(this[1], &v31);
  v21 = v20;
  if ( v20 == -1071774941 )
  {
    WdLogSingleEntry1(7LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 2090;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v30);
    v15 = -1071774941;
    goto LABEL_32;
  }
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(2LL, ContainingAdapter, v20);
    WdLogGlobalForLineNumber = 2097;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v30);
    v15 = v21;
    goto LABEL_32;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v30);
  if ( !DMMVIDPN::IsFunctional(v16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2104;
  }
  if ( DMMVIDPN::IsFunctional(v16) )
  {
    a5 = 0LL;
    v24 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, 256LL, v22);
    if ( v24 )
      v26 = DMMVIDPN::DMMVIDPN(v24, (const struct DMMVIDPNSOURCESET **)v16, v25);
    else
      v26 = 0LL;
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v26);
    v27 = a5;
    if ( a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v16 + 96), a2);
        a5 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 32, (__int64)v27);
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
        *v5 = v16;
        v15 = 0;
        v29 = 0LL;
      }
      else
      {
        WdLogSingleEntry3(7LL, v27, v16, *((int *)v27 + 20));
        v15 = *((_DWORD *)v27 + 20);
        WdLogGlobalForLineNumber = 2148;
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(6LL, v16);
      WdLogGlobalForLineNumber = 2138;
      auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
      v15 = -1073741801;
    }
    goto LABEL_32;
  }
  WdLogSingleEntry2(2LL, ContainingAdapter, -1071774941LL);
  WdLogGlobalForLineNumber = 2111;
  DxgCreateLiveDumpWithWdLogs2(403LL, 2060LL, 0LL, 0LL, 0LL, 0LL);
  if ( v16 )
    ReferenceCounted::Release((DMMVIDPN *)((char *)v16 + 24));
  return 3223192355LL;
}
