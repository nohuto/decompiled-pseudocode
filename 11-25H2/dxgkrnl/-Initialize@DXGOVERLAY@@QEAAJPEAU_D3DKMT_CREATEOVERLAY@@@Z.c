/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401E290C
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401B72BC (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x14003959C (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F5A4 (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x140199834 (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1401A0B04 (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(union _LARGE_INTEGER **this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  union _LARGE_INTEGER *v6; // r13
  union _LARGE_INTEGER *v7; // rax
  union _LARGE_INTEGER v9; // r13
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // ecx
  struct DXGALLOCATION *v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // esi
  union _LARGE_INTEGER *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  union _LARGE_INTEGER *v21; // rcx
  D3DKMT_HANDLE v22; // eax
  __int64 v23; // r8
  union _LARGE_INTEGER *v24; // rcx
  union _LARGE_INTEGER *v25; // [rsp+20h] [rbp-79h]
  __int64 v26[2]; // [rsp+50h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v27; // [rsp+60h] [rbp-39h] BYREF

  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(this[2][2].QuadPart + 16))
    || *(__int64 (__fastcall **)(void *const, struct _DXGKARG_CREATEOVERLAY *))(v4 + 704) == ADAPTER_RENDER::DefaultDdiCreateOverlay
    || *(__int64 (__fastcall **)(void *const))(v4 + 768) == ADAPTER_RENDER::DefaultDdiDestroyOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_FLIPOVERLAY *))(v4 + 760) == ADAPTER_RENDER::DefaultDdiFlipOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_UPDATEOVERLAY *))(v4 + 752) == ADAPTER_RENDER::DefaultDdiUpdateOverlay )
  {
    WdLogSingleEntry3(2LL, this, v4, -1073741637LL);
    v24 = this[2];
    WdLogGlobalForLineNumber = 62;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Driver 0x%I64x didn't supply Overlay functions, returning 0x%I64x",
      (__int64)this,
      *(_QWORD *)(v24[2].QuadPart + 16),
      -1073741637LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v5 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v4 + 3128), (struct DXGOVERLAY *)this);
  v6 = this[2];
  *((_DWORD *)this + 8) = v5;
  if ( v5 == -1 )
  {
    WdLogSingleEntry1(6LL, *(_QWORD *)(v6[2].QuadPart + 16));
    v7 = this[2];
    WdLogGlobalForLineNumber = 75;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of overlay hardware on adapter 0x%I64x",
      *(_QWORD *)(v7[2].QuadPart + 16),
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225626LL;
  }
  v9 = v6[5];
  hAllocation = a2->OverlayInfo.hAllocation;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9.QuadPart + 248));
  v11 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v11 < *(_DWORD *)(v9.QuadPart + 296) )
  {
    v12 = *(_QWORD *)(v9.QuadPart + 280);
    if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60)
      && (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) == 0 )
    {
      v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
      if ( v13 )
      {
        if ( v13 == 5 )
        {
          v14 = *(struct DXGALLOCATION **)(v12 + 16LL * v11);
          goto LABEL_15;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v14 = 0LL;
LABEL_15:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v26, v14);
  _InterlockedDecrement((volatile signed __int32 *)(v9.QuadPart + 264));
  ExReleasePushLockSharedEx(v9.QuadPart + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v26[0] )
  {
    v15 = a2->OverlayInfo.hAllocation;
    v16 = -1073741811;
    WdLogSingleEntry3(3LL, this, v15, -1073741811LL);
    WdLogGlobalForLineNumber = 90;
LABEL_17:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v26);
    return v16;
  }
  v17 = this[2];
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26[0] + 8) + 16LL) + 16LL) != *(_QWORD *)(v17[2].QuadPart + 16) )
  {
    v16 = -1073741811;
    WdLogSingleEntry3(2LL, this[2], v26[0], -1073741811LL);
    v25 = this[2];
    WdLogGlobalForLineNumber = 99;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v25,
      v26[0],
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v26[0] + 48) + 4LL) & 8) == 0 || (*(_DWORD *)(v26[0] + 72) & 0x800) == 0 )
  {
    v23 = a2->OverlayInfo.hAllocation;
    v16 = -1073741811;
    WdLogSingleEntry3(3LL, this, v23, -1073741811LL);
    WdLogGlobalForLineNumber = 110;
    goto LABEL_17;
  }
  memset(&v27, 0, sizeof(v27));
  v27.VidPnSourceId = a2->VidPnSourceId;
  v27.OverlayInfo.hAllocation = *(HANDLE *)(*(_QWORD *)(v26[0] + 48) + 16LL);
  v18 = *(_QWORD *)(*(_QWORD *)(v17[2].QuadPart + 16) + 3128LL);
  VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
    *(VIDMM_EXPORT **)(v18 + 760),
    *(struct VIDMM_GLOBAL **)(v18 + 768),
    *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v26[0] + 48) + 8LL),
    &v27.OverlayInfo.SegmentId,
    &v27.OverlayInfo.PhysicalAddress,
    0LL);
  v27.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
  v27.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
  v27.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
  v27.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
  v20 = ADAPTER_RENDER::DdiCreateOverlay(
          *(ADAPTER_RENDER **)(*(_QWORD *)(this[2][2].QuadPart + 16) + 3128LL),
          &v27,
          v19);
  if ( v20 < 0 )
  {
    v16 = v20;
    goto LABEL_17;
  }
  v21 = this[2];
  this[5] = (union _LARGE_INTEGER *)v27.hOverlay;
  this[6] = (union _LARGE_INTEGER *)v26[0];
  v22 = DXGPROCESS::AllocHandleSafe(v21[5].QuadPart, (__int64)this, 6u);
  *((_DWORD *)this + 6) = v22;
  if ( !v22 )
  {
    v16 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 161;
    goto LABEL_17;
  }
  a2->hOverlay = v22;
  *((_DWORD *)this + 7) = 1;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v26);
  return 0LL;
}
