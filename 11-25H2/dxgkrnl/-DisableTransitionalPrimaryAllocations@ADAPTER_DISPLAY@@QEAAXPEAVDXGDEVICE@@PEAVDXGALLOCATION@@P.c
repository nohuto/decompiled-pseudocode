/*
 * XREFs of ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403D3178
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x14003B7CC (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x14003E4E0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051FDC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x140067CC8 (-VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I.c)
 *     ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1403D359C (-UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        ADAPTER_DISPLAY *this,
        ADAPTER_RENDER **a2,
        struct DXGALLOCATION *a3,
        struct COREDEVICEACCESS *a4)
{
  unsigned int v8; // esi
  const char *v9; // rdx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3736;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDevice != NULL", 3736LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(a2[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3737;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      3737LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3738;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 3738LL, 0LL, 0LL, 0LL, 0LL);
  }
  while ( a3 )
  {
    if ( !*((_QWORD *)a3 + 6) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3744;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCurrentAlloc->m_pAllocation != NULL",
        3744LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3745;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCurrentAlloc->m_pAllocation->m_Primary",
        3745LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
    if ( v8 >= *((_DWORD *)this + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3748;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"VidPnSourceId < GetNumVidPnSources()",
        3748LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a2[235] != *((ADAPTER_RENDER **)a2[2] + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3750;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDevice->IsFullWDDMDevice(VidPnSourceId)",
        3750LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( DXGDEVICE::GetDisplayedPrimary((DXGDEVICE *)a2, v8) == a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3751;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDevice->GetDisplayedPrimary(VidPnSourceId) != pCurrentAlloc",
        3751LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3752;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"!pCurrentAlloc->m_pAllocation->m_Invalidated",
        3752LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, v8) == (struct DXGDEVICE *)a2 )
    {
      if ( (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                              *((VIDMM_EXPORT **)a2[2] + 95),
                              *((struct VIDMM_GLOBAL **)a2[2] + 96),
                              *((struct VIDMM_MULTI_ALLOC **)a3 + 3),
                              0LL) )
      {
        COREDEVICEACCESS::Release(a4);
        VIDMM_EXPORT::VidMmWaitOnAllocationPresentQueue(
          *((VIDMM_EXPORT **)a2[2] + 95),
          *((struct VIDMM_GLOBAL **)a2[2] + 96),
          *((struct VIDMM_MULTI_ALLOC **)a3 + 3),
          v8);
        COREDEVICEACCESS::AcquireSharedUncheck(a4, v9);
      }
    }
    DXGDEVICE::UnpinTransitionalPrimaryAllocation((DXGDEVICE *)a2, a3, v8);
    a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
  }
}
