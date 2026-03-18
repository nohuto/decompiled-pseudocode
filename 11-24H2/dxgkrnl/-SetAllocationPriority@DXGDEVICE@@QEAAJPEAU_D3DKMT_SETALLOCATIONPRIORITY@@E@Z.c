/*
 * XREFs of ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x140329CF8
 * Callers:
 *     ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022F9C0 (-VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSetAllocationPriority @ 0x140328FE0 (DxgkSetAllocationPriority.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140010F54 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x14022E05C (-VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::SetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_SETALLOCATIONPRIORITY *a2, char a3)
{
  D3DKMT_HANDLE hResource; // r8d
  __int64 v7; // rdx
  const void *pPriorities; // rdx
  __int64 i; // rbx
  __int64 v10; // rdx
  UINT j; // r14d
  const D3DKMT_HANDLE *v13; // rdx
  const UINT *v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v17[8]; // [rsp+58h] [rbp-40h] BYREF
  UINT v18; // [rsp+B8h] [rbp+20h] BYREF

  v18 = 0;
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetAllocationPriority(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4664LL),
             *((struct DXGPROCESS **)this + 5),
             this,
             a2);
  hResource = a2->hResource;
  if ( hResource )
  {
    if ( a2->AllocationCount )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 6770;
    }
    else
    {
      DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v16, hResource);
      v7 = v16;
      if ( v16 )
      {
        if ( *(DXGDEVICE **)(v16 + 8) == this )
        {
          if ( a3 )
          {
            pPriorities = a2->pPriorities;
            if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
              pPriorities = (const void *)MmUserProbeAddress;
            RtlCopyVolatileMemory(&v18, pPriorities, 4uLL);
            v7 = v16;
          }
          else
          {
            v18 = *a2->pPriorities;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(v7 + 80), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
          for ( i = *(_QWORD *)(v16 + 24); ; i = *(_QWORD *)(i + 64) )
          {
            if ( !i )
            {
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v16);
              return 0LL;
            }
            v10 = *(_QWORD *)(i + 24);
            if ( !v10 )
              break;
            (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                        + 8LL)
                                                            + 176LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
              v10,
              v18);
          }
          WdLogSingleEntry1(2LL, i);
          WdLogGlobalForLineNumber = 6827;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Allocation 0x%p does not have a VidMm handle",
            i,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v16);
          return -1073741811LL;
        }
        WdLogSingleEntry3(2LL, this, v16, -1073741811LL);
        WdLogGlobalForLineNumber = 6792;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Device 0x%p does not match resource 0x%p owner, returning 0x%I64x",
          (__int64)this,
          v16,
          -1073741811LL,
          0LL,
          0LL);
      }
      else
      {
        WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
        WdLogGlobalForLineNumber = 6783;
      }
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v16);
    }
    return 3221225485LL;
  }
  if ( a2->AllocationCount )
  {
    LODWORD(v16) = 0;
    for ( j = 0; ; ++j )
    {
      if ( j >= a2->AllocationCount )
        return 0LL;
      if ( a3 )
      {
        v13 = &a2->phAllocationList[j];
        if ( (unsigned __int64)v13 >= MmUserProbeAddress )
          v13 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        RtlCopyVolatileMemory(&v16, v13, 4uLL);
        v14 = &a2->pPriorities[j];
        if ( (unsigned __int64)v14 >= MmUserProbeAddress )
          v14 = (const UINT *)MmUserProbeAddress;
        RtlCopyVolatileMemory(&v18, v14, 4uLL);
        v15 = v16;
      }
      else
      {
        v15 = a2->phAllocationList[j];
        LODWORD(v16) = v15;
        v18 = a2->pPriorities[j];
      }
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)v17, v15);
      if ( !v17[0] )
        break;
      if ( (DXGDEVICE *)v17[0][1].Count != this )
      {
        WdLogSingleEntry3(2LL, this, v17[0], -1073741811LL);
        WdLogGlobalForLineNumber = 6892;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          (__int64)this,
          (__int64)v17[0],
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_32;
      }
      if ( !v17[0][3].Count )
      {
        WdLogSingleEntry1(2LL, v17[0]);
        WdLogGlobalForLineNumber = 6901;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Allocation 0x%p does not have a VidMm handle",
          (__int64)v17[0],
          0LL,
          0LL,
          0LL,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v17);
        return -1073741811LL;
      }
      (*(void (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                        + 176LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        v17[0][3].Count,
        v18);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v17);
    }
    WdLogSingleEntry3(3LL, this, (unsigned int)v16, -1073741811LL);
    WdLogGlobalForLineNumber = 6883;
LABEL_32:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v17);
    return 3221225485LL;
  }
  return 0LL;
}
