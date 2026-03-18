/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400B85FC
 * Callers:
 *     RemoveDmaBufferFromPool @ 0x1400AF894 (RemoveDmaBufferFromPool.c)
 *     AddDmaBufferToPool @ 0x1400B05D8 (AddDmaBufferToPool.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400B808C (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1400B820C (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B9124 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400CBC98 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1400E62B4 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLO.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400E736C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400F5E98 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@_NPEAPEAUVIDMM_LOCAL_ALLOC@@U_D3DDDIC.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003E604 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4C3C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z @ 0x1400CCA54 (-CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F4748 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F78F0 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400FDAF8 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x140101AD4 (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
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
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  VIDMM_DEVICE *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  struct VIDMM_ALLOC **v24; // r8
  struct VIDMM_ALLOC **v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // rbp
  HANDLE CurrentProcessId; // rax
  __int64 v34; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // [rsp+80h] [rbp-A8h]
  __int64 v39; // [rsp+88h] [rbp-A0h]
  _QWORD v40[19]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v41; // [rsp+138h] [rbp+10h]
  __int64 v42; // [rsp+140h] [rbp+18h]
  unsigned int v43; // [rsp+148h] [rbp+20h]

  v43 = 0;
  v42 = 0LL;
  v41 = 0LL;
  v9 = **(_QWORD **)a2;
  v11 = 0;
  v38 = *((_QWORD *)a2 + 1);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 5044;
  }
  if ( a3 )
    *a3 = *(struct VIDMM_LOCAL_ALLOC **)a2;
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v12 = *((_QWORD *)a2 + 2);
    if ( v12 )
    {
      v43 = *(_DWORD *)(v12 + 16);
      v13 = *(_QWORD *)(v12 + 40);
      if ( v13 )
      {
        v11 = *(_DWORD *)(v13 + 16);
        v42 = *(_QWORD *)(v13 + 48);
      }
    }
    if ( (**(_DWORD **)(v9 + 376) & 8) != 0 )
      v14 = *(_QWORD *)(v9 + 216);
    else
      v14 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    v41 = v14;
  }
  v15 = (VIDMM_DEVICE *)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)v15 & 1) == 0 )
  {
    v16 = *((_QWORD *)a2 + 1);
    if ( v16 && *(_QWORD *)(v16 + 24) || (*(_DWORD *)(v9 + 32) & 4) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 32) & 4) == 0 )
      {
        VIDMM_GLOBAL::TerminateOneAllocation(this, a2, (unsigned int)a3, a5, 0LL);
        goto LABEL_27;
      }
      *((_DWORD *)a2 + 7) |= 4u;
      *((_DWORD *)a2 + 8) = (unsigned int)v15 | 1;
    }
    else
    {
      *((_DWORD *)a2 + 7) |= 4u;
      if ( (*((_DWORD *)a2 + 7) & 3) == 1 )
        VIDMM_DEVICE::UnfaultCommitment(v15, a2);
      if ( (*(_DWORD *)(v9 + 24) & 0x100) != 0 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)this + 16LL);
        if ( v17 )
        {
          if ( *(struct VIDMM_ALLOC **)(v17 + 248) == a2 )
            *(_QWORD *)(v17 + 248) = 0LL;
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
    WdLogGlobalForLineNumber = 5156;
    *a6 = (struct _KEVENT *)((char *)a2 + 72);
    return result;
  }
  KeWaitForSingleObject((char *)a2 + 72, Executive, 0, 0, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct VIDMM_GLOBAL_ALLOC *)v9);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = a2;
    WdLogGlobalForLineNumber = 5198;
  }
  v20 = *((_QWORD *)a2 + 18);
  if ( v20 )
  {
    if ( (**(_DWORD **)(v9 + 376) & 0x10000008) != 0 )
    {
      v21 = **(_QWORD **)(*(_QWORD *)a2 + 8LL);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v21, v20);
    }
    *((_QWORD *)a2 + 18) = 0LL;
  }
  if ( *((struct VIDMM_ALLOC **)a2 + 16) != (struct VIDMM_ALLOC *)((char *)a2 + 128) )
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                  *(_DWORD *)(v9 + 24) & 0x3F);
      CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, a2);
    }
    else
    {
      memset(v40, 0, 0x58uLL);
      v40[0] = -4294967175LL;
      v40[2] = a2;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v40);
    }
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 136));
  v24 = (struct VIDMM_ALLOC **)*((_QWORD *)a2 + 5);
  if ( v24[1] != (struct VIDMM_ALLOC *)((char *)a2 + 40)
    || (v25 = (struct VIDMM_ALLOC **)*((_QWORD *)a2 + 6), *v25 != (struct VIDMM_ALLOC *)((char *)a2 + 40)) )
  {
    __fastfail(3u);
  }
  *v25 = (struct VIDMM_ALLOC *)v24;
  v24[1] = (struct VIDMM_ALLOC *)v25;
  v39 = *(_QWORD *)(v9 + 232);
  VIDMM_GLOBAL::CloseLocalAllocation(this, *(struct VIDMM_LOCAL_ALLOC **)a2, a3 == 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 136));
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v26 = *((_QWORD *)a2 + 2);
    v27 = v11;
    if ( v26 && (v28 = *(_QWORD *)(v26 + 40)) != 0 )
    {
      v29 = *(_QWORD *)(v28 + 56);
    }
    else
    {
      v29 = 0LL;
      if ( !v26 )
      {
        v30 = 0LL;
        goto LABEL_48;
      }
    }
    v30 = *(_QWORD *)(v26 + 40);
LABEL_48:
    v31 = *((_QWORD *)this + 3);
    if ( v38 )
      v32 = *(_QWORD *)(v38 + 24);
    else
      v32 = 0LL;
    CurrentProcessId = PsGetCurrentProcessId();
    McTemplateK0ppppppppppppq_EtwWriteTransfer(
      v42,
      &EventDestroyDeviceAllocation,
      v34,
      CurrentProcessId,
      v32,
      v31,
      a2,
      v9,
      v30,
      v29,
      v43,
      v27,
      v42,
      v41,
      v39);
  }
  IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
  v36 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
  if ( IsEnabledDeviceUsageNoInline )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 1906);
    _InterlockedAdd64((volatile signed __int64 *)this + 954, v36);
  }
  else
  {
    ++*((_DWORD *)this + 1906);
    *((_QWORD *)this + 954) += v36;
  }
  VIDMM_DEVICE::NotifyAllocationClosed(*((VIDMM_DEVICE **)a2 + 1), a2);
  if ( *((_DWORD *)a2 + 40) )
  {
    v37 = *((int *)a2 + 40);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 56LL, a2, v37, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  operator delete(a2);
  return 0LL;
}
