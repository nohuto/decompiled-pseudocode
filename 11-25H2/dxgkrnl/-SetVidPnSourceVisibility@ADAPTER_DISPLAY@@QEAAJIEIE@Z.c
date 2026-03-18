/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8
 * Callers:
 *     ADAPTER_DISPLAY_SetVidPnSourceVisibility @ 0x140058550 (ADAPTER_DISPLAY_SetVidPnSourceVisibility.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140197B38 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140252D98 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140257160 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1402D83A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1403058DC (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140312620 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x140312F00 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140329108 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140396F58 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1403A8604 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1403EEE1C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1400293A8 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x140050188 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1400529E0 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005385C (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14005C018 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkDisplayMuxReportFirstFramePresented @ 0x1400892B4 (DxgkDisplayMuxReportFirstFramePresented.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402CD624 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402D5A28 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x140313DC8 (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1403140E4 (-ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1403141BC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140314C90 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140316398 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceVisibility(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        BOOLEAN a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  char v10; // r15
  char v11; // r12
  __int64 v12; // rcx
  char v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // r15d
  ADAPTER_RENDER *v16; // r13
  __int64 v17; // rax
  DXGADAPTER *v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // eax
  const wchar_t *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // ebx
  char v34; // [rsp+51h] [rbp-40h]
  unsigned int v36[2]; // [rsp+58h] [rbp-39h] BYREF
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v37; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v38; // [rsp+68h] [rbp-29h]
  unsigned int v39; // [rsp+70h] [rbp-21h] BYREF
  ADAPTER_RENDER *v40; // [rsp+78h] [rbp-19h]
  struct _DXGKARG_SETPOINTERPOSITION v41; // [rsp+80h] [rbp-11h] BYREF

  v5 = *((_QWORD *)this + 16);
  v6 = a2;
  v7 = 3984LL * a2;
  v41 = 0LL;
  v37 = 0LL;
  v10 = *(_BYTE *)(v7 + v5 + 761);
  v34 = v10;
  *(_QWORD *)v36 = v7;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1839;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < GetNumVidPnSources()",
      1839LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3 && !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(this, v6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1840;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!Visible || IsVidPnSourceActive(VidPnSourceId)",
      1840LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v41.VidPnSourceId = v6;
  v37.VidPnSourceId = v6;
  v37.Visible = a3;
  v11 = 0;
  v38 = (unsigned __int8)v6 | (v10 != 0 ? 0x80000000 : 0) | (a3 != 0 ? 0x40000000 : 0);
  v41.Flags.Value = v41.Flags.Value & 0xFFFFFFFE | a3 & 1;
  v12 = *((_QWORD *)this + 2);
  if ( a5 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v12) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1861;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"IsCoreResourceExclusiveOwner()",
        1861LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v12 + 420) == 32902 && *(int *)(v12 + 2736) < 4864 )
  {
LABEL_10:
    v13 = 0;
    goto LABEL_11;
  }
  if ( DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v12) )
    v11 = v13;
LABEL_11:
  v14 = *((_QWORD *)this + 2);
  v15 = 0;
  v39 = 0;
  v16 = *(ADAPTER_RENDER **)(v14 + 3128);
  v40 = v16;
  if ( v16 && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1889;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"IsCoreResourceExclusiveOwner()",
        1889LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v17 = *((_QWORD *)this + 2);
    if ( v11 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v17 + 3128), 6, (unsigned int)v6, 1);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v17 + 3128), 0, 1 << v6, 0, 1 << v6);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)&v39, 1 << v6);
      v16 = v40;
      v15 = v39;
      v7 = *(_QWORD *)v36;
    }
  }
  if ( a3 )
  {
    v28 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v37);
    v23 = v28;
    if ( v28 >= 0 )
    {
      if ( ADAPTER_DISPLAY::IsPointerVisible(this, v6) )
      {
        v30 = *((_QWORD *)this + 16);
        v41.X = *(_DWORD *)(v7 + v30 + 768);
        v41.Y = *(_DWORD *)(v7 + v30 + 772);
        LODWORD(v23) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v41, v21);
        if ( (int)v23 < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1944;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 1944LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      if ( a4 == 0x2000 )
      {
        v36[0] = 0;
        v31 = 0LL;
        v32 = 1;
        while ( (int)DmmEnumClientVidPnPathTargetsFromSource(*((_QWORD **)this + 2), v6, v31, v36) >= 0 && v36[0] != -1 )
        {
          DxgkDisplayMuxReportFirstFramePresented(*(struct _LUID *)(*((_QWORD *)this + 2) + 412LL), v36[0]);
          v31 = v32++;
        }
      }
      goto LABEL_22;
    }
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 2), v28);
    v29 = L"Failed to enable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)";
    WdLogGlobalForLineNumber = 1932;
  }
  else
  {
    v18 = (DXGADAPTER *)*((_QWORD *)this + 2);
    if ( *((_BYTE *)v18 + 3049) )
    {
      if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(v18) )
        ADAPTER_DISPLAY::DisableMPOPlanes(this, v6, 0);
    }
    else
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v6);
    }
    ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v41, v19);
    v20 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v37);
    v23 = v20;
    if ( v20 >= 0 )
    {
LABEL_22:
      LOBYTE(v22) = a3;
      LOBYTE(v21) = v34;
      DisplayScenarioJournalVidPnSourceVisibility(
        *(_QWORD *)(*((_QWORD *)this + 2) + 412LL),
        (unsigned int)v6,
        v21,
        v22,
        a4);
      goto LABEL_23;
    }
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 2), v20);
    v29 = L"Failed to disable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)";
    WdLogGlobalForLineNumber = 1996;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v29, v6, *((_QWORD *)this + 2), v23, 0LL, 0LL);
  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)this, v6, 1);
LABEL_23:
  v24 = *((_QWORD *)this + 2);
  v25 = 0x200000000LL;
  if ( *(_QWORD *)(v24 + 4828) )
    v25 = *(unsigned int *)(v24 + 4836);
  DxgkLogCodePointPacketForSession(68, v25, v38, a4, v23, *(_QWORD *)(v24 + 412));
  v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 3128LL);
  if ( v26 && v11 )
    ADAPTER_RENDER::FlushScheduler(v26, 7, (unsigned int)v6, 1);
  if ( v15 )
    ADAPTER_RENDER::ResumeSchedulerForVidPnSource(v16, v15);
  return (unsigned int)v23;
}
