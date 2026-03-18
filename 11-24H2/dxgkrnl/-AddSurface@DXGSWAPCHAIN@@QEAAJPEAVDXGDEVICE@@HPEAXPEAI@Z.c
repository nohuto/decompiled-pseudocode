/*
 * XREFs of ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x1401FDB34
 * Callers:
 *     DxgkAddSurfaceToSwapChain @ 0x140200EC0 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x140201340 (DxgkCreateSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline @ 0x140079400 (Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x14018ADF0 (-FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401FE624 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAXH_N@Z @ 0x1401FF4C0 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1402B72BC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1402F9BAC (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     DxgkShareObjectsInternal @ 0x14032A300 (DxgkShareObjectsInternal.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140423DEC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 */

__int64 __fastcall DXGSWAPCHAIN::AddSurface(
        DXGSWAPCHAIN *this,
        unsigned __int64 a2,
        int a3,
        void *a4,
        unsigned int *a5)
{
  BOOL v8; // r12d
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *EmptySlot; // rdi
  unsigned int v11; // r14d
  unsigned __int64 v12; // rax
  char *v13; // r15
  int v14; // r9d
  ADAPTER_RENDER *v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r14
  struct DXGPROCESS *Current; // r14
  int v20; // r13d
  unsigned int v21; // ecx
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rbx
  unsigned int *v25; // r12
  int v26; // edx
  int v27; // eax
  int v28; // eax
  ADAPTER_RENDER *v29; // r8
  __int64 v30; // rdx
  int v31; // eax
  AUTOEXPANDALLOCATION *v32; // rax
  AUTOEXPANDALLOCATION *v33; // rbx
  DXGSWAPCHAIN *v34; // rcx
  __int64 Src; // [rsp+20h] [rbp-E0h]
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+80h] [rbp-80h]
  _QWORD v40[12]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v41[36]; // [rsp+F0h] [rbp-10h] BYREF
  BOOL v42; // [rsp+190h] [rbp+90h]

  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread()
    || !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(a2 + 16)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2703;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_SwapChainLock.IsOwner() && pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      2703LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = a3 == 0;
  v42 = v8;
  if ( *((_DWORD *)this + 15) >= 0x32u )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2712;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Swapchain is at max number of surfaces so cannot add anymore",
      2712LL,
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
      WdLogGlobalForLineNumber = 2720;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_SurfaceTableSize == m_ActiveSurfaceCo",
        2720LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = *((_DWORD *)this + 14) + 5;
    v12 = 160LL * v11;
    if ( !is_mul_ok(v11, 0xA0uLL) )
      v12 = -1LL;
    v13 = (char *)operator new[](v12, 0x4B677844u, 256LL);
    if ( !v13 )
    {
      WdLogSingleEntry1(6LL, v11);
      WdLogGlobalForLineNumber = 2727;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate new surface table, size %ld",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    memmove(v13, *((const void **)this + 8), 160LL * *((unsigned int *)this + 14));
    EmptySlot = (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)&v13[160 * *((unsigned int *)this + 14)];
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 8));
    *((_DWORD *)this + 14) = v11;
    *((_QWORD *)this + 8) = v13;
  }
  if ( !(unsigned int)Feature_IdSwapChainUserModeSync__private_IsEnabledDeviceUsageNoInline() )
  {
    memset(v41, 0, 0x60uLL);
    v29 = *(ADAPTER_RENDER **)(a2 + 16);
    v41[3] |= 1u;
    v41[2] = 3;
    LOBYTE(v30) = 1;
    v37 = 0LL;
    v31 = CreateSynchronizationObjectInternal(0LL, v30, v29, v41, 13, 0, &v37, 0LL, 0LL);
    v18 = v31;
    if ( v31 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v31);
      WdLogGlobalForLineNumber = 2816;
      goto LABEL_17;
    }
    v28 = v41[20];
    goto LABEL_28;
  }
  memset(v40, 0, sizeof(v40));
  v14 = *((_DWORD *)this + 59);
  v15 = *(ADAPTER_RENDER **)(a2 + 16);
  LODWORD(v40[0]) = *(_DWORD *)(a2 + 468);
  v36 = 0LL;
  LODWORD(v40[1]) = v14 != 0 ? 5 : 3;
  HIDWORD(v40[1]) = (v14 != 0 ? 0x80 : 0) | HIDWORD(v40[1]) & 0xFFFFFF7D | (v14 != 0 ? 2 : 0) | 1;
  v16 = HIDWORD(v40[1]);
  LOBYTE(v16) = 1;
  v17 = CreateSynchronizationObjectInternal(
          a2 & -(__int64)(v14 != 0),
          v16,
          v15,
          v40,
          13,
          0,
          &v36,
          (char *)EmptySlot + 32,
          0LL);
  v18 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry2(2LL, this, v17);
    WdLogGlobalForLineNumber = 2770;
LABEL_17:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"CreateSynchronizationObjectInternal failed. Returning 0x%I64x",
      (__int64)this,
      v18,
      0LL,
      0LL,
      0LL);
    goto LABEL_40;
  }
  if ( !*((_DWORD *)this + 59) )
  {
    v28 = v40[10];
LABEL_28:
    *((_DWORD *)EmptySlot + 7) = v28;
    goto LABEL_33;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v20 = v40[11];
  v21 = (LODWORD(v40[11]) >> 6) & 0xFFFFFF;
  if ( v21 < *((_DWORD *)Current + 74) )
  {
    v22 = *((_QWORD *)Current + 35);
    v23 = *(_DWORD *)(v22 + 16LL * v21 + 8);
    if ( ((LODWORD(v40[11]) >> 25) & 0x60) == (v23 & 0x60) && (v23 & 0x1F) != 0 )
    {
      v24 = 2 * ((v40[11] >> 6) & 0xFFFFFFLL);
      if ( (*(_DWORD *)(v22 + 16 * ((v40[11] >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v24 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  v25 = (unsigned int *)((char *)EmptySlot + 28);
  v38[0] = 48LL;
  *((_DWORD *)EmptySlot + 7) = v20;
  v38[3] = 512LL;
  LOBYTE(v26) = 1;
  v38[1] = 0LL;
  v38[2] = 0LL;
  v39 = 0LL;
  v27 = DxgkShareObjectsInternal(
          0,
          v26,
          0,
          1,
          (char *)EmptySlot + 28,
          (__int64)v38,
          0x10000000u,
          (__int64)EmptySlot + 40,
          0LL);
  v18 = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry2(2LL, *v25, v27);
    Src = *v25;
    WdLogGlobalForLineNumber = 2787;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to share Fence Nt handle 0x%I64x, error 0x%I64x",
      Src,
      v18,
      0LL,
      0LL,
      0LL);
    v8 = v42;
    goto LABEL_40;
  }
  v8 = v42;
LABEL_33:
  v32 = (AUTOEXPANDALLOCATION *)operator new(0x10uLL, 0x4B677844u, 256LL);
  v33 = v32;
  if ( v32 )
  {
    *((_QWORD *)v32 + 1) = 0LL;
    *(_QWORD *)v32 = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer(v32, 0, 0);
  }
  else
  {
    v33 = 0LL;
  }
  *((_QWORD *)EmptySlot + 2) = v33;
  if ( !v33 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2829;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Out of memory allocating AUTOEXPANDALLOCATION class",
      2829LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v18) = -1073741801;
    goto LABEL_40;
  }
  LODWORD(v18) = DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
                   this,
                   EmptySlot,
                   (struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *)((char *)EmptySlot + 48 * v8 + 64),
                   a4,
                   a3,
                   *((_BYTE *)this + (a3 != 0 ? 0x30 : 0) + 140));
  if ( (int)v18 < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2838;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"OpenSurfacesResourcesLocalForCreator failed",
      2838LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_40:
    if ( EmptySlot )
    {
      DXGSWAPCHAIN::DestroySurfacesResourcesLocal(this, v8, EmptySlot);
      DXGSWAPCHAIN::DestroySurfacesResourcesGlobal(v34, EmptySlot);
      memset(EmptySlot, 0, 0xA0uLL);
    }
    return (unsigned int)v18;
  }
  *((_DWORD *)EmptySlot + 2) = 1;
  *a5 = -858993459 * (((__int64)EmptySlot - *((_QWORD *)this + 8)) >> 5);
  ++*((_DWORD *)this + 15);
  return (unsigned int)v18;
}
