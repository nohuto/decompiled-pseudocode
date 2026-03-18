/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400E7C48
 * Callers:
 *     AddDmaBufferToPool @ 0x1400B05D8 (AddDmaBufferToPool.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1400E62B4 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLO.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400E736C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@IPEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1400E7BC4 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@IPEAX_NPEAVDX.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400E86FC (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x140038D78 (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003E604 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400ABC80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400B1014 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400CBC98 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z @ 0x1400CCA54 (-CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1400E6CCC (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E6F70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F78F0 (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F79E0 (-NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x140104004 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_A.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::OpenOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS **a2,
        struct VIDMM_GLOBAL_ALLOC *a3,
        void *a4,
        bool a5,
        struct DXGALLOCATION *a6,
        struct VIDMM_ALLOC **a7,
        unsigned __int8 *a8)
{
  struct VIDMM_LOCAL_ALLOC *v11; // rbx
  char v12; // di
  __int64 v13; // rsi
  __int64 v14; // rax
  VIDMM_ALLOC *v15; // rax
  VIDMM_ALLOC *v16; // r14
  VIDMM_ALLOC *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct VIDMM_LOCAL_ALLOC *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rcx
  struct VIDMM_LOCAL_ALLOC *v24; // rax
  struct VIDMM_LOCAL_ALLOC **v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 CurrentProcess; // rax
  __int64 v29; // rsi
  __int64 v30; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  unsigned __int64 *v43; // r11
  VIDMM_GLOBAL *v44; // rcx
  _QWORD *v45; // rdi
  int v46; // eax
  __int64 v47; // rax
  _QWORD *v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rcx
  struct VIDMM_PROCESS **v53; // r8
  struct VIDMM_PROCESS *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  int Resident; // eax
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned int v61; // r10d
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rbx
  struct VIDMM_PROCESS *v65; // rdi
  HANDLE CurrentProcessId; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  union _LARGE_INTEGER *Timeout; // rdx
  char *v74; // rcx
  __int64 v75; // rax
  char **v76; // rdx
  unsigned int v78; // [rsp+80h] [rbp-80h]
  unsigned int v79; // [rsp+84h] [rbp-7Ch]
  struct VIDMM_PROCESS_ADAPTER_INFO *v80; // [rsp+88h] [rbp-78h]
  struct VIDMM_PROCESS_ADAPTER_INFO *v81; // [rsp+88h] [rbp-78h]
  struct VIDMM_LOCAL_ALLOC *v82; // [rsp+90h] [rbp-70h]
  __int64 v83; // [rsp+98h] [rbp-68h]
  __int64 v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v86; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v87; // [rsp+B0h] [rbp-50h]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  __int64 v89; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v91; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v92; // [rsp+D8h] [rbp-28h] BYREF
  struct VIDMM_MULTI_ALLOC *v93; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v94; // [rsp+E8h] [rbp-18h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v95; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v96[24]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v97[18]; // [rsp+110h] [rbp+10h] BYREF
  struct _VIDSCH_SYNC_OBJECT **v99; // [rsp+1C0h] [rbp+C0h]
  __int64 v100; // [rsp+1C0h] [rbp+C0h]
  struct VIDMM_ALLOC **v102; // [rsp+1E0h] [rbp+E0h]

  v88 = *(_QWORD *)a3;
  v79 = 0;
  v11 = 0LL;
  v78 = 0;
  v12 = 0;
  v87 = 0LL;
  LODWORD(v13) = 0;
  v80 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = a3;
    *(_QWORD *)(v14 + 32) = a2;
    WdLogGlobalForLineNumber = 4271;
  }
  *a7 = 0LL;
  if ( !g_IsInternalReleaseOrDbg )
  {
    v17 = (VIDMM_ALLOC *)operator new(240LL, 0x33306956u, 64LL);
    if ( !v17 )
    {
      v16 = 0LL;
      goto LABEL_90;
    }
    v16 = VIDMM_ALLOC::VIDMM_ALLOC(v17);
LABEL_9:
    if ( v16 )
      goto LABEL_10;
LABEL_90:
    _InterlockedAdd(&dword_140081688, 1u);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 4294;
    DxgkLogInternalTriageEvent(0LL, 262145LL);
    LODWORD(v13) = -1073741801;
    goto LABEL_91;
  }
  v15 = (VIDMM_ALLOC *)operator new(288LL, 0x33306956u, 64LL);
  v16 = v15;
  if ( !v15 )
  {
    v16 = 0LL;
    goto LABEL_9;
  }
  VIDMM_ALLOC::VIDMM_ALLOC(v15);
  *((_DWORD *)v16 + 7) |= 0x20u;
  *((_QWORD *)v16 + 30) = 0LL;
  *((_QWORD *)v16 + 31) = 0LL;
  *((_QWORD *)v16 + 32) = 0LL;
  *((_QWORD *)v16 + 33) = 0LL;
  *((_QWORD *)v16 + 34) = 0LL;
  *((_QWORD *)v16 + 35) = 0LL;
LABEL_10:
  *((_BYTE *)v16 + 36) ^= (*((_BYTE *)v16 + 36) ^ (*((_DWORD *)this + 1746) >> 13)) & 1;
  VIDMM_DEVICE::NotifyAllocationOpened((VIDMM_DEVICE *)a2, v16);
  *((_DWORD *)v16 + 8) ^= ((unsigned __int8)*((_DWORD *)v16 + 8) ^ (unsigned __int8)(4 * *((_DWORD *)a3 + 6))) & 0xFC;
  DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 136));
  v12 = 1;
  if ( *((_BYTE *)a3 + 41) == 1 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18) + 24) = a3;
      WdLogGlobalForLineNumber = 4320;
    }
LABEL_13:
    LODWORD(v13) = -1071775482;
    goto LABEL_91;
  }
  v19 = *((unsigned int *)a3 + 8);
  if ( (*((_BYTE *)a3 + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = a3;
      WdLogGlobalForLineNumber = 4333;
    }
LABEL_17:
    LODWORD(v13) = -1071775470;
    goto LABEL_91;
  }
  v83 = *((_QWORD *)a3 + 6);
  if ( (v19 & 4) != 0 )
    v80 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 8LL) + 16LL)
                                                + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
  v20 = VIDMM_GLOBAL::OpenLocalAllocation(this, a3, a2[1], a4, a8);
  v82 = v20;
  v11 = v20;
  if ( !v20 )
  {
    LODWORD(v13) = -1071775488;
    goto LABEL_91;
  }
  v91 = *((_QWORD *)a3 + 6);
  *((_QWORD *)v16 + 1) = a2;
  *(_QWORD *)v16 = v20;
  *((_QWORD *)v16 + 2) = a6;
  *((_QWORD *)v16 + 12) = *((_QWORD *)a3 + 47);
  *((_DWORD *)v16 + 7) ^= ((unsigned __int8)*((_DWORD *)v16 + 7) ^ (**((_DWORD **)a3 + 47) >> 26)) & 8;
  *((_BYTE *)v16 + 24) = a5;
  if ( a5
    && (**((_DWORD **)a3 + 47) & 0x200000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 408LL) & 4) != 0
    && *((_DWORD *)this + 1736) > 1u )
  {
    *((_BYTE *)v16 + 24) = 0;
  }
  *((_QWORD *)v16 + 18) = 0LL;
  *((_QWORD *)v16 + 17) = (char *)v16 + 128;
  v23 = (char *)v20 + 32;
  *((_QWORD *)v16 + 16) = (char *)v16 + 128;
  v24 = (VIDMM_ALLOC *)((char *)v16 + 40);
  v25 = (struct VIDMM_LOCAL_ALLOC **)*((_QWORD *)v11 + 5);
  if ( *v25 != (struct VIDMM_LOCAL_ALLOC *)((char *)v11 + 32) )
    goto LABEL_108;
  *(_QWORD *)v24 = v23;
  *((_QWORD *)v16 + 6) = v25;
  *v25 = v24;
  *((_QWORD *)v11 + 5) = v24;
  if ( (*((_BYTE *)this + 40936) & 0x20) != 0 )
  {
    if ( (**((_DWORD **)a3 + 47) & 0x10000008) != 0 )
    {
      v27 = *(unsigned int *)(*((_QWORD *)this + 3) + 444LL);
      if ( (v27 & 0x10) != 0 )
      {
        v26 = *((_QWORD *)a3 + 27);
      }
      else
      {
        v85 = 0LL;
        v90 = 0LL;
        v89 = *(_QWORD *)(v88 + 16);
        CurrentProcess = PsGetCurrentProcess(v27, v25, v21, v22);
        v29 = *((_QWORD *)a3 + 26);
        v30 = CurrentProcess;
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v32 = (*((__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
               + 3))(
                v29,
                v30,
                &v85,
                0LL,
                v89,
                &v90,
                &v89,
                2,
                0,
                4);
        v13 = v32;
        if ( v32 < 0 )
        {
          _InterlockedAdd(&dword_14008169C, 1u);
          v37 = PsGetCurrentProcess(v34, v33, v35, v36);
          WdLogSingleEntry3(6LL, a3, v37, v13);
          WdLogGlobalForLineNumber = 4434;
          PsGetCurrentProcess(v39, v38, v40, v41);
          DxgkLogInternalTriageEvent(v42, 262145LL);
          v11 = v82;
          v12 = 1;
          goto LABEL_91;
        }
        v26 = v85;
        v11 = v82;
      }
    }
    else
    {
      v26 = *((_QWORD *)v11 + 2);
    }
    *((_QWORD *)v16 + 18) = v26;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
  v43 = 0LL;
  v12 = 0;
  if ( v83 != v91 )
  {
    if ( v11 != *((struct VIDMM_LOCAL_ALLOC **)a3 + 6) && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 47) + 8LL) != (_WORD)v43 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v96,
        (struct _KTHREAD **)this + 4988);
      v45 = (_QWORD *)((char *)a3 + 280);
      if ( *((_QWORD *)a3 + 35) )
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v44, a3, v80);
      v46 = *((_DWORD *)a3 + 8);
      if ( (v46 & 0x40) != 0 && (v46 & 0x20) != 0 )
      {
        v47 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL)
                        + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
        v48 = *(_QWORD **)(v47 + 112);
        v49 = v47 + 104;
        if ( *v48 != v49 )
          goto LABEL_108;
        *v45 = v49;
        *((_QWORD *)a3 + 36) = v48;
        *v48 = v45;
        *(_QWORD *)(v49 + 8) = v45;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v96);
      v12 = 0;
      v43 = 0LL;
    }
  }
  if ( (**((_DWORD **)a3 + 47) & 0x40000000) != 0 )
  {
    if ( (*((_DWORD *)this + 1746) & 2) != 0
      && (**(_DWORD **)(*(_QWORD *)v11 + 376LL) & 0x20000000) != 0
      && v11 == *(struct VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v11 + 48LL) )
    {
      LODWORD(v13) = -1071775487;
      goto LABEL_91;
    }
    v50 = VIDMM_GLOBAL::PinOneAllocation(this, v16, 0LL, 0, 0xFFFFFFFFFFFFFFFFuLL, v43);
    LODWORD(v13) = v50;
    if ( v50 < 0 )
    {
      _InterlockedAdd(&dword_14008170C, 1u);
      WdLogSingleEntry2(6LL, v16, v50);
      WdLogGlobalForLineNumber = 4546;
      DxgkLogInternalTriageEvent(v51, 262145LL);
      v11 = v82;
      goto LABEL_91;
    }
    DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 136));
    v12 = 1;
    if ( *((_BYTE *)a3 + 41) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v52) + 24) = a3;
        WdLogGlobalForLineNumber = 4565;
      }
      goto LABEL_13;
    }
    if ( (*((_BYTE *)a3 + 32) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v52) + 24) = a3;
        WdLogGlobalForLineNumber = 4574;
      }
      goto LABEL_17;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
    v43 = 0LL;
    goto LABEL_71;
  }
  v53 = a2;
  v54 = a2[3];
  if ( !v54
    || (*((_BYTE *)v54 + 1903) != (_BYTE)v43
     || *((_DWORD *)v54 + 116) == 2 && *(int *)(*(_QWORD *)(*((_QWORD *)v54 + 2) + 16LL) + 3004LL) >= 2000)
    && (*((_DWORD *)a3 + 7) & 0x20) == 0 )
  {
LABEL_72:
    *((_DWORD *)v16 + 7) |= 0x40u;
    *a7 = v16;
    if ( (byte_140081241 & 0x10) == 0 )
      goto LABEL_84;
    v59 = *((_QWORD *)v16 + 2);
    if ( v59 )
    {
      v60 = *(_QWORD *)(v59 + 40);
      v79 = *(_DWORD *)(v59 + 16);
      if ( v60 )
      {
        v61 = *(_DWORD *)(v60 + 16);
        v87 = *(_QWORD *)(v60 + 48);
        v78 = v61;
      }
    }
    v84 = *((_QWORD *)a3 + 29);
    if ( (**((_DWORD **)a3 + 47) & 8) != 0 )
      v62 = *((_QWORD *)a3 + 27);
    else
      v62 = *((_QWORD *)v11 + 2);
    v100 = v62;
    if ( v59 && (v63 = *(_QWORD *)(v59 + 40)) != 0 )
    {
      v102 = *(struct VIDMM_ALLOC ***)(v63 + 56);
    }
    else
    {
      v102 = (struct VIDMM_ALLOC **)v43;
      if ( !v59 )
      {
        v81 = (struct VIDMM_PROCESS_ADAPTER_INFO *)v43;
        v102 = (struct VIDMM_ALLOC **)v43;
        goto LABEL_83;
      }
    }
    v81 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(v59 + 40);
LABEL_83:
    v64 = *((_QWORD *)this + 3);
    v65 = v53[3];
    CurrentProcessId = PsGetCurrentProcessId();
    McTemplateK0ppppppppppppq_EtwWriteTransfer(
      (__int64)v81,
      &EventCreateDeviceAllocation,
      v78,
      CurrentProcessId,
      v65,
      v64,
      v16,
      a3,
      v81,
      v102,
      v79,
      v78,
      v87,
      v100,
      v84);
LABEL_84:
    IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
    v68 = *(_QWORD *)(v88 + 16);
    if ( IsEnabledDeviceUsageNoInline )
    {
      _InterlockedAdd((volatile signed __int32 *)this + 1902, 1u);
      _InterlockedAdd64((volatile signed __int64 *)this + 952, v68);
    }
    else
    {
      ++*((_DWORD *)this + 1902);
      *((_QWORD *)this + 952) += v68;
    }
    return (unsigned int)v13;
  }
  v55 = *((_QWORD *)v16 + 1);
  v56 = *((_DWORD *)a3 + 6) & 0x3F;
  v86 = (unsigned __int64)v43;
  v57 = *(_QWORD *)(v55 + 72);
  v92 = (unsigned __int64)v43;
  v93 = v16;
  v99 = *(struct _VIDSCH_SYNC_OBJECT ***)(32 * v56 + v57);
  Resident = VIDMM_GLOBAL::MakeResident(this, (struct VIDMM_PAGING_QUEUE *)v99, &v93, 1uLL, (char)v43, &v86, &v92);
  LODWORD(v13) = Resident;
  if ( Resident == 259 )
  {
    v95 = v99[11];
    v94 = v86;
    VIDMM_GLOBAL::WaitForFences(this, &v95, &v94, 1u, 0LL, 0LL);
    v43 = 0LL;
    LODWORD(v13) = 0;
LABEL_71:
    v53 = a2;
    goto LABEL_72;
  }
  v43 = 0LL;
  if ( Resident >= 0 )
    goto LABEL_71;
LABEL_91:
  if ( v11 )
  {
    if ( v12 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
    memset(v97, 0, 0x58uLL);
    v69 = *((_QWORD *)v16 + 1);
    v70 = *((_DWORD *)a3 + 6) & 0x3F;
    LODWORD(v97[0]) = 200;
    v71 = *(_QWORD *)(v69 + 72);
    v97[2] = v16;
    v72 = VIDMM_GLOBAL::QueueDeferredCommand(
            (struct VIDMM_WORKER_THREAD **)this,
            *(struct VIDMM_PAGING_QUEUE **)(32 * v70 + v71),
            (struct _VIDMM_DEFERRED_COMMAND *)v97,
            1,
            0LL);
    Timeout = 0LL;
    if ( v72 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 5LL, 200LL, v72, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    KeWaitForSingleObject((char *)v16 + 72, (KWAIT_REASON)Timeout, 0, 0, Timeout);
    DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 136));
    v12 = 1;
    v74 = (char *)v16 + 40;
    v75 = *((_QWORD *)v16 + 5);
    if ( !v75 )
      goto LABEL_102;
    if ( *(char **)(v75 + 8) == v74 )
    {
      v76 = (char **)*((_QWORD *)v16 + 6);
      if ( *v76 == v74 )
      {
        *v76 = (char *)v75;
        *(_QWORD *)(v75 + 8) = v76;
LABEL_102:
        VIDMM_GLOBAL::CloseLocalAllocation(this, v11, 1);
        goto LABEL_103;
      }
    }
LABEL_108:
    __fastfail(3u);
  }
LABEL_103:
  if ( v16 )
  {
    VIDMM_DEVICE::NotifyAllocationClosed((VIDMM_DEVICE *)a2, v16);
    operator delete(v16);
  }
  if ( v12 )
    DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
  return (unsigned int)v13;
}
