/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1402947A4
 * Callers:
 *     DxgkOfferAllocations @ 0x140295550 (DxgkOfferAllocations.c)
 * Callees:
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x14001415C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x14003ECA4 (-VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFE.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x1402262D4 (-VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402A0560 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DXGDEVICE::OfferAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_OFFERALLOCATIONS *a2,
        char a3,
        __int64 a4)
{
  unsigned int v6; // edi
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 NumAllocations; // r15
  D3DKMT_HANDLE *pResources; // rdx
  const D3DKMT_HANDLE *HandleList; // r12
  const unsigned int *v11; // r13
  _BYTE *Pool2; // rcx
  UINT i; // r15d
  const D3DKMT_HANDLE *v14; // rdx
  UINT k; // r15d
  DXGALLOCATIONREFERENCE *AllocationSafe; // r12
  struct DXGTHREAD *DxgThread; // rax
  ULONG_PTR Count; // rdx
  int v19; // eax
  unsigned int v20; // r12d
  UINT v21; // r12d
  struct DXGTHREAD *v22; // rax
  unsigned int v24; // ebx
  __int64 v25; // r15
  __int64 j; // r15
  struct VIDMM_MULTI_ALLOC *v27; // r8
  int v28; // eax
  unsigned int v29; // r13d
  __int64 v30; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v33; // [rsp+58h] [rbp-D0h] BYREF
  unsigned int *v34; // [rsp+60h] [rbp-C8h] BYREF
  DXGDEVICE *v35; // [rsp+68h] [rbp-C0h] BYREF
  struct _EX_RUNDOWN_REF *v36; // [rsp+70h] [rbp-B8h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-B0h]
  _BYTE v38[16]; // [rsp+80h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v39; // [rsp+90h] [rbp-98h] BYREF
  PVOID P; // [rsp+A0h] [rbp-88h]
  _BYTE v41[64]; // [rsp+A8h] [rbp-80h] BYREF
  int v42; // [rsp+E8h] [rbp-40h]

  v35 = this;
  v6 = 0;
  v7 = 0LL;
  v36 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3021LL) )
  {
    WdLogSingleEntry2(4LL, this, 0LL);
    WdLogGlobalForLineNumber = 8339;
    goto LABEL_50;
  }
  NumAllocations = a2->NumAllocations;
  if ( !(_DWORD)NumAllocations )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8348;
    goto LABEL_49;
  }
  pResources = a2->pResources;
  HandleList = a2->HandleList;
  if ( (pResources != 0LL) == (HandleList != 0LL) )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8357;
LABEL_49:
    v6 = -1073741811;
LABEL_50:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36);
    return v6;
  }
  if ( pResources )
    HandleList = pResources;
  v11 = HandleList;
  v34 = (unsigned int *)HandleList;
  Pool2 = 0LL;
  P = 0LL;
  v42 = 0;
  if ( (unsigned int)NumAllocations <= 0x10 )
  {
    P = v41;
    memset(v41, 0, 4LL * (unsigned int)NumAllocations);
    Pool2 = v41;
LABEL_8:
    v42 = NumAllocations;
    goto LABEL_9;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)NumAllocations >= 4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4 * NumAllocations, 1265072196LL, a4);
    P = Pool2;
    goto LABEL_8;
  }
LABEL_9:
  if ( !a3 )
    goto LABEL_16;
  v11 = (const unsigned int *)Pool2;
  v34 = (unsigned int *)Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry2(6LL, this, a2->NumAllocations);
    WdLogGlobalForLineNumber = 8372;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Device 0x%I64x: Cannot allocate allocation handle array 0x%I64x",
      (__int64)this,
      a2->NumAllocations,
      0LL,
      0LL,
      0LL);
    if ( P != v41 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v42 = 0;
    v6 = -1073741801;
    goto LABEL_50;
  }
  for ( i = 0; i < a2->NumAllocations; ++i )
  {
    v14 = &HandleList[i];
    if ( (unsigned __int64)v14 >= MmUserProbeAddress )
      v14 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
    RtlCopyVolatileMemory((void *)&v11[i], v14, 4uLL);
  }
LABEL_16:
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 426) > 0x10u )
    {
      v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      Current = DXGPROCESS::GetCurrent();
      v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v30 + 4664),
              Current,
              this,
              a2,
              v11);
      if ( P != v41 && P )
        ExFreePoolWithTag(P, 0);
    }
    else
    {
      if ( P != v41 && P )
        ExFreePoolWithTag(P, 0);
      v24 = 0;
    }
    goto LABEL_47;
  }
  if ( a2->pResources )
  {
    v21 = 0;
LABEL_35:
    if ( v21 >= a2->NumAllocations )
      goto LABEL_36;
    v25 = v11[v21];
    DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v33, v11[v21]);
    if ( v33 )
    {
      if ( *(DXGDEVICE **)(v33 + 8) == this )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, (struct DXGFASTMUTEX *const)(v33 + 80), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
        for ( j = *(_QWORD *)(v33 + 24); ; j = *(_QWORD *)(j + 64) )
        {
          if ( !j )
          {
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v33);
            ++v21;
            v11 = v34;
            goto LABEL_35;
          }
          v27 = *(struct VIDMM_MULTI_ALLOC **)(j + 24);
          if ( !v27 )
          {
            WdLogSingleEntry1(2LL, j);
            WdLogGlobalForLineNumber = 8442;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Allocation 0x%p does not have a VidMm handle",
              j,
              0LL,
              0LL,
              0LL,
              0LL);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
            goto LABEL_75;
          }
          v28 = VIDMM_EXPORT::VidMmOfferAllocation(
                  *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                  v27,
                  a2->Priority,
                  a2->Flags);
          v29 = v28;
          if ( v28 < 0 )
            break;
        }
        WdLogSingleEntry3(3LL, this, j, v28);
        WdLogGlobalForLineNumber = 8457;
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v33);
        if ( P != v41 && P )
          ExFreePoolWithTag(P, 0);
        v24 = v29;
        goto LABEL_47;
      }
      WdLogSingleEntry3(2LL, this, v33, -1073741811LL);
      WdLogGlobalForLineNumber = 8428;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Resource 0x%p does not belong to the provided adapter, returning 0x%I64x",
        (__int64)this,
        v33,
        -1073741811LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry3(3LL, this, v25, -1073741811LL);
      WdLogGlobalForLineNumber = 8418;
    }
LABEL_75:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v33);
LABEL_53:
    if ( P != v41 && P )
      ExFreePoolWithTag(P, 0);
    v24 = -1073741811;
LABEL_47:
    P = 0LL;
    v42 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36);
    return v24;
  }
  for ( k = 0; k < a2->NumAllocations; ++k )
  {
    v37 = v11[k];
    AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v39, v37);
    if ( v7 )
      ExReleaseRundownProtection(v7 + 11);
    v7 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v36 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    if ( v39 )
      ExReleaseRundownProtection(v39 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
    {
      v35 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v35) >= 0 )
      {
        DxgThread = v35;
        if ( v35 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v35 = DxgThread) != 0LL) )
        {
          if ( *((_DWORD *)DxgThread + 12) )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
      }
    }
    if ( !v7 )
    {
      WdLogSingleEntry3(3LL, this, v37, -1073741811LL);
      WdLogGlobalForLineNumber = 8477;
      goto LABEL_53;
    }
    if ( (DXGDEVICE *)v7[1].Count != this )
    {
      WdLogSingleEntry3(2LL, this, v7, -1073741811LL);
      WdLogGlobalForLineNumber = 8487;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Allocation 0x%p does not belong to the provided adapter, returning 0x%I64x",
        (__int64)this,
        (__int64)v7,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_53;
    }
    Count = v7[3].Count;
    if ( !Count )
    {
      WdLogSingleEntry1(2LL, v7);
      WdLogGlobalForLineNumber = 8495;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Allocation 0x%p does not have a VidMm handle",
        (__int64)v7,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_53;
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 616LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            Count,
            (unsigned int)a2->Priority,
            a2->Flags.Value);
    v20 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry3(3LL, this, v7, v19);
      WdLogGlobalForLineNumber = 8510;
      if ( P != v41 && P )
        ExFreePoolWithTag(P, 0);
      v24 = v20;
      goto LABEL_47;
    }
  }
LABEL_36:
  if ( P != v41 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v42 = 0;
  if ( v7 )
    ExReleaseRundownProtection(v7 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
  {
    v34 = 0LL;
    if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v34) >= 0 )
    {
      v22 = (struct DXGTHREAD *)v34;
      if ( v34 || (v22 = DxgkThreadObjectCreateDxgThread(1), (v34 = (unsigned int *)v22) != 0LL) )
      {
        if ( *((_DWORD *)v22 + 12) )
        {
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v22 + 12), 0LL, 0LL);
          WdLogGlobalForLineNumber = 73;
        }
      }
    }
  }
  return 0LL;
}
