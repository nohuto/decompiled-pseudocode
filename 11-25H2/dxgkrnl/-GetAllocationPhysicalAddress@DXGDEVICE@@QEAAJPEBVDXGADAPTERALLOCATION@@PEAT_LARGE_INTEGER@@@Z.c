/*
 * XREFs of ?GetAllocationPhysicalAddress@DXGDEVICE@@QEAAJPEBVDXGADAPTERALLOCATION@@PEAT_LARGE_INTEGER@@@Z @ 0x1401B8564
 * Callers:
 *     ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1401F8204 (-GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmInvalidateCache@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAUVIDMM_MULTI_ALLOC@@_K4@Z @ 0x14006BCDC (-VidMmInvalidateCache@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_MULTI_GLOBA.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPhysicalAddress(
        DXGDEVICE *this,
        const struct DXGADAPTERALLOCATION *a2,
        union _LARGE_INTEGER *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11692;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDeviceLockSharedOwner()", 11692LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                             + 8LL)
                                                                 + 232LL))(
         *((_QWORD *)a2 + 1),
         a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = VIDMM_EXPORT::VidMmInvalidateCache(
           *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
           *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
           *((struct DXGPROCESS **)this + 5),
           *((struct VIDMM_MULTI_GLOBAL_ALLOC **)a2 + 1),
           0LL,
           0LL,
           0LL);
    v7 = v8;
    if ( g_OSTestSigningEnabled && v8 == -1073741823 )
    {
      return 0;
    }
    else if ( v8 < 0 )
    {
      WdLogSingleEntry3(3LL, a2, this, v8);
      WdLogGlobalForLineNumber = 11731;
    }
  }
  else
  {
    WdLogSingleEntry3(3LL, a2, this, v6);
    WdLogGlobalForLineNumber = 11705;
  }
  return v7;
}
