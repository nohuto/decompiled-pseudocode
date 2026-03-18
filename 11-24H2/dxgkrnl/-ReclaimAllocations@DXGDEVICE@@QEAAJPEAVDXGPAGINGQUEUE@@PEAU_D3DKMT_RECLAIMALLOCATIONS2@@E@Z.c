/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x14029C930
 * Callers:
 *     DxgkReclaimAllocations2 @ 0x14029BF60 (DxgkReclaimAllocations2.c)
 *     DxgkReclaimAllocations @ 0x1403937A0 (DxgkReclaimAllocations.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140010F54 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x14040045C (-VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEB.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        DXGDEVICE *this,
        struct DXGPAGINGQUEUE *a2,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3,
        char a4)
{
  char v4; // r10
  struct _EX_RUNDOWN_REF *v7; // rbx
  __int64 NumAllocations; // rsi
  unsigned int v9; // r12d
  D3DKMT_HANDLE *pResources; // rdx
  unsigned int *HandleList; // r14
  const unsigned int *v12; // r13
  UINT j; // esi
  __int64 v14; // r8
  unsigned int *v15; // rdx
  UINT m; // esi
  __int64 v17; // r13
  DXGALLOCATIONREFERENCE *AllocationSafe; // r14
  struct DXGTHREAD *DxgThread; // rax
  DXGDEVICE *Count; // r8
  ULONG_PTR v21; // r8
  BOOL *v22; // rdx
  __int64 v23; // r10
  int v24; // eax
  unsigned int v25; // r14d
  BOOL *pDiscarded; // rdx
  BOOL *v27; // rdx
  struct DXGPAGINGQUEUE *v28; // rax
  PVOID v30; // rcx
  UINT v31; // r14d
  __int64 v32; // rsi
  DXGDEVICE *v33; // r8
  __int64 v34; // rsi
  int v35; // r8d
  __int64 v36; // r8
  int *v37; // rdx
  __int64 v38; // r10
  int v39; // eax
  __int64 v40; // rcx
  UINT k; // edx
  BOOL *v42; // rcx
  BOOL *v43; // rdx
  PVOID v44; // rcx
  __int64 v45; // rbx
  struct DXGPROCESS *Current; // rax
  unsigned int v47; // ebx
  UINT i; // edx
  BOOL *v49; // r8
  struct _EX_RUNDOWN_REF *v51; // [rsp+58h] [rbp-F0h] BYREF
  __int64 *v52; // [rsp+60h] [rbp-E8h] BYREF
  BOOL v53; // [rsp+68h] [rbp-E0h] BYREF
  struct DXGPAGINGQUEUE *v54; // [rsp+70h] [rbp-D8h] BYREF
  int v55; // [rsp+78h] [rbp-D0h] BYREF
  int v56; // [rsp+7Ch] [rbp-CCh]
  DXGDEVICE *v57; // [rsp+80h] [rbp-C8h]
  UINT v58; // [rsp+88h] [rbp-C0h]
  unsigned int v59; // [rsp+8Ch] [rbp-BCh]
  struct DXGTHREAD *v60; // [rsp+90h] [rbp-B8h] BYREF
  _BYTE v61[16]; // [rsp+98h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v62; // [rsp+A8h] [rbp-A0h] BYREF
  PVOID P; // [rsp+B0h] [rbp-98h]
  _BYTE v64[64]; // [rsp+B8h] [rbp-90h] BYREF
  int v65; // [rsp+F8h] [rbp-50h]

  v4 = a4;
  v54 = a2;
  v57 = this;
  v7 = 0LL;
  v51 = 0LL;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3021LL) )
  {
    if ( a3->pDiscarded )
    {
      for ( i = 0; ; ++i )
      {
        v58 = i;
        if ( i >= a3->NumAllocations )
          break;
        v49 = &a3->pDiscarded[i];
        if ( a4 && (unsigned __int64)v49 >= MmUserProbeAddress )
          v49 = (BOOL *)MmUserProbeAddress;
        *v49 = 0;
      }
    }
    WdLogSingleEntry2(4LL, this, 0LL);
    WdLogGlobalForLineNumber = 8605;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51);
    return 0LL;
  }
  NumAllocations = a3->NumAllocations;
  if ( !(_DWORD)NumAllocations )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8614;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51);
    return 3221225485LL;
  }
  v9 = 0;
  pResources = a3->pResources;
  HandleList = (unsigned int *)a3->HandleList;
  if ( (pResources != 0LL) == (HandleList != 0LL) )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 8625;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51);
    return 3221225485LL;
  }
  if ( pResources )
    HandleList = a3->pResources;
  v12 = HandleList;
  v52 = (__int64 *)HandleList;
  P = 0LL;
  v65 = 0;
  if ( (unsigned int)NumAllocations > 0x10 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)NumAllocations < 4 )
      goto LABEL_9;
    P = (PVOID)ExAllocatePool2(256LL, 4 * NumAllocations, 1265072196LL);
  }
  else
  {
    P = v64;
    memset(v64, 0, 4 * NumAllocations);
  }
  v65 = NumAllocations;
  v4 = a4;
LABEL_9:
  if ( v4 )
  {
    v12 = (const unsigned int *)P;
    v52 = (__int64 *)P;
    if ( !P )
    {
      WdLogSingleEntry2(6LL, this, a3->NumAllocations);
      WdLogGlobalForLineNumber = 8640;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Cannot allocate allocation handle array 0x%I64x",
        (__int64)this,
        a3->NumAllocations,
        0LL,
        0LL,
        0LL);
      P = 0LL;
      v65 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51);
      return 3221225495LL;
    }
    for ( j = 0; j < a3->NumAllocations; ++j )
    {
      v14 = j;
      v15 = &HandleList[v14];
      if ( (unsigned __int64)&HandleList[v14] >= MmUserProbeAddress )
        v15 = (unsigned int *)MmUserProbeAddress;
      RtlCopyVolatileMemory((char *)P + v14 * 4, v15, 4uLL);
    }
  }
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 434) > 0x10u )
    {
      v45 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      Current = DXGPROCESS::GetCurrent(v40);
      v47 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v45 + 4664),
              Current,
              this,
              v54,
              a3,
              v12);
      if ( P != v64 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v65 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51);
      return v47;
    }
    else
    {
      if ( a3->pDiscarded )
      {
        for ( k = 0; k < a3->NumAllocations; ++k )
          a3->pDiscarded[k] = 0;
      }
      if ( P != v64 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v65 = 0;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51);
      return 0LL;
    }
  }
  else
  {
    if ( !a3->pResources )
    {
      for ( m = 0; ; ++m )
      {
        if ( m >= a3->NumAllocations )
          goto LABEL_44;
        v17 = v12[m];
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v62, v17);
        if ( v7 )
          ExReleaseRundownProtection(v7 + 11);
        v7 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        v51 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        *(_QWORD *)AllocationSafe = 0LL;
        if ( v62 )
          ExReleaseRundownProtection(v62 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
        {
          v60 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v60) >= 0 )
          {
            DxgThread = v60;
            if ( v60 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v60 = DxgThread) != 0LL) )
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
          break;
        Count = (DXGDEVICE *)v7[1].Count;
        if ( Count != this )
        {
          WdLogSingleEntry2(2LL, this, Count);
          WdLogGlobalForLineNumber = 8810;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Mismatch between device and allocation device. Device: 0x%I64x, Allocation Device: 0x%I64x",
            (__int64)this,
            v7[1].Count,
            0LL,
            0LL,
            0LL);
          goto LABEL_58;
        }
        v21 = v7[3].Count;
        if ( !v21 )
        {
          WdLogSingleEntry1(2LL, v7);
          WdLogGlobalForLineNumber = 8818;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Allocation 0x%p does not have a VidMm handle",
            (__int64)v7,
            0LL,
            0LL,
            0LL,
            0LL);
          v30 = P;
          if ( P == v64 )
            goto LABEL_59;
          goto LABEL_101;
        }
        v53 = 0;
        v22 = &v53;
        if ( !a3->pDiscarded )
          v22 = 0LL;
        if ( v54 )
          v23 = *((_QWORD *)v54 + 4);
        else
          v23 = 0LL;
        v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, UINT64 *, BOOL *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                                  + 8LL)
                                                                                      + 624LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                v23,
                v21,
                &a3->PagingFenceValue,
                v22);
        v25 = v24;
        if ( v24 < 0 )
        {
          WdLogSingleEntry3(3LL, this, v7, v24);
          WdLogGlobalForLineNumber = 8835;
          if ( P != v64 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v65 = 0;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51);
          return v25;
        }
        if ( v24 == 259 )
          v9 = 259;
        pDiscarded = a3->pDiscarded;
        if ( pDiscarded )
        {
          if ( a4 )
          {
            v27 = &pDiscarded[m];
            if ( (unsigned __int64)v27 >= MmUserProbeAddress )
              v27 = (BOOL *)MmUserProbeAddress;
            *v27 = v53;
          }
          else
          {
            pDiscarded[m] = v53;
          }
        }
        v12 = (const unsigned int *)v52;
      }
      WdLogSingleEntry3(3LL, this, v17, -1073741811LL);
      WdLogGlobalForLineNumber = 8801;
LABEL_58:
      v30 = P;
      if ( P == v64 )
        goto LABEL_59;
LABEL_101:
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      goto LABEL_59;
    }
    v31 = 0;
LABEL_61:
    if ( v31 < a3->NumAllocations )
    {
      v32 = v12[v31];
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v52, v12[v31]);
      if ( v52 )
      {
        v33 = (DXGDEVICE *)v52[1];
        if ( v33 == this )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v61, (struct DXGFASTMUTEX *const)(v52 + 10), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
          v34 = v52[3];
          v35 = 0;
          while ( 1 )
          {
            v56 = v35;
            if ( !v34 )
              goto LABEL_88;
            v36 = *(_QWORD *)(v34 + 24);
            if ( !v36 )
              break;
            v55 = 0;
            v37 = &v55;
            if ( !a3->pDiscarded )
              v37 = 0LL;
            if ( v54 )
              v38 = *((_QWORD *)v54 + 4);
            else
              v38 = 0LL;
            v39 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, UINT64 *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                                                       + 624LL))(
                    *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                    v38,
                    v36,
                    &a3->PagingFenceValue,
                    v37);
            v59 = v39;
            if ( v39 < 0 )
            {
              WdLogSingleEntry3(3LL, this, v34, v39);
              WdLogGlobalForLineNumber = 8736;
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v52);
              if ( P != v64 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v65 = 0;
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51);
              return v59;
            }
            if ( v39 == 259 )
              v9 = 259;
            if ( v55 == 2 )
            {
              v35 = 2;
LABEL_88:
              v42 = a3->pDiscarded;
              if ( v42 )
              {
                if ( a4 )
                {
                  v43 = &v42[v31];
                  if ( (unsigned __int64)v43 >= MmUserProbeAddress )
                    v43 = (BOOL *)MmUserProbeAddress;
                  *v43 = v35;
                }
                else
                {
                  v42[v31] = v35;
                }
              }
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v52);
              ++v31;
              goto LABEL_61;
            }
            v35 = v56;
            if ( v55 == 1 )
              v35 = 1;
            v34 = *(_QWORD *)(v34 + 64);
          }
          WdLogSingleEntry1(2LL, v34);
          WdLogGlobalForLineNumber = 8719;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Allocation 0x%p does not have a VidMm handle",
            v34,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v52);
          v44 = P;
          if ( P == v64 )
            goto LABEL_59;
          goto LABEL_95;
        }
        WdLogSingleEntry2(2LL, this, v33);
        WdLogGlobalForLineNumber = 8704;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Mismatch between device and resource device. Device: 0x%I64x, Resource Device: 0x%I64x",
          (__int64)this,
          v52[1],
          0LL,
          0LL,
          0LL);
      }
      else
      {
        WdLogSingleEntry3(3LL, this, v32, -1073741811LL);
        WdLogGlobalForLineNumber = 8695;
      }
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v52);
      v44 = P;
      if ( P == v64 )
      {
LABEL_59:
        P = 0LL;
        v65 = 0;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v51);
        return 3221225485LL;
      }
LABEL_95:
      if ( v44 )
        ExFreePoolWithTag(v44, 0);
      goto LABEL_59;
    }
LABEL_44:
    if ( P != v64 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v65 = 0;
    if ( v7 )
      ExReleaseRundownProtection(v7 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
    {
      v54 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v54) >= 0 )
      {
        v28 = v54;
        if ( v54 || (v28 = DxgkThreadObjectCreateDxgThread(1), (v54 = v28) != 0LL) )
        {
          if ( *((_DWORD *)v28 + 12) )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v28 + 12), 0LL, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
      }
    }
    return v9;
  }
}
