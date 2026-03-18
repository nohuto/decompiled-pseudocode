/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140396F58
 * Callers:
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1402D83A4 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x140312620 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x140396DE0 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014B30 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014BE0 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140036574 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14005C9CC (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?RemovePending@DXGADAPTER@@QEBAHXZ @ 0x1400678E4 (-RemovePending@DXGADAPTER@@QEBAHXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14019922C (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1401B8764 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x140312C30 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x140315D68 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1403975D4 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1403CFA34 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
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
    WdLogGlobalForLineNumber = 3963;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pRenderCore != NULL", 3963LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner((ADAPTER_RENDER *)a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3964;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pRenderCore->IsCoreResourceExclusiveOwner()",
      3964LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3965;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 3965LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[2][391] )
  {
    if ( *((_DWORD *)a2[2] + 50) != 1 && !DXGADAPTER::RemovePending(a2[2]) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3975;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pRenderCore->GetAdapter()->IsActive() || pRenderCore->GetAdapter()->RemovePending()",
        3975LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)a2);
  }
  else
  {
    v11 = (DXGDODPRESENT *)this[57];
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
            WdLogGlobalForLineNumber = 4031;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
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
      if ( this[16][498 * v4 + 11] )
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
                WdLogGlobalForLineNumber = 4051;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"pAllocation != NULL",
                  4051LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*(_DWORD *)(v19 + 4) & 2) == 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4052;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"pAllocation->m_CddPrimary",
                  4052LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( ((*(_DWORD *)(v19 + 4) >> 6) & 0xF) != v4 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4053;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"pAllocation->m_VidPnSourceId == VidPnSourceId",
                  4053LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( !*(_QWORD *)(v19 + 8) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4054;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"pAllocation->m_hVidMmAllocation != NULL",
                  4054LL,
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
                  WdLogGlobalForLineNumber = 4065;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"pRenderCore->GetAdapter()->IsActive() || pRenderCore->GetAdapter()->RemovePending()",
                    4065LL,
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
        v7 = 498LL * v6;
        v8 = (struct ADAPTER_RENDER **)this[16][v7 + 91];
        if ( v8 )
        {
          if ( a2 != (DXGADAPTER **)v8[2] )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4085;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"pRenderCore == pDevice->GetRenderCore()",
              4085LL,
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
