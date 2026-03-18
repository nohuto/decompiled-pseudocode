/*
 * XREFs of ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1401B1330
 * Callers:
 *     DxgkGetAllocationPriority @ 0x1401B29A0 (DxgkGetAllocationPriority.c)
 *     ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402233B0 (-VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x140010F54 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x14022B200 (-VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::GetAllocationPriority(DXGDEVICE *this, struct _D3DKMT_GETALLOCATIONPRIORITY *a2, char a3)
{
  D3DKMT_HANDLE hResource; // r8d
  UINT v8; // ecx
  __int64 i; // rsi
  __int64 v10; // rdx
  void *pPriorities; // rcx
  UINT j; // esi
  const D3DKMT_HANDLE *v13; // rdx
  unsigned int v14; // r8d
  _QWORD *v15; // r8
  UINT *v16; // rcx
  unsigned int Src; // [rsp+50h] [rbp-38h] BYREF
  _QWORD *v18; // [rsp+58h] [rbp-30h] BYREF
  _BYTE v19[16]; // [rsp+60h] [rbp-28h] BYREF
  UINT v20; // [rsp+A8h] [rbp+20h] BYREF

  v20 = 0;
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetAllocationPriority(
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
      WdLogGlobalForLineNumber = 6951;
      return 3221225485LL;
    }
    if ( a2->phAllocationList )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 6961;
      return 3221225485LL;
    }
    DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v18, hResource);
    if ( !v18 || *(_DWORD *)(v18[1] + 468LL) != a2->hDevice )
    {
      WdLogSingleEntry3(3LL, this, a2->hResource, -1073741811LL);
      WdLogGlobalForLineNumber = 6973;
LABEL_26:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v18);
      return 3221225485LL;
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(v18 + 10), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v8 = 0;
    Src = 0;
    for ( i = v18[3]; i; i = *(_QWORD *)(i + 64) )
    {
      v10 = *(_QWORD *)(i + 24);
      if ( !v10 )
      {
        WdLogSingleEntry1(2LL, i);
        WdLogGlobalForLineNumber = 6989;
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
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
        goto LABEL_26;
      }
      (*(void (__fastcall **)(_QWORD, __int64, UINT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                      + 1096LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        v10,
        &v20);
      v8 = Src;
      if ( Src <= v20 )
      {
        v8 = v20;
        Src = v20;
      }
    }
    if ( a3 )
    {
      pPriorities = a2->pPriorities;
      if ( (unsigned __int64)pPriorities >= MmUserProbeAddress )
        pPriorities = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(pPriorities, &Src, 4uLL);
    }
    else
    {
      *a2->pPriorities = v8;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v19);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v18);
  }
  else if ( a2->AllocationCount )
  {
    Src = 0;
    for ( j = 0; ; ++j )
    {
      if ( j >= a2->AllocationCount )
        return 0LL;
      if ( a3 )
      {
        v13 = &a2->phAllocationList[j];
        if ( (unsigned __int64)v13 >= MmUserProbeAddress )
          v13 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        RtlCopyVolatileMemory(&Src, v13, 4uLL);
        v14 = Src;
      }
      else
      {
        v14 = a2->phAllocationList[j];
        Src = v14;
      }
      DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v18, v14);
      if ( !v18 )
        break;
      v15 = (_QWORD *)*((_QWORD *)this + 2);
      if ( *(_QWORD *)(*(_QWORD *)(v18[1] + 16LL) + 16LL) != v15[2] )
      {
        WdLogSingleEntry3(2LL, this, v18, -1073741811LL);
        WdLogGlobalForLineNumber = 7074;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          (__int64)this,
          (__int64)v18,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_37;
      }
      if ( !v18[3] )
      {
        WdLogSingleEntry1(2LL, v18);
        WdLogGlobalForLineNumber = 7090;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Allocation 0x%p does not have a VidMm handle",
          (__int64)v18,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_37;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *))(*(_QWORD *)(v15[95] + 8LL) + 1096LL))(v15[96], v18[3], &v20);
      if ( a3 )
      {
        v16 = &a2->pPriorities[j];
        if ( (unsigned __int64)v16 >= MmUserProbeAddress )
          v16 = (UINT *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v16, &v20, 4uLL);
      }
      else
      {
        a2->pPriorities[j] = v20;
      }
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18);
    }
    WdLogSingleEntry3(3LL, this, Src, -1073741811LL);
    WdLogGlobalForLineNumber = 7065;
LABEL_37:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18);
    return 3221225485LL;
  }
  return 0LL;
}
