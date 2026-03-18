/*
 * XREFs of ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403CADBC
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x140039D8C (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140040510 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051A2C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x140067898 (-VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I.c)
 *     ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1403CB1E0 (-UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z.c)
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
    WdLogGlobalForLineNumber = 3727;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDevice != NULL", 3727LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(a2[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3728;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      3728LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3729;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 3729LL, 0LL, 0LL, 0LL, 0LL);
  }
  while ( a3 )
  {
    if ( !*((_QWORD *)a3 + 6) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3735;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pCurrentAlloc->m_pAllocation != NULL",
        3735LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3736;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pCurrentAlloc->m_pAllocation->m_Primary",
        3736LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
    if ( v8 >= *((_DWORD *)this + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3739;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"VidPnSourceId < GetNumVidPnSources()",
        3739LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a2[237] != *((ADAPTER_RENDER **)a2[2] + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3741;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDevice->IsFullWDDMDevice(VidPnSourceId)",
        3741LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( DXGDEVICE::GetDisplayedPrimary(a2, v8) == a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3742;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDevice->GetDisplayedPrimary(VidPnSourceId) != pCurrentAlloc",
        3742LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3743;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"!pCurrentAlloc->m_pAllocation->m_Invalidated",
        3743LL,
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
