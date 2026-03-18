/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140329108
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140311874 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x140425B64 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F5A4 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x14005766C (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ.c)
 *     ?VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140059320 (-VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x14005A308 (-VidSchSetVidPnSourceAddress@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEBU_DXGKARG_SETVIDPNSOURCE.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D74E8 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14032A060 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035601C (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1403975D4 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
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
  __int64 v14; // r9
  __int64 v15; // rdx
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v16; // rbx
  int v18; // eax
  __int64 v19; // r14
  int v20; // eax
  unsigned __int64 *v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 *v22; // [rsp+28h] [rbp-50h]
  __int64 LowPart; // [rsp+38h] [rbp-40h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESS *v24; // [rsp+80h] [rbp+8h] BYREF

  v5 = a3;
  LODWORD(v6) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2881;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"this->IsCoreResourceExclusiveOwner()",
      2881LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2882;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      2882LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this[2] != a2[235] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2883;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"this->GetAdapter() == pDevice->GetDisplayAdapter(VidPnSourceId)",
      2883LL,
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
    WdLogGlobalForLineNumber = 2889;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pRenderAdapter != NULL) && pRenderAdapter->IsRenderAdapter() && pRenderCore->IsCoreResourceExclusiveOwner()",
      2889LL,
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
      WdLogGlobalForLineNumber = 2896;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"this->GetAdapter() == pRenderAdapter",
        2896LL,
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
      v15 = *(_QWORD *)(*(_QWORD *)(v12 + 3120) + 456LL);
      if ( v15 )
        _InterlockedExchange((volatile __int32 *)(2968 * v5 + *(_QWORD *)(v15 + 8) + 1008), 1);
    }
  }
  else
  {
    if ( v13 )
    {
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(
        &v24,
        v12,
        v13,
        v14);
      v16 = v24;
      if ( !v24 )
      {
        WdLogSingleEntry1(6LL, this);
        WdLogGlobalForLineNumber = 2945;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
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
        WdLogGlobalForLineNumber = 2950;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pPrimaryAllocation != NULL", 2950LL, 0LL, 0LL, 0LL, 0LL);
      }
      v16->VidPnSourceId = v5;
      v16->hAllocation = (HANDLE)*((_QWORD *)a4 + 2);
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        Blink[95],
        Blink[96],
        *((struct VIDMM_MULTI_GLOBAL_ALLOC **)a4 + 1),
        &v16->PrimarySegment,
        &v16->PrimaryAddress,
        0LL);
      v16->Flags.Value |= 1u;
      v18 = VIDSCH_EXPORT::VidSchSetVidPnSourceAddress(Blink[92], Blink[93], v16);
      v19 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry4(2LL, v18, this[2], v5, v16->PrimaryAddress.LowPart);
        LowPart = v16->PrimaryAddress.LowPart;
        v21 = (unsigned __int64 *)this[2];
        WdLogGlobalForLineNumber = 2967;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Status=0x%I64x Adapter 0x%I64x: DdiSetVidPnSourceAddress failed 0x%I64x 0x%I64x",
          v19,
          (__int64)v21,
          v5,
          LowPart,
          0LL);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
        return (unsigned int)v19;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
    }
    v20 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0);
    v6 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry3(2LL, v20, this[2], v5);
      v22 = (unsigned __int64 *)this[2];
      WdLogGlobalForLineNumber = 2980;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Status=0x%I64x Adapter 0x%I64x: SetVidPnSourceVisibility TRUE failed 0x%I64x",
        v6,
        (__int64)v22,
        v5,
        0LL,
        0LL);
    }
  }
  ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v5);
  return (unsigned int)v6;
}
