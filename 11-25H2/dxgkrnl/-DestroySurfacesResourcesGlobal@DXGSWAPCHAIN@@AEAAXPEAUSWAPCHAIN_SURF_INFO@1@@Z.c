/*
 * XREFs of ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401F7EB8
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401F71E0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1401F79B4 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1401F8004 (-DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1401F9F7C (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14001BA6C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1400763C8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2)
{
  AUTOEXPANDALLOCATION *v2; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGSYNCOBJECT *ObjectA; // rdi
  DXGGLOBAL *v6; // rax
  _BYTE v7[24]; // [rsp+50h] [rbp-18h] BYREF

  v2 = (AUTOEXPANDALLOCATION *)*((_QWORD *)a2 + 2);
  if ( v2 )
  {
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v2);
    *((_QWORD *)a2 + 2) = 0LL;
  }
  if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((_QWORD *)a2 + 4) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2116;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pSurfaceInfo->m_pFenceSyncObject == nullptr",
        2116LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((_DWORD *)a2 + 7) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2117;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pSurfaceInfo->m_hFenceGlobal == 0",
        2117LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 7) )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v7);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
      Global = DXGGLOBAL::GetGlobal();
      ObjectA = (struct DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, *((_DWORD *)a2 + 7), 8);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
      if ( ObjectA )
      {
        v6 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(v6, ObjectA, 0);
      }
    }
    *((_DWORD *)a2 + 7) = 0;
  }
}
