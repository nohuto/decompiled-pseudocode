/*
 * XREFs of ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403D3284
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x140259010 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x140259430 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1400635B8 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x14008ED1C (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x140259A94 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x14031638C (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x140316E98 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x140318AE0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1403627C0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403D3668 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z @ 0x1403D38B4 (-DdiRecommendFunctionalVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDFUNCTIONALVIDPN@@@Z.c)
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
  DMMVIDPN *v23; // rax
  unsigned __int8 v24; // r8
  DMMVIDPN *v25; // rax
  struct DMMVIDPN **v26; // rsi
  __int64 v27; // [rsp+28h] [rbp-41h]
  DMMVIDPN *v28; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v29[24]; // [rsp+50h] [rbp-19h] BYREF
  _DXGKARG_RECOMMENDFUNCTIONALVIDPN v30; // [rsp+68h] [rbp-1h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2029;
  }
  *v5 = 0LL;
  v28 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(this, (__int64 *)&v28);
  v15 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = ClientVidPn;
    WdLogGlobalForLineNumber = 2042;
LABEL_32:
    auto_rc<DMMVIDPN>::reset((__int64 *)&v28, 0LL);
    return v15;
  }
  v16 = v28;
  *(_QWORD *)&v30.NumberOfVidPnTargets = 0LL;
  *((_DWORD *)&v30.RequestReason + 1) = 0;
  *(&v30.PrivateDriverDataSize + 1) = 0;
  v30.pVidPnTargetPrioritizationVector = 0LL;
  if ( v28 == (DMMVIDPN *)-88LL )
    v30.hRecommendedFunctionalVidPn = 0LL;
  else
    v30.hRecommendedFunctionalVidPn = (D3DKMDT_HVIDPN)v28;
  v30.RequestReason = a2;
  v30.pPrivateDriverData = a3;
  v30.PrivateDriverDataSize = a4;
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
    (__int64)v29,
    ((unsigned __int64)v16 + 152) & -(__int64)((DMMVIDPN *)((char *)v16 + 96) != 0LL),
    1u,
    v19,
    v27,
    NumTargetsWithMonitorObjects);
  if ( !this[1] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v20 = ADAPTER_DISPLAY::DdiRecommendFunctionalVidPn(this[1], &v30);
  v21 = v20;
  if ( v20 == -1071774941 )
  {
    WdLogSingleEntry1(7LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 2090;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v29);
    v15 = -1071774941;
    goto LABEL_32;
  }
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(2LL, ContainingAdapter, v20);
    WdLogGlobalForLineNumber = 2097;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v29);
    v15 = v21;
    goto LABEL_32;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v29);
  if ( !DMMVIDPN::IsFunctional(v16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2104;
  }
  if ( DMMVIDPN::IsFunctional(v16) )
  {
    a5 = 0LL;
    v23 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, 256LL);
    if ( v23 )
      v25 = DMMVIDPN::DMMVIDPN(v23, (const struct DMMVIDPNSOURCESET **)v16, v24);
    else
      v25 = 0LL;
    auto_rc<DMMVIDPN>::reset((__int64 *)&a5, (__int64)v25);
    v26 = a5;
    if ( a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DMMVIDPN **const))a5[9])(a5 + 9) )
      {
        DmmLogDriverRecommendVidPnPacket((DMMVIDPN *)((char *)v16 + 96), a2);
        a5 = 0LL;
        Queue<DMMVIDPN>::Enqueue(this + 32, (__int64)v26);
        auto_rc<DMMVIDPN>::reset((__int64 *)&a5, 0LL);
        *v5 = v16;
        v15 = 0;
        v28 = 0LL;
      }
      else
      {
        WdLogSingleEntry3(7LL, v26, v16, *((int *)v26 + 20));
        v15 = *((_DWORD *)v26 + 20);
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
