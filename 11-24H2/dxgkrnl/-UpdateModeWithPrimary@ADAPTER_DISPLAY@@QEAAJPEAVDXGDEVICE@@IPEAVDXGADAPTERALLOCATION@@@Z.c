/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x14030B7B8
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140380FF4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1404229E8 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004EF94 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x140056E7C (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ.c)
 *     ?VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140058DE0 (-VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x140059D08 (-VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCE.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14028EBBC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14028FB10 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14030C710 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x140382EA0 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rsi
  __int64 v6; // r15
  PERESOURCE v9; // rbx
  VIDSCH_EXPORT **Blink; // r14
  PERESOURCE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v15; // rbx
  int v17; // eax
  __int64 v18; // r14
  int v19; // eax
  unsigned __int64 *v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-50h]
  __int64 LowPart; // [rsp+38h] [rbp-40h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v23; // [rsp+80h] [rbp+8h] BYREF

  v5 = a3;
  LODWORD(v6) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2872;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"this->IsCoreResourceExclusiveOwner()",
      2872LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2873;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      2873LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this[2] != a2[237] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2874;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
      2874LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = a2[2][2];
  Blink = (VIDSCH_EXPORT **)v9[30].SystemResourcesList.Blink;
  if ( !Blink || !ADAPTER_RENDER::IsCoreResourceExclusiveOwner((ADAPTER_RENDER *)v9[30].SystemResourcesList.Blink) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2880;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pRenderAdapter != NULL) && pRenderAdapter->IsRenderAdapter() && pRenderCore->IsCoreResourceExclusiveOwner()",
      2880LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = this[2];
  if ( v11[391] )
  {
    if ( v11 != (PERESOURCE *)v9 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2887;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"this->GetAdapter() == pRenderAdapter",
        2887LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)v9[30].SystemResourcesList.Blink);
  }
  ADAPTER_RENDER::FlushScheduler((__int64)Blink, 8, (unsigned int)v5, 0);
  if ( !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], v5) )
    return 0LL;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( v13 )
    {
      VIDSCH_EXPORT::VidSchRequestDeferredVidPnSourceVisibility(Blink[92], Blink[93], v5);
    }
    else
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v12 + 3120) + 464LL);
      if ( v14 )
        _InterlockedExchange((volatile __int32 *)(3040 * v5 + *(_QWORD *)(v14 + 8) + 1080), 1);
    }
  }
  else
  {
    if ( v13 )
    {
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(&v23);
      v15 = v23;
      if ( !v23 )
      {
        WdLogSingleEntry1(6LL, this);
        WdLogGlobalForLineNumber = 2936;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          L"Adapter 0x%I64x: Out of memory allocating DXGKARG_SETVIDPNSOURCEADDRESS",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        return 3221225495LL;
      }
      if ( !a4 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2941;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pPrimaryAllocation != NULL",
          2941LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v15->VidPnSourceId = v5;
      v15->hAllocation = (HANDLE)*((_QWORD *)a4 + 2);
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        Blink[95],
        Blink[96],
        *((struct VIDMM_MULTI_GLOBAL_ALLOC **)a4 + 1),
        &v15->PrimarySegment,
        &v15->PrimaryAddress,
        0LL);
      v15->Flags.Value |= 1u;
      v17 = VIDSCH_EXPORT::VidSchSetVidPnSourceAddress(Blink[92], Blink[93], v15);
      v18 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry4(2LL, v17, this[2], v5, v15->PrimaryAddress.LowPart);
        LowPart = v15->PrimaryAddress.LowPart;
        v20 = (unsigned __int64 *)this[2];
        WdLogGlobalForLineNumber = 2958;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Status=0x%I64x Adapter 0x%I64x: DdiSetVidPnSourceAddress failed 0x%I64x 0x%I64x",
          v18,
          (__int64)v20,
          v5,
          LowPart,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
        return (unsigned int)v18;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
    }
    v19 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0);
    v6 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry3(2LL, v19, this[2], v5);
      v21 = (unsigned __int64 *)this[2];
      WdLogGlobalForLineNumber = 2971;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Status=0x%I64x Adapter 0x%I64x: SetVidPnSourceVisibility TRUE failed 0x%I64x",
        v6,
        (__int64)v21,
        v5,
        0LL,
        0LL);
    }
  }
  ADAPTER_DISPLAY::UpdateGammaRamp((void **)this, v5);
  return (unsigned int)v6;
}
