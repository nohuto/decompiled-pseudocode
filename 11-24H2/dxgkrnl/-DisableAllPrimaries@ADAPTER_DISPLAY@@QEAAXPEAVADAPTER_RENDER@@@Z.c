/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140382824
 * Callers:
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x14028FFE0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140381DCC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403826AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011930 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1400119E0 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002FD80 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140036564 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14005C42C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?RemovePending@DXGADAPTER@@QEBAHXZ @ 0x1400674A8 (-RemovePending@DXGADAPTER@@QEBAHXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14019B720 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1401BAED0 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1402FD478 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1403823DC (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x140382EA0 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1403D6D48 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(PERESOURCE **this, DXGADAPTER **a2)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbp
  struct ADAPTER_RENDER **v8; // rdi
  unsigned int v9; // ebp
  bool v10; // r15
  DXGDODPRESENT *v11; // rcx
  int v12; // r8d
  struct COREDEVICEACCESS *v13; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // [rsp+28h] [rbp-50h]

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3960;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pRenderCore != NULL", 3960LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner((ADAPTER_RENDER *)a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3961;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pRenderCore->IsCoreResourceExclusiveOwner()",
      3961LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3962;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      3962LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( this[2][391] )
  {
    if ( *((_DWORD *)a2[2] + 50) != 1 && !DXGADAPTER::RemovePending(a2[2]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3972;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pRenderCore->GetAdapter()->IsActive() || pRenderCore->GetAdapter()->RemovePending()",
        3972LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)a2);
  }
  else
  {
    v11 = (DXGDODPRESENT *)this[58];
    if ( v11 )
      DXGDODPRESENT::Flush(v11);
  }
  if ( *((_DWORD *)a2[2] + 50) == 1 )
    ADAPTER_RENDER::FlushScheduler((__int64)a2, 8, 0xFFFFFFFFLL, 0);
  if ( *((_DWORD *)this[2] + 50) == 1 )
  {
    v9 = 0;
    if ( *((_DWORD *)this + 24) )
    {
      v10 = this[2][391] == 0LL;
      do
      {
        if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v9) )
        {
          if ( !v10 )
          {
            DXGADAPTER::IncrementVSyncWaiter(a2[2], v9);
            if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(a2[92], a2[93], v9) )
              ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
            DXGADAPTER::DecrementVSyncWaiter(a2[2], v9, v20);
            v10 = 1;
          }
          v21 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v9, 0, 4u, 0);
          if ( v21 < 0 )
          {
            v22 = v21;
            WdLogSingleEntry3(2LL, v21, this[2], v9);
            v23 = (__int64)this[2];
            WdLogGlobalForLineNumber = 4028;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"NTSTATUS:0x%I64x ADAPTER_DISPLAY:0x%I64x SetVidPnSourceVisibility failed disabling VidPnSourceId 0x%I64x",
              v22,
              v23,
              v9,
              0LL,
              0LL);
          }
        }
        ++v9;
      }
      while ( v9 < *((_DWORD *)this + 24) );
    }
  }
  v4 = 0;
  if ( *((_DWORD *)this + 24) )
  {
    do
    {
      if ( this[16][503 * v4 + 11] )
      {
        NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
        if ( NumDifferentPhysicalAdapters )
        {
          v16 = v15 + 88;
          v17 = NumDifferentPhysicalAdapters;
          do
          {
            v18 = *(__int64 *)((char *)this[16] + v16);
            if ( v18 )
            {
              v19 = *(_QWORD *)(v18 + 48);
              if ( !v19 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4048;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"pAllocation != NULL",
                  4048LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*(_DWORD *)(v19 + 4) & 2) == 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4049;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"pAllocation->m_CddPrimary",
                  4049LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( ((*(_DWORD *)(v19 + 4) >> 6) & 0xF) != v4 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4050;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"pAllocation->m_VidPnSourceId == VidPnSourceId",
                  4050LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( !*(_QWORD *)(v19 + 8) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4051;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"pAllocation->m_hVidMmAllocation != NULL",
                  4051LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*(_DWORD *)(v19 + 4) & 0x10) == 0 )
              {
                if ( *((_DWORD *)a2[2] + 50) != 1 && !DXGADAPTER::RemovePending(a2[2]) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 4062;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"pRenderCore->GetAdapter()->IsActive() || pRenderCore->GetAdapter()->RemovePending()",
                    4062LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                VIDMM_EXPORT::VidMmInvalidateAllocation(a2[95], a2[96], *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(v19 + 8));
                *(_DWORD *)(v19 + 4) |= 0x10u;
              }
            }
            v16 += 8LL;
            --v17;
          }
          while ( v17 );
        }
      }
      v5 = *((_DWORD *)this + 24);
      ++v4;
    }
    while ( v4 < v5 );
    v6 = 0;
    if ( v5 )
    {
      do
      {
        v7 = 503LL * v6;
        v8 = (struct ADAPTER_RENDER **)this[16][v7 + 91];
        if ( v8 )
        {
          if ( a2 != (DXGADAPTER **)v8[2] )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4082;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pRenderCore == pDevice->GetRenderCore()",
              4082LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( LODWORD(this[16][v7 + 91][4].OwnerEntry.OwnerThread) )
          {
            DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v8, v6);
            if ( *(int *)(*((_QWORD *)v8[2] + 2) + 3004LL) < 2200 )
              DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)v8, v6, v12, v13);
          }
          else
          {
            DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v8, v6);
          }
        }
        ++v6;
      }
      while ( v6 < *((_DWORD *)this + 24) );
    }
  }
}
