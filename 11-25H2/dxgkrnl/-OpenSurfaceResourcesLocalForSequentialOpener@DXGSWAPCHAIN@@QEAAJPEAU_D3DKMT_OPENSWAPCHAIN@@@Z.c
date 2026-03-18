/*
 * XREFs of ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1401F8C24
 * Callers:
 *     DxgkOpenSwapChain @ 0x1403E6330 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z @ 0x1401F9514 (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX_NH@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140408434 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_OPENSWAPCHAIN *a2)
{
  unsigned int v4; // ebx
  int v5; // ebp
  UINT v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[16]; // [rsp+50h] [rbp-28h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v4 = 0;
  if ( a2->SurfaceCount != *((_DWORD *)this + 15) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2627;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pKmOpen->SurfaceCount == m_ActiveSurfaceCo",
      2627LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = 0;
  v6 = 0;
  if ( *((_DWORD *)this + 15) )
  {
    while ( v6 < a2->SurfaceCount )
    {
      v7 = *((_QWORD *)this + 8);
      v8 = 160LL * v6;
      if ( !*(_DWORD *)(v8 + v7 + 8) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2635;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pSurfaceTable[Idx].SlotStatus != SLOT_AVAILABLE",
          2635LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v7 = *((_QWORD *)this + 8);
      }
      v5 = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
             this,
             (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)(v8 + v7),
             a2->bProducer,
             &a2->pNtSurfaceHandles[v6],
             HIDWORD(a2[1].hNtSwapChain) != 0,
             1);
      if ( v5 < 0 )
      {
        if ( *((_DWORD *)this + 14) )
        {
          v10 = a2->bProducer ? 0x30 : 0;
          do
            DXGSWAPCHAIN::DestroySurfacesResourcesLocal(
              v9,
              *(unsigned int *)((char *)this + v10 + 124),
              *((_QWORD *)this + 8) + 160LL * v4++);
          while ( v4 < *((_DWORD *)this + 14) );
        }
        break;
      }
      if ( ++v6 >= *((_DWORD *)this + 15) )
        break;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  return (unsigned int)v5;
}
