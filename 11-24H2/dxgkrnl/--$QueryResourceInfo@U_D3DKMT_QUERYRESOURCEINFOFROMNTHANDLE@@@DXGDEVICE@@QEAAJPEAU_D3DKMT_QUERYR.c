/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14038CF98
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401E5AAC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x14038C440 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x14038C890 (DxgkQueryResourceInfoFromNtHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x140355CF0 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ??1ENSURE_SHARED_RESOURCE_DEREFERENCE@?1???$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z@QEAA@XZ @ 0x1403D2C94 (--1ENSURE_SHARED_RESOURCE_DEREFERENCE@-1---$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHA.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  unsigned int v7; // ebx
  ADAPTER_RENDER *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  int v14; // eax
  int StandardAllocationDriverData; // eax
  __int64 v16; // r15
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // eax
  __int64 v20; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v21[8]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v22; // [rsp+60h] [rbp-29h]
  int v23; // [rsp+68h] [rbp-21h]
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v24; // [rsp+70h] [rbp-19h] BYREF
  _DWORD v25[4]; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+27h]

  if ( !a4 )
  {
    v7 = -1073741811;
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
    return v7;
  }
  v6 = *(_QWORD *)(a4 + 16);
  if ( v6 )
  {
    v8 = *(ADAPTER_RENDER **)(a1 + 16);
    v20 = 0LL;
    if ( *(ADAPTER_RENDER **)(v6 + 80) == v8 )
    {
      v9 = *(_QWORD *)(a1 + 1896);
      if ( !v9 || *(_QWORD *)(v9 + 3128) || (v10 = *(_QWORD *)(v6 + 96)) == 0 || v10 == v9 )
      {
        v22 = v6 + 32;
        if ( v6 != -32 && *(struct _KTHREAD **)(v6 + 40) == KeGetCurrentThread() )
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
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 32));
        a2[7] = 0;
        v11 = *(_QWORD **)(v6 + 136);
        v23 = 2;
        if ( v11 != (_QWORD *)(v6 + 136) )
        {
          v12 = 0;
          while ( 1 )
          {
            v13 = v12 + *((_DWORD *)v11 - 2);
            if ( v13 < v12 )
              break;
            v12 += *((_DWORD *)v11 - 2);
            a2[7] = v13;
            v11 = (_QWORD *)*v11;
            if ( v11 == (_QWORD *)(v6 + 136) )
              goto LABEL_16;
          }
          a2[7] = -1;
          v7 = -1073741675;
          WdLogSingleEntry2(3LL, a1, -1073741675LL);
          WdLogGlobalForLineNumber = 8362;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
          `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v20);
          return v7;
        }
LABEL_16:
        a2[8] = *(_DWORD *)(v6 + 128);
        a2[9] = *(_DWORD *)(v6 + 132);
        a2[6] = *(_DWORD *)(v6 + 112);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
LABEL_27:
        `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v20);
        return 0LL;
      }
    }
    if ( (*(_DWORD *)(v6 + 12) & 0x20) == 0 )
    {
      v7 = -1073741811;
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
      return v7;
    }
    v25[2] = *(_DWORD *)(v6 + 216);
    v25[0] = *(_DWORD *)(v6 + 208);
    v14 = *(_DWORD *)(v6 + 212);
    *((_DWORD *)&v24.StandardAllocationType + 1) = 0;
    v25[1] = v14;
    v24.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)v25;
    v26 = 0LL;
    v25[3] = 7;
    memset(&v24.pAllocationPrivateDriverData, 0, 32);
    v24.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
    StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v8, &v24, (__int64)v8);
    v16 = StandardAllocationDriverData;
    if ( StandardAllocationDriverData >= 0 )
    {
      AllocationPrivateDriverDataSize = v24.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v24.ResourcePrivateDriverDataSize;
      if ( v24.AllocationPrivateDriverDataSize || v24.ResourcePrivateDriverDataSize )
      {
        a2[9] = *(_DWORD *)(v6 + 132);
        a2[8] = ResourcePrivateDriverDataSize;
        a2[6] = *(_DWORD *)(v6 + 112);
        a2[7] = AllocationPrivateDriverDataSize;
        goto LABEL_27;
      }
      WdLogSingleEntry2(2LL, a1, -1073741811LL);
      WdLogGlobalForLineNumber = 8337;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Driver returned zero size for pAllocationPrivateDriverData and pResourcePrivateDriverData buffer"
         ", returning 0x%I64x",
        a1,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v16) = -1073741811;
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
        v16,
        0LL,
        0LL,
        0LL);
    }
    `DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>'::`2'::ENSURE_SHARED_RESOURCE_DEREFERENCE::~ENSURE_SHARED_RESOURCE_DEREFERENCE(&v20);
    return (unsigned int)v16;
  }
  v7 = -1073741811;
  WdLogSingleEntry3(3LL, a1, a4, -1073741811LL);
  WdLogGlobalForLineNumber = 8205;
  return v7;
}
