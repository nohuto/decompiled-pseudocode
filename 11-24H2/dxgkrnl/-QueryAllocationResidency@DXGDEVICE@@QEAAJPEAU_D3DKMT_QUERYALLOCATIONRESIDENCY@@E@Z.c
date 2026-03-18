/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1401B1978
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1401B3220 (DxgkQueryAllocationResidency.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140010F54 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDMM_GLOBAL@@PEBUVIDMM_MULTI_ALLOC@@@Z @ 0x14006B77C (-VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDM.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x14022D730 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::QueryAllocationResidency(
        struct DXGPROCESS **this,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a2,
        unsigned __int8 a3)
{
  D3DKMT_HANDLE hResource; // r8d
  __int64 j; // rsi
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v9; // eax
  void *pResidencyStatus; // rcx
  __int64 AllocationCount; // rax
  __int64 i; // rsi
  const D3DKMT_HANDLE *v13; // rdx
  unsigned int v14; // r8d
  struct DXGPROCESS *v15; // r9
  D3DKMT_ALLOCATIONRESIDENCYSTATUS AllocationResidency; // edx
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v17; // rcx
  __int64 v18; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v19[48]; // [rsp+58h] [rbp-30h] BYREF
  D3DKMT_ALLOCATIONRESIDENCYSTATUS Src; // [rsp+98h] [rbp+10h] BYREF
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v21; // [rsp+A8h] [rbp+20h] BYREF

  v21 = 0;
  hResource = a2->hResource;
  if ( hResource && a2->AllocationCount )
  {
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 7153;
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)this[2] + 2) + 4664LL),
             this[5],
             (struct DXGDEVICE *)this,
             a3,
             a2);
  if ( !hResource )
  {
    AllocationCount = a2->AllocationCount;
    if ( (_DWORD)AllocationCount )
    {
      Src = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= a2->AllocationCount )
          return 0LL;
        if ( a3 )
        {
          v13 = &a2->phAllocationList[i];
          if ( (unsigned __int64)v13 >= MmUserProbeAddress )
            v13 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
          RtlCopyVolatileMemory(&Src, v13, 4uLL);
          v14 = Src;
        }
        else
        {
          v14 = a2->phAllocationList[i];
          Src = v14;
        }
        DXGPROCESS::GetAllocationSafe((__int64)this[5], (DXGALLOCATIONREFERENCE *)&v18, v14);
        if ( !v18 )
          break;
        v15 = this[2];
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL) + 16LL) != *((_QWORD *)v15 + 2) )
        {
          WdLogSingleEntry3(2LL, this, v18, -1073741811LL);
          WdLogGlobalForLineNumber = 7290;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)this,
            v18,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_37;
        }
        AllocationResidency = (unsigned int)VIDMM_EXPORT::VidMmQueryAllocationResidency(
                                              *((VIDMM_EXPORT **)v15 + 95),
                                              *((struct VIDMM_GLOBAL **)v15 + 96),
                                              *(const struct VIDMM_MULTI_ALLOC **)(v18 + 24));
        v21 = AllocationResidency;
        if ( a3 )
        {
          v17 = &a2->pResidencyStatus[i];
          if ( (unsigned __int64)v17 >= MmUserProbeAddress )
            v17 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v17, &v21, 4uLL);
        }
        else
        {
          a2->pResidencyStatus[i] = AllocationResidency;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18);
      }
      WdLogSingleEntry3(3LL, this, (unsigned int)Src, -1073741811LL);
      WdLogGlobalForLineNumber = 7281;
LABEL_37:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18);
      return 3221225485LL;
    }
    WdLogSingleEntry3(3LL, this, AllocationCount, -1073741811LL);
    WdLogGlobalForLineNumber = 7335;
    return 3221225485LL;
  }
  DXGPROCESS::GetResourceSafe((__int64)this[5], (DXGRESOURCEREFERENCE *)&v18, hResource);
  if ( !v18 )
  {
    WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
    WdLogGlobalForLineNumber = 7171;
LABEL_9:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v18);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL) + 16LL) != *((_QWORD *)this[2] + 2) )
  {
    WdLogSingleEntry3(2LL, this, v18, -1073741811LL);
    WdLogGlobalForLineNumber = 7180;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
      (__int64)this,
      v18,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_9;
  }
  Src = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINGPUMEMORY;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(v18 + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  for ( j = *(_QWORD *)(v18 + 24); j; j = *(_QWORD *)(j + 64) )
  {
    v9 = (unsigned int)VIDMM_EXPORT::VidMmQueryAllocationResidency(
                         *((VIDMM_EXPORT **)this[2] + 95),
                         *((struct VIDMM_GLOBAL **)this[2] + 96),
                         *(const struct VIDMM_MULTI_ALLOC **)(j + 24));
    v21 = v9;
    if ( v9 == D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT )
    {
      Src = D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
      break;
    }
    if ( v9 == D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINSHAREDMEMORY
      && Src != D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT )
    {
      Src = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINSHAREDMEMORY;
    }
  }
  if ( a3 )
  {
    pResidencyStatus = a2->pResidencyStatus;
    if ( (unsigned __int64)pResidencyStatus >= MmUserProbeAddress )
      pResidencyStatus = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(pResidencyStatus, &Src, 4uLL);
  }
  else
  {
    *a2->pResidencyStatus = Src;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v18);
  return 0LL;
}
