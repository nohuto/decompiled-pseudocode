/*
 * XREFs of ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401F71E0
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x1401FA810 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1401FAC90 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140078ECC (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x140188DEC (-FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ.c)
 *     ?DestroySurfaceDeviceResources@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401F7BD8 (-DestroySurfaceDeviceResources@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401F7EB8 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x1401F8DE0 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkShareObjectsInternal @ 0x14029DC00 (DxgkShareObjectsInternal.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14032CEE8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140408434 (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AddSurface(
        DXGSWAPCHAIN *this,
        unsigned __int64 a2,
        int a3,
        void *a4,
        unsigned int *a5)
{
  BOOL v8; // r13d
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *EmptySlot; // rdi
  __int64 v11; // r9
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  char *v14; // r15
  int v15; // edx
  ADAPTER_RENDER *v16; // r8
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rcx
  struct DXGPROCESS *Current; // r14
  unsigned int v22; // ecx
  __int64 v23; // r9
  int v24; // edx
  __int64 v25; // rbx
  unsigned int *v26; // r12
  int v27; // edx
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  ADAPTER_RENDER *v31; // r8
  __int64 v32; // rdx
  int v33; // eax
  AUTOEXPANDALLOCATION *v34; // rax
  AUTOEXPANDALLOCATION *v35; // rbx
  DXGSWAPCHAIN *v36; // rcx
  __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v40; // [rsp+80h] [rbp-80h]
  _QWORD v41[12]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v42[36]; // [rsp+F0h] [rbp-10h] BYREF
  int v43; // [rsp+190h] [rbp+90h]

  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread()
    || !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(a2 + 16)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2671;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_SwapChainLock.IsOwner() && pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      2671LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = a3 == 0;
  if ( *((_DWORD *)this + 15) >= 0x32u )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2680;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Swapchain is at max number of surfaces so cannot add anymore",
      2680LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225507LL;
  }
  EmptySlot = DXGSWAPCHAIN::FindEmptySlot((struct _KTHREAD **)this);
  if ( !EmptySlot )
  {
    if ( *((_DWORD *)this + 14) != *((_DWORD *)this + 15) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2688;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_SurfaceTableSize == m_ActiveSurfaceCo",
        2688LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = *((_DWORD *)this + 14) + 5;
    v13 = 160LL * v12;
    if ( !is_mul_ok(v12, 0xA0uLL) )
      v13 = -1LL;
    v14 = (char *)operator new[](v13, 0x4B677844u, 256LL, v11);
    if ( !v14 )
    {
      WdLogSingleEntry1(6LL, v12);
      WdLogGlobalForLineNumber = 2695;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate new surface table, size %ld",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    memmove(v14, *((const void **)this + 8), 160LL * *((unsigned int *)this + 14));
    EmptySlot = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)&v14[160 * *((unsigned int *)this + 14)];
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 8));
    *((_DWORD *)this + 14) = v12;
    *((_QWORD *)this + 8) = v14;
  }
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    memset(v42, 0, 0x60uLL);
    v31 = *(ADAPTER_RENDER **)(a2 + 16);
    v42[3] |= 1u;
    v42[2] = 3;
    LOBYTE(v32) = 1;
    v38 = 0LL;
    v33 = CreateSynchronizationObjectInternal(0LL, v32, v31, v42, 13, 0, &v38, 0LL, 0LL);
    v19 = v33;
    if ( v33 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v33);
      WdLogGlobalForLineNumber = 2784;
      goto LABEL_17;
    }
    v30 = v42[20];
    goto LABEL_28;
  }
  memset(v41, 0, sizeof(v41));
  v15 = *((_DWORD *)this + 59);
  v16 = *(ADAPTER_RENDER **)(a2 + 16);
  LODWORD(v41[0]) = *(_DWORD *)(a2 + 468);
  v37 = 0LL;
  LODWORD(v41[1]) = v15 != 0 ? 5 : 3;
  HIDWORD(v41[1]) = HIDWORD(v41[1]) & 0xFFFFFFFD | (v15 != 0 ? 130 : 128) | 1;
  v17 = CreateSynchronizationObjectInternal(
          a2 & -(__int64)(v15 != 0),
          0LL,
          v16,
          v41,
          13,
          0,
          &v37,
          (char *)EmptySlot + 32,
          0LL);
  v19 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry2(2LL, this, v17);
    WdLogGlobalForLineNumber = 2738;
LABEL_17:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"CreateSynchronizationObjectInternal failed. Returning 0x%I64x",
      (__int64)this,
      v19,
      0LL,
      0LL,
      0LL);
    goto LABEL_40;
  }
  if ( !*((_DWORD *)this + 59) )
  {
    v30 = v41[10];
LABEL_28:
    *((_DWORD *)EmptySlot + 7) = v30;
    goto LABEL_32;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v43 = v41[11];
  v22 = (LODWORD(v41[11]) >> 6) & 0xFFFFFF;
  if ( v22 < *((_DWORD *)Current + 74) )
  {
    v23 = *((_QWORD *)Current + 35);
    v24 = *(_DWORD *)(v23 + 16LL * v22 + 8);
    if ( ((LODWORD(v41[11]) >> 25) & 0x60) == (v24 & 0x60) && (v24 & 0x1F) != 0 )
    {
      v25 = 2 * ((v41[11] >> 6) & 0xFFFFFFLL);
      if ( (*(_DWORD *)(v23 + 16 * ((v41[11] >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v25 + 8) &= ~0x2000u;
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  v26 = (unsigned int *)((char *)EmptySlot + 28);
  *((_DWORD *)EmptySlot + 7) = v43;
  v39[0] = 48LL;
  LOBYTE(v27) = 1;
  v39[3] = 512LL;
  v39[1] = 0LL;
  v39[2] = 0LL;
  v40 = 0LL;
  v28 = DxgkShareObjectsInternal(
          0,
          v27,
          0,
          1,
          (char *)EmptySlot + 28,
          (__int64)v39,
          0x10000000u,
          (__int64)EmptySlot + 40,
          0LL);
  v19 = v28;
  if ( v28 < 0 )
  {
    WdLogSingleEntry2(2LL, *v26, v28);
    v29 = *v26;
    WdLogGlobalForLineNumber = 2755;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to share Fence Nt handle 0x%I64x, error 0x%I64x",
      v29,
      v19,
      0LL,
      0LL,
      0LL);
    goto LABEL_40;
  }
LABEL_32:
  v34 = (AUTOEXPANDALLOCATION *)operator new(0x10uLL, 0x4B677844u, 256LL, v18);
  v35 = v34;
  if ( v34 )
  {
    *((_QWORD *)v34 + 1) = 0LL;
    *(_QWORD *)v34 = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer(v34, 0, 0);
  }
  else
  {
    v35 = 0LL;
  }
  *((_QWORD *)EmptySlot + 2) = v35;
  if ( !v35 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2797;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating AUTOEXPANDALLOCATION class",
      2797LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v19) = -1073741801;
    goto LABEL_40;
  }
  LODWORD(v19) = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
                   this,
                   EmptySlot,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)EmptySlot + 48 * v8 + 64),
                   a4,
                   a3,
                   *((_BYTE *)this + (a3 != 0 ? 0x30 : 0) + 140));
  if ( (int)v19 < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2806;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"OpenSurfacesResourcesLocalForCreator failed",
      2806LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_40:
    if ( EmptySlot )
    {
      DXGSWAPCHAIN::DestroySurfacesResourcesLocal(v20, v8, EmptySlot);
      if ( (unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
        DXGSWAPCHAIN::DestroySurfaceDeviceResources(this, v8, EmptySlot);
      DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v36, EmptySlot);
      memset(EmptySlot, 0, 0xA0uLL);
    }
    return (unsigned int)v19;
  }
  *((_DWORD *)EmptySlot + 2) = 1;
  *a5 = -858993459 * (((__int64)EmptySlot - *((_QWORD *)this + 8)) >> 5);
  ++*((_DWORD *)this + 15);
  return (unsigned int)v19;
}
