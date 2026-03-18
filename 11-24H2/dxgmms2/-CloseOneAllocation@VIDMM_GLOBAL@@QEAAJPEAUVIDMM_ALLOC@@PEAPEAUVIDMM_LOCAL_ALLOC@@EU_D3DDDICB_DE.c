/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400A9EF4
 * Callers:
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400A9994 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1400A9B04 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400AA4F4 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400AAB2C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     RemoveDmaBufferFromPool @ 0x1400B7C44 (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400B8988 (AddDmaBufferToPool.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400D7E60 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1400DA3A4 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLO.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DB434 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400F1A9C (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDIC.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x140038D34 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003C5A8 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004C558 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsageNoInline @ 0x14004C600 (Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAFC (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z @ 0x1400D8C1C (-CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F590C (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400FDCAC (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1401007FC (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140114340 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC **a3,
        char a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  __int64 v9; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  VIDMM_DEVICE *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  struct CVirtualAddressAllocator *v22; // rax
  char v23; // r15
  CVirtualAddressAllocator *v24; // rbx
  bool v25; // r8
  struct _VIDMM_SYSTEM_COMMAND *v26; // rdx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rcx
  struct VIDMM_ALLOC **v28; // r8
  struct VIDMM_ALLOC **v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // r12
  __int64 v34; // r13
  __int64 v35; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v37; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  __int64 v43; // [rsp+90h] [rbp-70h]
  _BYTE v44[24]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v45[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v46[12]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v47[18]; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v48; // [rsp+218h] [rbp+118h]
  __int64 v49; // [rsp+220h] [rbp+120h]
  unsigned int v50; // [rsp+228h] [rbp+128h]

  v48 = 0;
  v50 = 0;
  v41 = 0LL;
  v9 = **(_QWORD **)a2;
  v42 = *((_QWORD *)a2 + 1);
  v49 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 5065;
  }
  if ( a3 )
    *a3 = *(struct VIDMM_LOCAL_ALLOC **)a2;
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v11 = *((_QWORD *)a2 + 2);
    if ( v11 )
    {
      v48 = *(_DWORD *)(v11 + 16);
      v12 = *(_QWORD *)(v11 + 40);
      if ( v12 )
      {
        v41 = *(_QWORD *)(v12 + 48);
        v50 = *(_DWORD *)(v12 + 16);
      }
    }
    if ( (**(_DWORD **)(v9 + 392) & 8) != 0 )
      v13 = *(_QWORD *)(v9 + 232);
    else
      v13 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    v49 = v13;
  }
  v14 = (VIDMM_DEVICE *)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)v14 & 1) == 0 )
  {
    v15 = *((_QWORD *)a2 + 1);
    if ( v15 && *(_QWORD *)(v15 + 24) || (*(_DWORD *)(v9 + 32) & 4) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 32) & 4) == 0 )
      {
        VIDMM_GLOBAL::TerminateOneAllocation(this, a2, (unsigned int)a3, a5, 0LL);
        goto LABEL_27;
      }
      *((_DWORD *)a2 + 7) |= 4u;
      *((_DWORD *)a2 + 8) = (unsigned int)v14 | 1;
    }
    else
    {
      *((_DWORD *)a2 + 7) |= 4u;
      if ( (*((_DWORD *)a2 + 7) & 3) == 1 )
        VIDMM_DEVICE::UnfaultCommitment(v14, a2);
      if ( (*(_DWORD *)(v9 + 24) & 0x100) != 0 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)this + 16LL);
        if ( v16 )
        {
          if ( *(struct VIDMM_ALLOC **)(v16 + 248) == a2 )
            *(_QWORD *)(v16 + 248) = 0LL;
        }
      }
    }
    KeSetEvent((PRKEVENT)a2 + 3, 0, 0);
  }
LABEL_27:
  if ( a4 && (*((_DWORD *)a2 + 8) & 1) != 0 && !KeReadStateEvent((PRKEVENT)a2 + 3) )
  {
    WdLogSingleEntry2(4LL, a2, -1071775486LL);
    result = 3223191810LL;
    WdLogGlobalForLineNumber = 5177;
    *a6 = (struct _KEVENT *)((char *)a2 + 72);
    return result;
  }
  KeWaitForSingleObject((char *)a2 + 72, Executive, 0, 0, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct VIDMM_GLOBAL_ALLOC *)v9);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = a2;
    WdLogGlobalForLineNumber = 5219;
  }
  v19 = *((_QWORD *)a2 + 20);
  if ( v19 )
  {
    if ( (**(_DWORD **)(v9 + 392) & 0x10000008) != 0 )
    {
      v20 = **(_QWORD **)(*(_QWORD *)a2 + 8LL);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v20, v19);
    }
    *((_QWORD *)a2 + 20) = 0LL;
  }
  if ( !(unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((struct VIDMM_ALLOC **)a2 + 16) == (struct VIDMM_ALLOC *)((char *)a2 + 128) )
      goto LABEL_57;
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    {
      memset(v47, 0, 0x58uLL);
      v26 = (struct _VIDMM_SYSTEM_COMMAND *)v47;
      v47[0] = -4294967175LL;
      v47[2] = a2;
      goto LABEL_54;
    }
    goto LABEL_55;
  }
  if ( !(unsigned int)Feature_Servicing_VARangeRaceCondition__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((struct VIDMM_ALLOC **)a2 + 16) == (struct VIDMM_ALLOC *)((char *)a2 + 128)
      && *((struct VIDMM_ALLOC **)a2 + 18) == (struct VIDMM_ALLOC *)((char *)a2 + 144) )
    {
      goto LABEL_57;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    {
      memset(v46, 0, 0x58uLL);
      v26 = (struct _VIDMM_SYSTEM_COMMAND *)v46;
      v46[0] = -4294967175LL;
      v46[2] = a2;
      goto LABEL_54;
    }
LABEL_55:
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
                                *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                *(_DWORD *)(v9 + 24) & 0x3F);
    goto LABEL_56;
  }
  v22 = VIDMM_PROCESS::GetVirtualAddressAllocator(
          *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
          *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
          *(_DWORD *)(**(_QWORD **)a2 + 24LL) & 0x3F);
  v23 = 0;
  v24 = v22;
  if ( v22 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v44,
      (struct CVirtualAddressAllocator *)((char *)v22 + 56),
      *((_QWORD *)v22 + 8) != (_QWORD)KeGetCurrentThread());
    if ( *((struct VIDMM_ALLOC **)a2 + 16) != (struct VIDMM_ALLOC *)((char *)a2 + 128)
      || *((struct VIDMM_ALLOC **)a2 + 18) != (struct VIDMM_ALLOC *)((char *)a2 + 144) )
    {
      v23 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44);
    if ( v23 )
    {
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      {
        memset(v45, 0, 0x58uLL);
        v26 = (struct _VIDMM_SYSTEM_COMMAND *)v45;
        v45[0] = -4294967175LL;
        v45[2] = a2;
LABEL_54:
        VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, v26, v25);
        goto LABEL_57;
      }
      VirtualAddressAllocator = v24;
LABEL_56:
      CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, a2);
    }
  }
LABEL_57:
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 136));
  v28 = (struct VIDMM_ALLOC **)*((_QWORD *)a2 + 5);
  if ( v28[1] != (struct VIDMM_ALLOC *)((char *)a2 + 40)
    || (v29 = (struct VIDMM_ALLOC **)*((_QWORD *)a2 + 6), *v29 != (struct VIDMM_ALLOC *)((char *)a2 + 40)) )
  {
    __fastfail(3u);
  }
  *v29 = (struct VIDMM_ALLOC *)v28;
  v28[1] = (struct VIDMM_ALLOC *)v29;
  v43 = *(_QWORD *)(v9 + 248);
  VIDMM_GLOBAL::CloseLocalAllocation(this, *(struct VIDMM_LOCAL_ALLOC **)a2, a3 == 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 136));
  if ( (byte_140081241 & 0x10) == 0 )
    goto LABEL_70;
  v30 = *((_QWORD *)a2 + 2);
  if ( v30 && (v31 = *(_QWORD *)(v30 + 40)) != 0 )
  {
    v32 = *(_QWORD *)(v31 + 56);
  }
  else
  {
    v32 = 0LL;
    if ( !v30 )
    {
      v33 = 0LL;
      goto LABEL_64;
    }
  }
  v33 = *(_QWORD *)(v30 + 40);
LABEL_64:
  v34 = *((_QWORD *)this + 3);
  if ( v42 )
    v35 = *(_QWORD *)(v42 + 24);
  else
    v35 = 0LL;
  CurrentProcessId = PsGetCurrentProcessId();
  McTemplateK0ppppppppppppq_EtwWriteTransfer(
    v41,
    &EventDestroyDeviceAllocation,
    v37,
    CurrentProcessId,
    v35,
    v34,
    a2,
    v9,
    v33,
    v32,
    v48,
    v50,
    v41,
    v49,
    v43);
LABEL_70:
  IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
  v39 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
  if ( IsEnabledDeviceUsageNoInline )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 1906);
    _InterlockedAdd64((volatile signed __int64 *)this + 954, v39);
  }
  else
  {
    ++*((_DWORD *)this + 1906);
    *((_QWORD *)this + 954) += v39;
  }
  VIDMM_DEVICE::NotifyAllocationClosed(*((VIDMM_DEVICE **)a2 + 1), a2);
  if ( *((_DWORD *)a2 + 44) )
  {
    v40 = *((int *)a2 + 44);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 56LL, a2, v40, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  operator delete(a2);
  return 0LL;
}
