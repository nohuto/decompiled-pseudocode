/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x140299D04
 * Callers:
 *     DxgkOfferAllocations @ 0x14029B100 (DxgkOfferAllocations.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140010F54 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x14003E694 (-VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFE.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x14022CBC0 (-VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(DXGDEVICE *this, struct _D3DKMT_OFFERALLOCATIONS *a2, char a3)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 NumAllocations; // r15
  D3DKMT_HANDLE *pResources; // rdx
  const D3DKMT_HANDLE *HandleList; // r12
  const unsigned int *v10; // r13
  _BYTE *Pool2; // rcx
  UINT i; // r15d
  const D3DKMT_HANDLE *v13; // rdx
  UINT k; // r15d
  DXGALLOCATIONREFERENCE *AllocationSafe; // r12
  struct DXGTHREAD *DxgThread; // rax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // r12d
  UINT v20; // r12d
  struct DXGTHREAD *v21; // rax
  unsigned int v23; // ebx
  __int64 v24; // r15
  __int64 j; // r15
  struct VIDMM_MULTI_ALLOC *v26; // r8
  int v27; // eax
  unsigned int v28; // r13d
  __int64 v29; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v32; // [rsp+58h] [rbp-D0h] BYREF
  unsigned int *v33; // [rsp+60h] [rbp-C8h] BYREF
  DXGDEVICE *v34; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+78h] [rbp-B0h]
  _BYTE v37[16]; // [rsp+80h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v38; // [rsp+90h] [rbp-98h] BYREF
  PVOID P; // [rsp+A0h] [rbp-88h]
  _BYTE v40[64]; // [rsp+A8h] [rbp-80h] BYREF
  int v41; // [rsp+E8h] [rbp-40h]

  v34 = this;
  v5 = 0;
  v6 = 0LL;
  v35 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3021LL) )
  {
    WdLogSingleEntry2(4LL, this, 0LL);
    WdLogGlobalForLineNumber = 8387;
    goto LABEL_50;
  }
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8396;
    goto LABEL_49;
  }
  pResources = a2->pResources;
  HandleList = a2->HandleList;
  if ( (pResources != 0LL) == (HandleList != 0LL) )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8405;
LABEL_49:
    v5 = -1073741811;
LABEL_50:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
    return v5;
  }
  if ( pResources )
    HandleList = pResources;
  v10 = HandleList;
  v33 = (unsigned int *)HandleList;
  Pool2 = 0LL;
  P = 0LL;
  v41 = 0;
  if ( (unsigned int)NumAllocations <= 0x10 )
  {
    P = v40;
    memset(v40, 0, 4LL * (unsigned int)NumAllocations);
    Pool2 = v40;
LABEL_8:
    v41 = NumAllocations;
    goto LABEL_9;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)NumAllocations >= 4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4 * NumAllocations, 1265072196LL);
    P = Pool2;
    goto LABEL_8;
  }
LABEL_9:
  if ( !a3 )
    goto LABEL_16;
  v10 = (const unsigned int *)Pool2;
  v33 = (unsigned int *)Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry2(6LL, this, a2->NumAllocations);
    WdLogGlobalForLineNumber = 8420;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Cannot allocate allocation handle array 0x%I64x",
      (__int64)this,
      a2->NumAllocations,
      0LL,
      0LL,
      0LL);
    if ( P != v40 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v41 = 0;
    v5 = -1073741801;
    goto LABEL_50;
  }
  for ( i = 0; i < a2->NumAllocations; ++i )
  {
    v13 = &HandleList[i];
    if ( (unsigned __int64)v13 >= MmUserProbeAddress )
      v13 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
    RtlCopyVolatileMemory((void *)&v10[i], v13, 4uLL);
  }
LABEL_16:
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) > 0x10u )
    {
      v29 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      Current = DXGPROCESS::GetCurrent();
      v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v29 + 4664),
              Current,
              this,
              a2,
              v10);
      if ( P != v40 && P )
        ExFreePoolWithTag(P, 0);
    }
    else
    {
      if ( P != v40 && P )
        ExFreePoolWithTag(P, 0);
      v23 = 0;
    }
    goto LABEL_47;
  }
  if ( a2->pResources )
  {
    v20 = 0;
LABEL_35:
    if ( v20 >= a2->NumAllocations )
      goto LABEL_36;
    v24 = v10[v20];
    DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v32, v10[v20]);
    if ( v32 )
    {
      if ( *(DXGDEVICE **)(v32 + 8) == this )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, (struct DXGFASTMUTEX *const)(v32 + 80), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
        for ( j = *(_QWORD *)(v32 + 24); ; j = *(_QWORD *)(j + 64) )
        {
          if ( !j )
          {
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v32);
            ++v20;
            v10 = v33;
            goto LABEL_35;
          }
          v26 = *(struct VIDMM_MULTI_ALLOC **)(j + 24);
          if ( !v26 )
          {
            WdLogSingleEntry1(2LL, j);
            WdLogGlobalForLineNumber = 8490;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Allocation 0x%p does not have a VidMm handle",
              j,
              0LL,
              0LL,
              0LL,
              0LL);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
            goto LABEL_75;
          }
          v27 = VIDMM_EXPORT::VidMmOfferAllocation(
                  *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                  v26,
                  a2->Priority,
                  a2->Flags);
          v28 = v27;
          if ( v27 < 0 )
            break;
        }
        WdLogSingleEntry3(3LL, this, j, v27);
        WdLogGlobalForLineNumber = 8505;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v32);
        if ( P != v40 && P )
          ExFreePoolWithTag(P, 0);
        v23 = v28;
        goto LABEL_47;
      }
      WdLogSingleEntry3(2LL, this, v32, -1073741811LL);
      WdLogGlobalForLineNumber = 8476;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Resource 0x%p does not belong to the provided adapter, returning 0x%I64x",
        (__int64)this,
        v32,
        -1073741811LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry3(3LL, this, v24, -1073741811LL);
      WdLogGlobalForLineNumber = 8466;
    }
LABEL_75:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v32);
LABEL_53:
    if ( P != v40 && P )
      ExFreePoolWithTag(P, 0);
    v23 = -1073741811;
LABEL_47:
    P = 0LL;
    v41 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35);
    return v23;
  }
  for ( k = 0; k < a2->NumAllocations; ++k )
  {
    v36 = v10[k];
    AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v38, v36);
    if ( v6 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 88));
    v6 = *(_QWORD *)AllocationSafe;
    v35 = *(_QWORD *)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    if ( v38 )
      ExReleaseRundownProtection(v38 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
    {
      v34 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v34) >= 0 )
      {
        DxgThread = v34;
        if ( v34 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v34 = DxgThread) != 0LL) )
        {
          if ( *((_DWORD *)DxgThread + 12) )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
      }
    }
    if ( !v6 )
    {
      WdLogSingleEntry3(3LL, this, v36, -1073741811LL);
      WdLogGlobalForLineNumber = 8525;
      goto LABEL_53;
    }
    if ( *(DXGDEVICE **)(v6 + 8) != this )
    {
      WdLogSingleEntry3(2LL, this, v6, -1073741811LL);
      WdLogGlobalForLineNumber = 8535;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Allocation 0x%p does not belong to the provided adapter, returning 0x%I64x",
        (__int64)this,
        v6,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_53;
    }
    v17 = *(_QWORD *)(v6 + 24);
    if ( !v17 )
    {
      WdLogSingleEntry1(2LL, v6);
      WdLogGlobalForLineNumber = 8543;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Allocation 0x%p does not have a VidMm handle",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_53;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 616LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            v17,
            (unsigned int)a2->Priority,
            a2->Flags.Value);
    v19 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry3(3LL, this, v6, v18);
      WdLogGlobalForLineNumber = 8558;
      if ( P != v40 && P )
        ExFreePoolWithTag(P, 0);
      v23 = v19;
      goto LABEL_47;
    }
  }
LABEL_36:
  if ( P != v40 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v41 = 0;
  if ( v6 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 88));
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
  {
    v33 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v33) >= 0 )
    {
      v21 = (struct DXGTHREAD *)v33;
      if ( v33 || (v21 = DxgkThreadObjectCreateDxgThread(1), (v33 = (unsigned int *)v21) != 0LL) )
      {
        if ( *((_DWORD *)v21 + 12) )
        {
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v21 + 12), 0LL, 0LL);
          WdLogGlobalForLineNumber = 73;
        }
      }
    }
  }
  return 0LL;
}
