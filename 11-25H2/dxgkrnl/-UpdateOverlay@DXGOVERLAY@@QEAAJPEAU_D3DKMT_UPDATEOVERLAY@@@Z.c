/*
 * XREFs of ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1401E2F04
 * Callers:
 *     DxgkUpdateOverlay @ 0x1401E49A0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F5A4 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1401A7A04 (-DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGOVERLAY::UpdateOverlay(DXGOVERLAY *this, struct _D3DKMT_UPDATEOVERLAY *a2)
{
  __int64 v4; // rcx
  __int64 v6; // r8
  int updated; // edi
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r9
  UINT PrivateDriverDataSize; // eax
  void *v13; // rcx
  size_t v14; // r9
  void *pPrivateDriverData; // rdx
  ULONG64 v16; // r8
  __int64 hAllocation; // r8
  __int64 v18[2]; // [rsp+50h] [rbp-78h] BYREF
  _DXGKARG_UPDATEOVERLAY v19; // [rsp+60h] [rbp-68h] BYREF

  v18[1] = (__int64)this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 274;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsCoreResourceSharedOwner()",
      274LL,
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
    WdLogGlobalForLineNumber = 275;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsOverlayEnabled()",
      275LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 8) == -1 )
    return 0LL;
  memset(&v19, 0, sizeof(v19));
  DXGPROCESS::GetAllocationSafe(
    *(_QWORD *)(*((_QWORD *)this + 2) + 40LL),
    (DXGALLOCATIONREFERENCE *)v18,
    a2->OverlayInfo.hAllocation);
  if ( v18[0] )
  {
    v8 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18[0] + 8) + 16LL) + 16LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) )
    {
      v9 = *(_QWORD *)(v18[0] + 48);
      if ( (*(_DWORD *)(v9 + 4) & 8) == 0 || (*(_DWORD *)(v18[0] + 72) & 0x800) == 0 )
      {
        hAllocation = a2->OverlayInfo.hAllocation;
        updated = -1073741811;
        WdLogSingleEntry3(3LL, *((_QWORD *)this + 2), hAllocation, -1073741811LL);
        WdLogGlobalForLineNumber = 315;
        goto LABEL_30;
      }
      v19.OverlayInfo.hAllocation = *(HANDLE *)(v9 + 16);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 3128LL);
      VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
        *(VIDMM_EXPORT **)(v10 + 760),
        *(struct VIDMM_GLOBAL **)(v10 + 768),
        *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v18[0] + 48) + 8LL),
        &v19.OverlayInfo.SegmentId,
        &v19.OverlayInfo.PhysicalAddress,
        0LL);
      v19.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v19.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      if ( PrivateDriverDataSize && a2->OverlayInfo.pPrivateDriverData )
      {
        v19.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
        v13 = (void *)operator new[](PrivateDriverDataSize, 0x4B677844u, 256LL, v11);
        v19.OverlayInfo.pPrivateDriverData = v13;
        if ( !v13 )
        {
          updated = -1073741801;
          WdLogSingleEntry3(3LL, this, v19.OverlayInfo.PrivateDriverDataSize, -1073741801LL);
          WdLogGlobalForLineNumber = 352;
          goto LABEL_30;
        }
        v14 = v19.OverlayInfo.PrivateDriverDataSize;
        pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
        v16 = (ULONG64)pPrivateDriverData + v19.OverlayInfo.PrivateDriverDataSize;
        if ( v16 < (unsigned __int64)pPrivateDriverData || v16 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v13, pPrivateDriverData, v14);
      }
      else
      {
        a2->OverlayInfo.PrivateDriverDataSize = 0;
        a2->OverlayInfo.pPrivateDriverData = 0LL;
      }
      updated = ADAPTER_RENDER::DdiUpdateOverlay(
                  *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3128LL),
                  *((void **)this + 5),
                  &v19);
      if ( updated >= 0 )
        *((_QWORD *)this + 6) = v18[0];
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v19.OverlayInfo.pPrivateDriverData);
      goto LABEL_30;
    }
    updated = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v18[0], -1073741811LL);
    WdLogGlobalForLineNumber = 304;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      *((_QWORD *)this + 2),
      v18[0],
      -1073741811LL,
      0LL,
      0LL);
  }
  else
  {
    v6 = a2->OverlayInfo.hAllocation;
    updated = -1073741811;
    WdLogSingleEntry3(3LL, *((_QWORD *)this + 2), v6, -1073741811LL);
    WdLogGlobalForLineNumber = 295;
  }
LABEL_30:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v18);
  return (unsigned int)updated;
}
