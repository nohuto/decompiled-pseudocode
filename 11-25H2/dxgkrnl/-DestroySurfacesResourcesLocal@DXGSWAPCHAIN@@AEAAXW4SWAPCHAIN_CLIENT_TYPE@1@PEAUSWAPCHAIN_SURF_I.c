/*
 * XREFs of ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140408434
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401F71E0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z @ 0x1401F79B4 (-ConsumerCheckForSurfacesToFree@DXGSWAPCHAIN@@AEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1401F816C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1401F8C24 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z @ 0x1401F9F7C (-RemoveSurface@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_REMOVESURFACEFROMSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroySurfacesResourcesLocal(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  void *v6; // rcx
  unsigned int v7; // ebp
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v9; // rbx
  volatile signed __int32 *v10; // r14
  unsigned int v11; // ecx
  __int64 v12; // rbx
  int v13; // edx
  struct DXGSYNCOBJECT *v14; // rbx
  PERESOURCE *Global; // rax

  v3 = a2;
  v5 = 6LL * a2;
  v6 = *(void **)(a3 + 48LL * a2 + 104);
  if ( v6 )
  {
    ObCloseHandle(v6, 1);
    *(_QWORD *)(a3 + 8 * v5 + 104) = 0LL;
    *(_QWORD *)(a3 + 48 * (v3 + 2)) = 0LL;
  }
  v7 = *(_DWORD *)(a3 + 8 * v5 + 80);
  if ( v7 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)v6);
    v9 = Current;
    if ( !Current )
    {
LABEL_14:
      *(_DWORD *)(a3 + 8 * v5 + 80) = 0;
      return;
    }
    v10 = (volatile signed __int32 *)((char *)Current + 248);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v11 = (v7 >> 6) & 0xFFFFFF;
    if ( v11 < *((_DWORD *)v9 + 74) )
    {
      v12 = *((_QWORD *)v9 + 35);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60)
        && (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) == 0 )
      {
        v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
        if ( v13 )
        {
          if ( v13 == 8 )
          {
            v14 = *(struct DXGSYNCOBJECT **)(v12 + 16LL * v11);
LABEL_12:
            _InterlockedDecrement(v10 + 4);
            ExReleasePushLockSharedEx(v10, 0LL);
            KeLeaveCriticalRegion();
            if ( v14 )
            {
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(Global, v14, v7);
            }
            goto LABEL_14;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v14 = 0LL;
    goto LABEL_12;
  }
}
