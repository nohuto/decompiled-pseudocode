/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140381DCC
 * Callers:
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403D47D8 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011930 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1400119E0 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140036564 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051A2C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005350C (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14005C42C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14019B720 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1401BAED0 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1402919B0 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1402FD478 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x140380550 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1403823DC (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140382824 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x140382EA0 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  struct DXGDEVICE *VidPnSourceOwner; // rbp
  char v6; // r12
  char *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int8 IsLegacyDisplayStateSynchronization; // di
  struct ADAPTER_RENDER *v12; // r9
  bool v13; // bl
  unsigned int v14; // r9d
  int v15; // eax
  int v16; // r8d
  struct COREDEVICEACCESS *v17; // r9
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // [rsp+28h] [rbp-50h]

  VidPnSourceOwner = a2;
  v6 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3522;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDevice != NULL", 3522LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = (char *)a3 + 48;
  if ( !a3 || !*(_QWORD *)v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3523;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pDxgAllocation != NULL) && (pDxgAllocation->m_pAllocation != NULL)",
      3523LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 3) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3524;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDxgAllocation->m_pAllocation->m_CddPrimary || pDxgAllocation->m_pAllocation->m_Primary",
      3524LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*((ADAPTER_RENDER **)VidPnSourceOwner + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3525;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3525LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3526;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      3526LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = (*(_DWORD *)(*(_QWORD *)v7 + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v8 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3529;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < GetNumVidPnSources()",
      3529LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_QWORD *)VidPnSourceOwner + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 237) == *(_QWORD *)(v9 + 16)
    && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) == 0 )
  {
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v9 + 16));
    if ( *(int *)(v10 + 3004) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((ADAPTER_DISPLAY *)this, v12);
    }
    else
    {
      v13 = 0;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v8)
        && ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8)
        && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8) + v8 + 310) & 0x200) != 0 )
      {
        if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)this, v8) == 3
          && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) != 0 )
        {
          v6 = 1;
          v13 = 1;
        }
        else if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8) == VidPnSourceOwner )
        {
          v13 = 1;
        }
      }
      else
      {
        v13 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v8, 0) == *((struct DXGADAPTERALLOCATION **)a3
                                                                                          + 6);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 200LL) == 1 )
      {
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8, (unsigned int)v8, 0);
        }
        else
        {
          v14 = 0;
          if ( v13 )
            v14 = 1 << v8;
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
            *((ADAPTER_RENDER **)VidPnSourceOwner + 2),
            1 << v8,
            0LL,
            v14,
            0);
        }
      }
      if ( v13 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 200LL) == 1 )
          ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
        DXGADAPTER::IncrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL), v8);
        if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(
                                *(VIDSCH_EXPORT **)(*((_QWORD *)VidPnSourceOwner + 2) + 736LL),
                                *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)VidPnSourceOwner + 2) + 744LL),
                                v8) )
          ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
        DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL), v8, v18);
        v19 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v8, 0, 2u, 0);
        if ( v19 < 0 )
        {
          v20 = v19;
          WdLogSingleEntry3(2LL, (unsigned int)v8, this[2], v19);
          v21 = (__int64)this[2];
          WdLogGlobalForLineNumber = 3648;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to turn Visibility on VidPn source 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
            (unsigned int)v8,
            v21,
            v20,
            0LL,
            0LL);
        }
      }
      if ( *((_DWORD *)VidPnSourceOwner + 116) == 2 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3660;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pDxgAllocation->m_pAllocation->m_CddPrimary",
            3660LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !*(_QWORD *)(*((_QWORD *)a3 + 6) + 8LL) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3661;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pDxgAllocation->m_pAllocation->m_hVidMmAllocation != NULL",
            3661LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)VidPnSourceOwner + 2) + 760LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)VidPnSourceOwner + 2) + 768LL),
          *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)a3 + 6) + 8LL));
        *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) |= 0x10u;
        if ( v6 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)this, v8);
      }
      v15 = *((_DWORD *)VidPnSourceOwner + 116);
      if ( v15 != 2 )
      {
        if ( v15 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v8);
          if ( *(int *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 3004LL) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations(VidPnSourceOwner, v8, v16, v17);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v8);
        }
      }
    }
  }
}
