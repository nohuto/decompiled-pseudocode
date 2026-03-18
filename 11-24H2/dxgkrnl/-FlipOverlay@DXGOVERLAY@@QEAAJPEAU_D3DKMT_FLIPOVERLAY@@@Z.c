/*
 * XREFs of ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1401E7620
 * Callers:
 *     DxgkFlipOverlay @ 0x1401E9130 (DxgkFlipOverlay.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004EF94 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140054D34 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z @ 0x1401A58EC (-DdiFlipOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_FLIPOVERLAY@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGOVERLAY::FlipOverlay(DXGOVERLAY *this, struct _D3DKMT_FLIPOVERLAY *a2)
{
  __int64 v4; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  UINT PrivateDriverDataSize; // eax
  void *v12; // rcx
  size_t v13; // r9
  void *pPrivateDriverData; // rdx
  ULONG64 v15; // r8
  __int64 hSource; // r8
  _DXGKARG_FLIPOVERLAY v17; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 402;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
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
      262146LL,
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
  memset(&v17.SrcPhysicalAddress, 0, 32);
  DXGPROCESS::GetAllocationSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (DXGALLOCATIONREFERENCE *)&v18, a2->hSource);
  if ( v18 )
  {
    v8 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL) + 16LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) )
    {
      v9 = *(_QWORD *)(v18 + 48);
      if ( (*(_DWORD *)(v9 + 4) & 8) == 0 || (*(_DWORD *)(v18 + 72) & 0x800) == 0 )
      {
        hSource = a2->hSource;
        v7 = -1073741811;
        WdLogSingleEntry3(3LL, v8, hSource, -1073741811LL);
        WdLogGlobalForLineNumber = 444;
        goto LABEL_30;
      }
      v17.hSource = *(HANDLE *)(v9 + 16);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 3128LL);
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        *(VIDMM_EXPORT **)(v10 + 760),
        *(struct VIDMM_GLOBAL **)(v10 + 768),
        *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v18 + 48) + 8LL),
        &v17.SrcSegmentId,
        &v17.SrcPhysicalAddress,
        0LL);
      PrivateDriverDataSize = a2->PrivateDriverDataSize;
      if ( PrivateDriverDataSize && a2->pPrivateDriverData )
      {
        v17.PrivateDriverDataSize = a2->PrivateDriverDataSize;
        v12 = (void *)operator new[](PrivateDriverDataSize, 0x4B677844u, 256LL);
        v17.pPrivateDriverData = v12;
        if ( !v12 )
        {
          v7 = -1073741801;
          WdLogSingleEntry3(3LL, this, v17.PrivateDriverDataSize, -1073741801LL);
          WdLogGlobalForLineNumber = 472;
          goto LABEL_30;
        }
        v13 = v17.PrivateDriverDataSize;
        pPrivateDriverData = a2->pPrivateDriverData;
        v15 = (ULONG64)pPrivateDriverData + v17.PrivateDriverDataSize;
        if ( v15 < (unsigned __int64)pPrivateDriverData || v15 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v12, pPrivateDriverData, v13);
      }
      else
      {
        a2->PrivateDriverDataSize = 0;
        a2->pPrivateDriverData = 0LL;
      }
      v7 = ADAPTER_RENDER::DdiFlipOverlay(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3128LL),
             *((void **)this + 5),
             &v17);
      if ( v7 >= 0 )
        *((_QWORD *)this + 6) = v18;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17.pPrivateDriverData);
      goto LABEL_30;
    }
    v7 = -1073741811;
    WdLogSingleEntry3(2LL, v8, v18, -1073741811LL);
    WdLogGlobalForLineNumber = 433;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      *((_QWORD *)this + 2),
      v18,
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
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18);
  return (unsigned int)v7;
}
