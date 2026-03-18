/*
 * XREFs of ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1403E7240
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1402E3F98 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140360EC0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::GetStandardAllocationDriverData(
        DXGDEVICE *this,
        enum _D3DKMDT_STANDARDALLOCATION_TYPE a2,
        D3DKMDT_SHAREDPRIMARYSURFACEDATA *a3,
        unsigned int *a4,
        void **a5)
{
  ADAPTER_RENDER *v6; // rcx
  void *v9; // r14
  int StandardAllocationDriverData; // eax
  __int64 v11; // r9
  __int64 v12; // rdi
  void *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  ADAPTER_RENDER *v17; // rcx
  int v18; // eax
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v19; // [rsp+50h] [rbp-30h] BYREF

  memset(&v19, 0, sizeof(v19));
  v19.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v19.pCreateSharedPrimarySurfaceData = a3;
  v9 = 0LL;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v6, &v19, (__int64)a3);
  v12 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    WdLogSingleEntry2(2LL, this, StandardAllocationDriverData);
    WdLogGlobalForLineNumber = 7349;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
      (__int64)this,
      v12,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v12;
  }
  if ( v19.AllocationPrivateDriverDataSize || v19.ResourcePrivateDriverDataSize )
  {
    v13 = (void *)operator new[](v19.AllocationPrivateDriverDataSize, 0x4B677844u, 256LL, v11);
    *a5 = v13;
    if ( v13 )
    {
      if ( !v19.ResourcePrivateDriverDataSize
        || (v9 = (void *)operator new[](v19.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL, v15)) != 0LL )
      {
        v17 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v19.pAllocationPrivateDriverData = *a5;
        v19.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
        v19.pCreateSharedPrimarySurfaceData = a3;
        v19.pResourcePrivateDriverData = v9;
        v18 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v17, &v19, v14);
        v12 = v18;
        if ( v18 < 0 )
        {
          WdLogSingleEntry2(1LL, this, v18);
          WdLogGlobalForLineNumber = 7409;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"Device 0x%I64x: Driver failed to generate pPrivateDriverData buffer, returning 0x%I64x",
            (__int64)this,
            v12,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          *a4 = v19.AllocationPrivateDriverDataSize;
        }
      }
      else
      {
        LODWORD(v12) = -1073741801;
        WdLogSingleEntry2(3LL, v19.ResourcePrivateDriverDataSize, -1073741801LL);
        WdLogGlobalForLineNumber = 7390;
      }
    }
    else
    {
      LODWORD(v12) = -1073741801;
      WdLogSingleEntry2(3LL, v19.AllocationPrivateDriverDataSize, -1073741801LL);
      WdLogGlobalForLineNumber = 7373;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    if ( (int)v12 < 0 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*a5);
    return (unsigned int)v12;
  }
  WdLogSingleEntry2(2LL, this, -1073741823LL);
  WdLogGlobalForLineNumber = 7358;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and                             pResource"
     "PrivateDriverData buffer, returning 0x%I64x",
    (__int64)this,
    -1073741823LL,
    0LL,
    0LL,
    0LL);
  return 3221225473LL;
}
