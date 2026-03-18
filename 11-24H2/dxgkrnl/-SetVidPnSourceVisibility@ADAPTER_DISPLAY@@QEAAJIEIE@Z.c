/*
 * XREFs of ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC
 * Callers:
 *     ADAPTER_DISPLAY_SetVidPnSourceVisibility @ 0x140057FD0 (ADAPTER_DISPLAY_SetVidPnSourceVisibility.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140199FC4 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140259BD0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025DFE4 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x14028EE4C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x14028FFE0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402903F4 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x14030B7B8 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14030F324 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140381DCC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140382824 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1403A31FC (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140029B50 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x14004FC08 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x140052690 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005350C (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14005BA78 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkDisplayMuxReportFirstFramePresented @ 0x14008999C (DxgkDisplayMuxReportFirstFramePresented.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z @ 0x1402912BC (-DdiSetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEVISIBILITY@@@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402915D8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1402918D8 (-ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1402919B0 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1402FF124 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1402FFD84 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x14031592C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
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
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  int v27; // eax
  const wchar_t *v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  unsigned int v31; // ebx
  char v33; // [rsp+51h] [rbp-40h]
  unsigned int v35[2]; // [rsp+58h] [rbp-39h] BYREF
  _DXGKARG_SETVIDPNSOURCEVISIBILITY v36; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v37; // [rsp+68h] [rbp-29h]
  unsigned int v38; // [rsp+70h] [rbp-21h] BYREF
  ADAPTER_RENDER *v39; // [rsp+78h] [rbp-19h]
  struct _DXGKARG_SETPOINTERPOSITION v40; // [rsp+80h] [rbp-11h] BYREF

  v5 = *((_QWORD *)this + 16);
  v6 = a2;
  v7 = 4024LL * a2;
  v40 = 0LL;
  v36 = 0LL;
  v10 = *(_BYTE *)(v7 + v5 + 761);
  v33 = v10;
  *(_QWORD *)v35 = v7;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1842;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < GetNumVidPnSources()",
      1842LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3 && !(unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(this, v6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1843;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!Visible || IsVidPnSourceActive(VidPnSourceId)",
      1843LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v40.VidPnSourceId = v6;
  v36.VidPnSourceId = v6;
  v36.Visible = a3;
  v11 = 0;
  v37 = (unsigned __int8)v6 | (v10 != 0 ? 0x80000000 : 0) | (a3 != 0 ? 0x40000000 : 0);
  v40.Flags.Value = v40.Flags.Value & 0xFFFFFFFE | a3 & 1;
  v12 = *((_QWORD *)this + 2);
  if ( a5 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v12) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1864;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"IsCoreResourceExclusiveOwner()",
        1864LL,
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
  v38 = 0;
  v16 = *(ADAPTER_RENDER **)(v14 + 3128);
  v39 = v16;
  if ( v16 && v13 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1892;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"IsCoreResourceExclusiveOwner()",
        1892LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v17 = *((_QWORD *)this + 2);
    if ( v11 )
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v17 + 3128), 6LL, (unsigned int)v6);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v17 + 3128), 0, 1 << v6, 0, 1 << v6);
      CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)&v38, 1 << v6);
      v16 = v39;
      v15 = v38;
      v7 = *(_QWORD *)v35;
    }
  }
  if ( a3 )
  {
    v27 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v36);
    v22 = v27;
    if ( v27 >= 0 )
    {
      if ( ADAPTER_DISPLAY::IsPointerVisible(this, v6) )
      {
        v29 = *((_QWORD *)this + 16);
        v40.X = *(_DWORD *)(v7 + v29 + 768);
        v40.Y = *(_DWORD *)(v7 + v29 + 772);
        LODWORD(v22) = ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v40);
        if ( (int)v22 < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1947;
          DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 1947LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      if ( a4 == 0x2000 )
      {
        v35[0] = 0;
        v30 = 0LL;
        v31 = 1;
        while ( (int)DmmEnumClientVidPnPathTargetsFromSource(*((void *const *)this + 2), v6, v30, v35) >= 0
             && v35[0] != -1 )
        {
          DxgkDisplayMuxReportFirstFramePresented(*(struct _LUID *)(*((_QWORD *)this + 2) + 412LL), v35[0]);
          v30 = v31++;
        }
      }
      goto LABEL_22;
    }
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 2), v27);
    v28 = L"Failed to enable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)";
    WdLogGlobalForLineNumber = 1935;
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
    ADAPTER_DISPLAY::DdiSetPointerPosition(this, &v40);
    v19 = ADAPTER_DISPLAY::DdiSetVidPnSourceVisibility(this, &v36);
    v22 = v19;
    if ( v19 >= 0 )
    {
LABEL_22:
      LOBYTE(v21) = a3;
      LOBYTE(v20) = v33;
      DisplayScenarioJournalVidPnSourceVisibility(
        *(_QWORD *)(*((_QWORD *)this + 2) + 412LL),
        (unsigned int)v6,
        v20,
        v21,
        a4);
      goto LABEL_23;
    }
    WdLogSingleEntry3(2LL, v6, *((_QWORD *)this + 2), v19);
    v28 = L"Failed to disable scanning from primary on source 0x%I64x on adapter 0x%I64x (status = 0x%I64x)";
    WdLogGlobalForLineNumber = 1999;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v28, v6, *((_QWORD *)this + 2), v22, 0LL, 0LL);
  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)this, v6, 1);
LABEL_23:
  v23 = *((_QWORD *)this + 2);
  v24 = 0x200000000LL;
  if ( *(_QWORD *)(v23 + 4828) )
    v24 = *(unsigned int *)(v23 + 4836);
  DxgkLogCodePointPacketForSession(68, v24, v37, a4, v22, *(_QWORD *)(v23 + 412));
  v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 3128LL);
  if ( v25 && v11 )
    ADAPTER_RENDER::FlushScheduler(v25, 7LL, (unsigned int)v6);
  if ( v15 )
    ADAPTER_RENDER::ResumeSchedulerForVidPnSource(v16, v15);
  return (unsigned int)v22;
}
