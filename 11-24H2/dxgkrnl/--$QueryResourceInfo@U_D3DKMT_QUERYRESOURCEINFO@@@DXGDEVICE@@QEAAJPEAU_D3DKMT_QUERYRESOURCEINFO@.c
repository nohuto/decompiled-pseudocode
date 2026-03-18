/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14038AAAC
 * Callers:
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z @ 0x140389AA4 (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAIIPEAPEAV1@22@Z.c)
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x14038A1B0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkQueryResourceInfo @ 0x14038A4D0 (DxgkQueryResourceInfo.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14041F9CC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x140007CCC (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x14000C48C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140352CD4 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x140353E90 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDE.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140355CF0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // r12
  struct DXGPROCESS *Current; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rbx
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rbx
  int v12; // edx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  ADAPTER_RENDER *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // r9d
  int v22; // eax
  int StandardAllocationDriverData; // eax
  __int64 v24; // r12
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // eax
  DXGSHAREDRESOURCE *v27; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v28[24]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v29[8]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v30; // [rsp+78h] [rbp-41h]
  int v31; // [rsp+80h] [rbp-39h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v32; // [rsp+88h] [rbp-31h] BYREF
  _DWORD v33[4]; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+Fh]

  v3 = a3;
  if ( !a3 )
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 8255;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v28);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  if ( (*((_DWORD *)Current + 102) & 0x100) == 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v3, 2);
    goto LABEL_12;
  }
  v9 = *((_QWORD *)Current + 74);
  v27 = (DXGSHAREDRESOURCE *)(v9 + 248);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 248));
  v10 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( v10 < *(_DWORD *)(v9 + 296) )
  {
    v11 = *(_QWORD *)(v9 + 280);
    if ( (((unsigned int)v3 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60)
      && (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) == 0 )
    {
      v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
      if ( v12 )
      {
        if ( v12 == 2 )
        {
          ObjectA = *(_QWORD *)(v11 + 16LL * v10);
          goto LABEL_11;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  ObjectA = 0LL;
LABEL_11:
  _InterlockedDecrement((volatile signed __int32 *)v27 + 4);
  ExReleasePushLockSharedEx(v27, 0LL);
  KeLeaveCriticalRegion();
LABEL_12:
  if ( !ObjectA )
  {
    WdLogSingleEntry3(3LL, a1, v3, -1073741811LL);
    WdLogGlobalForLineNumber = 8237;
LABEL_14:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
    return 3221225485LL;
  }
  _m_prefetchw((const void *)(ObjectA + 68));
  v13 = *(_DWORD *)(ObjectA + 68);
  do
  {
    if ( !v13 )
    {
      WdLogSingleEntry3(3LL, a1, v3, -1073741811LL);
      WdLogGlobalForLineNumber = 8246;
      goto LABEL_14;
    }
    v14 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(ObjectA + 68), v13 + 1, v13);
  }
  while ( v14 != v13 );
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
  v15 = *(ADAPTER_RENDER **)(a1 + 16);
  v27 = (DXGSHAREDRESOURCE *)ObjectA;
  if ( *(ADAPTER_RENDER **)(ObjectA + 80) != v15
    || (v16 = *(_QWORD *)(a1 + 1896)) != 0
    && !*(_QWORD *)(v16 + 3128)
    && (v17 = *(_QWORD *)(ObjectA + 96)) != 0
    && v17 != v16 )
  {
    if ( (*(_DWORD *)(ObjectA + 12) & 0x20) != 0 )
    {
      v33[2] = *(_DWORD *)(ObjectA + 216);
      v33[0] = *(_DWORD *)(ObjectA + 208);
      v22 = *(_DWORD *)(ObjectA + 212);
      *((_DWORD *)&v32.StandardAllocationType + 1) = 0;
      v33[1] = v22;
      v32.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v33;
      v34 = 0LL;
      v33[3] = 7;
      memset(&v32.pAllocationPrivateDriverData, 0, 32);
      v32.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v15, &v32, (__int64)v15);
      v24 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData >= 0 )
      {
        AllocationPrivateDriverDataSize = v32.AllocationPrivateDriverDataSize;
        ResourcePrivateDriverDataSize = v32.ResourcePrivateDriverDataSize;
        if ( v32.AllocationPrivateDriverDataSize || v32.ResourcePrivateDriverDataSize )
        {
          a2[7] = *(_DWORD *)(ObjectA + 132);
          a2[6] = ResourcePrivateDriverDataSize;
          a2[4] = *(_DWORD *)(ObjectA + 112);
          a2[5] = AllocationPrivateDriverDataSize;
          goto LABEL_45;
        }
        WdLogSingleEntry2(2LL, a1, -1073741811LL);
        WdLogGlobalForLineNumber = 8337;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverData buff"
           "er, returning 0x%I64x",
          a1,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v24) = -1073741811;
      }
      else
      {
        WdLogSingleEntry2(2LL, a1, StandardAllocationDriverData);
        WdLogGlobalForLineNumber = 8329;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Device 0x%I64x: Failed to find size of PrivateDriverData buffers, returning 0x%I64x",
          a1,
          v24,
          0LL,
          0LL,
          0LL);
      }
      `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE((volatile signed __int32 **)&v27);
      return (unsigned int)v24;
    }
    WdLogSingleEntry3(2LL, a1, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 8302;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Query resource info is called for a resource, which is created on a different adapter. Returning 0x%I64x",
      a1,
      -1073741811LL,
      1LL,
      0LL,
      0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(ObjectA + 68), 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy(v27, 0LL, 0);
    return 3221225485LL;
  }
  v30 = ObjectA + 32;
  if ( ObjectA != -32 && *(struct _KTHREAD **)(ObjectA + 40) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ObjectA + 32));
  a2[5] = 0;
  v18 = *(_QWORD **)(ObjectA + 136);
  v31 = 2;
  if ( v18 == (_QWORD *)(ObjectA + 136) )
  {
LABEL_32:
    a2[6] = *(_DWORD *)(ObjectA + 128);
    a2[7] = *(_DWORD *)(ObjectA + 132);
    a2[4] = *(_DWORD *)(ObjectA + 112);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
LABEL_45:
    `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE((volatile signed __int32 **)&v27);
    return 0LL;
  }
  v19 = 0;
  while ( 1 )
  {
    v20 = v19 + *((_DWORD *)v18 - 2);
    if ( v20 < v19 )
      break;
    v19 += *((_DWORD *)v18 - 2);
    a2[5] = v20;
    v18 = (_QWORD *)*v18;
    if ( v18 == (_QWORD *)(ObjectA + 136) )
      goto LABEL_32;
  }
  a2[5] = -1;
  WdLogSingleEntry2(3LL, a1, -1073741675LL);
  WdLogGlobalForLineNumber = 8362;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE((volatile signed __int32 **)&v27);
  return 3221225621LL;
}
