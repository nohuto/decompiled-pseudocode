/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1403981B8
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401E08AC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x140397660 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x140397AB0 (DxgkQueryResourceInfoFromNtHandle.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140360EC0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x1403D9BF4 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHA.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdi
  ADAPTER_RENDER *v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned int v13; // edi
  __int64 v14; // rcx
  int v15; // eax
  int StandardAllocationDriverData; // eax
  __int64 v17; // r15
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v20; // [rsp+50h] [rbp-39h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v21; // [rsp+58h] [rbp-31h] BYREF
  _DWORD v22[2]; // [rsp+88h] [rbp-1h] BYREF
  DXGPUSHLOCK *v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh]

  if ( !a4 )
  {
    v13 = -1073741811;
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 8207;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Caller passed NULL for both the NT object and the global shared handle. Returning 0x%I64x",
      a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return v13;
  }
  v6 = *(_QWORD *)(a4 + 16);
  if ( !v6 )
  {
    v13 = -1073741811;
    WdLogSingleEntry3(3LL, a1, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 8157;
    return v13;
  }
  v7 = *(ADAPTER_RENDER **)(a1 + 16);
  v20 = 0LL;
  if ( *(ADAPTER_RENDER **)(v6 + 80) == v7 )
  {
    v8 = *(_QWORD *)(a1 + 1880);
    if ( !v8 || *(_QWORD *)(v8 + 3128) || (v14 = *(_QWORD *)(v6 + 96)) == 0 || v14 == v8 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, (struct _KTHREAD **)(v6 + 32), 0);
      DXGPUSHLOCK::AcquireExclusive(v23);
      a2[7] = 0;
      v9 = *(_QWORD **)(v6 + 136);
      v10 = 0;
      LODWORD(v24) = 2;
      while ( 1 )
      {
        if ( v9 == (_QWORD *)(v6 + 136) )
        {
          a2[8] = *(_DWORD *)(v6 + 128);
          a2[9] = *(_DWORD *)(v6 + 132);
          a2[6] = *(_DWORD *)(v6 + 112);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
          return 0LL;
        }
        v11 = v10 + *((_DWORD *)v9 - 2);
        if ( v11 < v10 )
          break;
        v10 += *((_DWORD *)v9 - 2);
        a2[7] = v11;
        v9 = (_QWORD *)*v9;
      }
      a2[7] = -1;
      v13 = -1073741675;
      WdLogSingleEntry2(3LL, a1, -1073741675LL);
      WdLogGlobalForLineNumber = 8314;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22);
      return v13;
    }
  }
  if ( (*(_DWORD *)(v6 + 12) & 0x20) == 0 )
  {
    v13 = -1073741811;
    WdLogSingleEntry3(2LL, a1, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 8254;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Query resource info is called for a resource, which is created on a different adapter. Returning 0x%I64x",
      a1,
      -1073741811LL,
      1LL,
      0LL,
      0LL);
    return v13;
  }
  LODWORD(v23) = *(_DWORD *)(v6 + 216);
  v22[0] = *(_DWORD *)(v6 + 208);
  v15 = *(_DWORD *)(v6 + 212);
  *((_DWORD *)&v21.StandardAllocationType + 1) = 0;
  v22[1] = v15;
  v21.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v22;
  v24 = 0LL;
  HIDWORD(v23) = 7;
  memset(&v21.pAllocationPrivateDriverData, 0, 32);
  v21.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v7, &v21, (__int64)v7);
  v17 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    WdLogSingleEntry2(2LL, a1, StandardAllocationDriverData);
    WdLogGlobalForLineNumber = 8281;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
      a1,
      v17,
      0LL,
      0LL,
      0LL);
LABEL_26:
    `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v20);
    return (unsigned int)v17;
  }
  AllocationPrivateDriverDataSize = v21.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v21.ResourcePrivateDriverDataSize;
  if ( !v21.AllocationPrivateDriverDataSize && !v21.ResourcePrivateDriverDataSize )
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 8289;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverData buffer, "
       "returning 0x%I64x",
      a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v17) = -1073741811;
    goto LABEL_26;
  }
  a2[9] = *(_DWORD *)(v6 + 132);
  a2[8] = ResourcePrivateDriverDataSize;
  a2[6] = *(_DWORD *)(v6 + 112);
  a2[7] = AllocationPrivateDriverDataSize;
  return 0LL;
}
