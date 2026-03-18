/*
 * XREFs of ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1403DEBEC
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x140304ED8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140355CF0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
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
  __int64 v11; // rdi
  void *v12; // rax
  __int64 v13; // r8
  ADAPTER_RENDER *v15; // rcx
  int v16; // eax
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v17; // [rsp+50h] [rbp-30h] BYREF

  memset(&v17, 0, sizeof(v17));
  v17.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v17.pCreateSharedPrimarySurfaceData = a3;
  v9 = 0LL;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v6, &v17, (__int64)a3);
  v11 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    WdLogSingleEntry2(2LL, this, StandardAllocationDriverData);
    WdLogGlobalForLineNumber = 7397;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
      (__int64)this,
      v11,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v11;
  }
  if ( v17.AllocationPrivateDriverDataSize || v17.ResourcePrivateDriverDataSize )
  {
    v12 = (void *)operator new[](v17.AllocationPrivateDriverDataSize, 0x4B677844u, 256LL);
    *a5 = v12;
    if ( v12 )
    {
      if ( !v17.ResourcePrivateDriverDataSize
        || (v9 = (void *)operator new[](v17.ResourcePrivateDriverDataSize, 0x4B677844u, 256LL)) != 0LL )
      {
        v15 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v17.pAllocationPrivateDriverData = *a5;
        v17.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
        v17.pCreateSharedPrimarySurfaceData = a3;
        v17.pResourcePrivateDriverData = v9;
        v16 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v15, &v17, v13);
        v11 = v16;
        if ( v16 < 0 )
        {
          WdLogSingleEntry2(1LL, this, v16);
          WdLogGlobalForLineNumber = 7457;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"Device 0x%I64x: Driver failed to generate pPrivateDriverData buffer, returning 0x%I64x",
            (__int64)this,
            v11,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          *a4 = v17.AllocationPrivateDriverDataSize;
        }
      }
      else
      {
        LODWORD(v11) = -1073741801;
        WdLogSingleEntry2(3LL, v17.ResourcePrivateDriverDataSize, -1073741801LL);
        WdLogGlobalForLineNumber = 7438;
      }
    }
    else
    {
      LODWORD(v11) = -1073741801;
      WdLogSingleEntry2(3LL, v17.AllocationPrivateDriverDataSize, -1073741801LL);
      WdLogGlobalForLineNumber = 7421;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    if ( (int)v11 < 0 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*a5);
    return (unsigned int)v11;
  }
  WdLogSingleEntry2(2LL, this, -1073741823LL);
  WdLogGlobalForLineNumber = 7406;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
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
