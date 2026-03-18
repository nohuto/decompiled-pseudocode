/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14035F14C
 * Callers:
 *     DxgkQueryResourceInfo @ 0x14035EB70 (DxgkQueryResourceInfo.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1403C5C30 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x1403CE630 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14040674C (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14001BA6C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140047804 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x14035D984 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x14035F6D8 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDE.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140360EC0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // r15
  struct DXGPROCESS *Current; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rbx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  ADAPTER_RENDER *v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r13
  unsigned int v20; // eax
  __int64 v21; // rbx
  int v22; // edx
  int v23; // eax
  int StandardAllocationDriverData; // eax
  __int64 v25; // r15
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  DXGSHAREDRESOURCE *v28; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v29[16]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v30[8]; // [rsp+70h] [rbp-49h] BYREF
  DXGPUSHLOCK *v31; // [rsp+78h] [rbp-41h]
  int v32; // [rsp+80h] [rbp-39h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v33; // [rsp+88h] [rbp-31h] BYREF
  _DWORD v34[4]; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+Fh]

  v3 = a3;
  if ( !a3 )
  {
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
    return 3221225485LL;
  }
  Current = DXGPROCESS::GetCurrent(a1);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v29);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  if ( (*((_DWORD *)Current + 102) & 0x100) != 0 )
  {
    v18 = *((_QWORD *)Current + 74);
    v19 = v18 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 248));
    v20 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
    if ( v20 < *(_DWORD *)(v18 + 296)
      && (v21 = *(_QWORD *)(v18 + 280), (((unsigned int)v3 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x60))
      && (*(_DWORD *)(v21 + 16LL * v20 + 8) & 0x2000) == 0
      && (v22 = *(_DWORD *)(v21 + 16LL * v20 + 8) & 0x1F) != 0 )
    {
      if ( v22 == 2 )
      {
        ObjectA = *(_QWORD *)(v21 + 16LL * v20);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        ObjectA = 0LL;
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      ObjectA = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v19 + 16));
    ExReleasePushLockSharedEx(v19, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v3, 2);
  }
  if ( !ObjectA )
  {
    WdLogSingleEntry3(3LL, a1, v3, -1073741811LL);
    WdLogGlobalForLineNumber = 8189;
LABEL_16:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
    return 3221225485LL;
  }
  _m_prefetchw((const void *)(ObjectA + 68));
  v9 = *(_DWORD *)(ObjectA + 68);
  do
  {
    if ( !v9 )
    {
      WdLogSingleEntry3(3LL, a1, v3, -1073741811LL);
      WdLogGlobalForLineNumber = 8198;
      goto LABEL_16;
    }
    v10 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(ObjectA + 68), v9 + 1, v9);
  }
  while ( v10 != v9 );
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
  v11 = *(ADAPTER_RENDER **)(a1 + 16);
  v28 = (DXGSHAREDRESOURCE *)ObjectA;
  if ( *(ADAPTER_RENDER **)(ObjectA + 80) == v11
    && ((v12 = *(_QWORD *)(a1 + 1880)) == 0
     || *(_QWORD *)(v12 + 3128)
     || (v17 = *(_QWORD *)(ObjectA + 96)) == 0
     || v17 == v12) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30, (struct _KTHREAD **)(ObjectA + 32), 0);
    DXGPUSHLOCK::AcquireExclusive(v31);
    a2[5] = 0;
    v13 = *(_QWORD **)(ObjectA + 136);
    v14 = 0;
    v32 = 2;
    while ( 1 )
    {
      if ( v13 == (_QWORD *)(ObjectA + 136) )
      {
        a2[6] = *(_DWORD *)(ObjectA + 128);
        a2[7] = *(_DWORD *)(ObjectA + 132);
        a2[4] = *(_DWORD *)(ObjectA + 112);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
        goto LABEL_24;
      }
      v15 = v14 + *((_DWORD *)v13 - 2);
      if ( v15 < v14 )
        break;
      v14 += *((_DWORD *)v13 - 2);
      a2[5] = v15;
      v13 = (_QWORD *)*v13;
    }
    a2[5] = -1;
    WdLogSingleEntry2(3LL, a1, -1073741675LL);
    WdLogGlobalForLineNumber = 8314;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)ObjectA, 0LL, 0);
    return 3221225621LL;
  }
  else
  {
    if ( (*(_DWORD *)(ObjectA + 12) & 0x20) == 0 )
    {
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
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(ObjectA + 68), 0xFFFFFFFF) == 1 )
        DXGSHAREDRESOURCE::Destroy(v28, 0LL, 0);
      return 3221225485LL;
    }
    v34[2] = *(_DWORD *)(ObjectA + 216);
    v34[0] = *(_DWORD *)(ObjectA + 208);
    v23 = *(_DWORD *)(ObjectA + 212);
    *((_DWORD *)&v33.StandardAllocationType + 1) = 0;
    v34[1] = v23;
    v33.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v34;
    v35 = 0LL;
    v34[3] = 7;
    memset(&v33.pAllocationPrivateDriverData, 0, 32);
    v33.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
    StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v11, &v33);
    v25 = StandardAllocationDriverData;
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
        v25,
        0LL,
        0LL,
        0LL);
LABEL_43:
      `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v28);
      return (unsigned int)v25;
    }
    AllocationPrivateDriverDataSize = v33.AllocationPrivateDriverDataSize;
    ResourcePrivateDriverDataSize = v33.ResourcePrivateDriverDataSize;
    if ( !v33.AllocationPrivateDriverDataSize && !v33.ResourcePrivateDriverDataSize )
    {
      WdLogSingleEntry2(2LL, a1, -1073741811LL);
      WdLogGlobalForLineNumber = 8289;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverData buffer"
         ", returning 0x%I64x",
        a1,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v25) = -1073741811;
      goto LABEL_43;
    }
    a2[7] = *(_DWORD *)(ObjectA + 132);
    a2[6] = ResourcePrivateDriverDataSize;
    a2[4] = *(_DWORD *)(ObjectA + 112);
    a2[5] = AllocationPrivateDriverDataSize;
LABEL_24:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(ObjectA + 68), 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy(v28, 0LL, 0);
    return 0LL;
  }
}
