/*
 * XREFs of ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1401E23F0
 * Callers:
 *     DxgkFlipOverlay @ 0x1401E3F00 (DxgkFlipOverlay.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F5A4 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z @ 0x1401A33D0 (-DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGOVERLAY::FlipOverlay(DXGOVERLAY *this, struct _D3DKMT_FLIPOVERLAY *a2)
{
  __int64 v4; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  UINT PrivateDriverDataSize; // eax
  void *v13; // rcx
  size_t v14; // r9
  void *pPrivateDriverData; // rdx
  ULONG64 v16; // r8
  __int64 hSource; // r8
  _DXGKARG_FLIPOVERLAY v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 402;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsCoreResourceSharedOwner()",
      402LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || *(__int64 (__fastcall **)(void *const, struct _DXGKARG_CREATEOVERLAY *))(v4 + 704) == ADAPTER_RENDER::DefaultDdiCreateOverlay
    || *(__int64 (__fastcall **)(void *const))(v4 + 768) == ADAPTER_RENDER::DefaultDdiDestroyOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_FLIPOVERLAY *))(v4 + 760) == ADAPTER_RENDER::DefaultDdiFlipOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_UPDATEOVERLAY *))(v4 + 752) == ADAPTER_RENDER::DefaultDdiUpdateOverlay )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 403;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsOverlayEnabled()",
      403LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 8) == -1 )
    return 0LL;
  memset(&v18.SrcPhysicalAddress, 0, 32);
  DXGPROCESS::GetAllocationSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (DXGALLOCATIONREFERENCE *)&v19, a2->hSource);
  if ( v19 )
  {
    v8 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL) + 16LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) )
    {
      v9 = *(_QWORD *)(v19 + 48);
      if ( (*(_DWORD *)(v9 + 4) & 8) == 0 || (*(_DWORD *)(v19 + 72) & 0x800) == 0 )
      {
        hSource = a2->hSource;
        v7 = -1073741811;
        WdLogSingleEntry3(3LL, v8, hSource, -1073741811LL);
        WdLogGlobalForLineNumber = 444;
        goto LABEL_30;
      }
      v18.hSource = *(HANDLE *)(v9 + 16);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 3128LL);
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        *(VIDMM_EXPORT **)(v10 + 760),
        *(struct VIDMM_GLOBAL **)(v10 + 768),
        *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v19 + 48) + 8LL),
        &v18.SrcSegmentId,
        &v18.SrcPhysicalAddress,
        0LL);
      PrivateDriverDataSize = a2->PrivateDriverDataSize;
      if ( PrivateDriverDataSize && a2->pPrivateDriverData )
      {
        v18.PrivateDriverDataSize = a2->PrivateDriverDataSize;
        v13 = (void *)operator new[](PrivateDriverDataSize, 0x4B677844u, 256LL, v11);
        v18.pPrivateDriverData = v13;
        if ( !v13 )
        {
          v7 = -1073741801;
          WdLogSingleEntry3(3LL, this, v18.PrivateDriverDataSize, -1073741801LL);
          WdLogGlobalForLineNumber = 472;
          goto LABEL_30;
        }
        v14 = v18.PrivateDriverDataSize;
        pPrivateDriverData = a2->pPrivateDriverData;
        v16 = (ULONG64)pPrivateDriverData + v18.PrivateDriverDataSize;
        if ( v16 < (unsigned __int64)pPrivateDriverData || v16 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v13, pPrivateDriverData, v14);
      }
      else
      {
        a2->PrivateDriverDataSize = 0;
        a2->pPrivateDriverData = 0LL;
      }
      v7 = ADAPTER_RENDER::DdiFlipOverlay(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3128LL),
             *((void **)this + 5),
             &v18);
      if ( v7 >= 0 )
        *((_QWORD *)this + 6) = v19;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18.pPrivateDriverData);
      goto LABEL_30;
    }
    v7 = -1073741811;
    WdLogSingleEntry3(2LL, v8, v19, -1073741811LL);
    WdLogGlobalForLineNumber = 433;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      *((_QWORD *)this + 2),
      v19,
      -1073741811LL,
      0LL,
      0LL);
  }
  else
  {
    v6 = a2->hSource;
    v7 = -1073741811;
    WdLogSingleEntry3(3LL, *((_QWORD *)this + 2), v6, -1073741811LL);
    WdLogGlobalForLineNumber = 424;
  }
LABEL_30:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v19);
  return (unsigned int)v7;
}
