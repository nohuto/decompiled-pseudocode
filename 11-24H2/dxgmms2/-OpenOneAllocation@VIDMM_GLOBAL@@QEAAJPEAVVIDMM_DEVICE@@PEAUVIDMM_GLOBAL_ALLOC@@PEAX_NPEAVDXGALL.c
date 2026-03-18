/*
 * XREFs of ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400DBD28
 * Callers:
 *     AddDmaBufferToPool @ 0x1400B8988 (AddDmaBufferToPool.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1400DA3A4 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLO.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DB434 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@IPEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_MULTI_ALLOC@@PEAIPEAE@Z @ 0x1400DBCA4 (-OpenAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@IPEAX_NPEAVDX.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400DC804 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1400377D4 (--0VIDMM_ALLOC@@QEAA@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003C5A8 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004C558 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400B4060 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400B93C8 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1400D7E60 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z @ 0x1400D8C1C (-CloseLocalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z @ 0x1400DADBC (-PinOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@K_KPEA_K@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400DB060 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F590C (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F5A10 (-NotifyAllocationOpened@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x140102EF4 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_A.c)
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
  struct VIDMM_LOCAL_ALLOC *v11; // rdi
  char v12; // bl
  __int64 v13; // rsi
  __int64 v14; // rax
  VIDMM_ALLOC *v15; // rax
  VIDMM_ALLOC *v16; // r14
  VIDMM_ALLOC *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct VIDMM_LOCAL_ALLOC *v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // r9
  struct VIDMM_LOCAL_ALLOC **v23; // rdx
  struct VIDMM_LOCAL_ALLOC *v24; // rcx
  __int64 v25; // rcx
  __int64 CurrentProcess; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 *v42; // r11
  VIDMM_GLOBAL *v43; // rcx
  _QWORD *v44; // rbx
  int v45; // eax
  __int64 v46; // rax
  _QWORD *v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  struct VIDMM_PROCESS **v52; // r8
  struct VIDMM_PROCESS *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  int Resident; // eax
  __int64 v58; // rdx
  __int64 v59; // rax
  unsigned int v60; // r10d
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rbx
  struct VIDMM_PROCESS *v64; // rdi
  HANDLE CurrentProcessId; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  union _LARGE_INTEGER *Timeout; // rdx
  char *v73; // rcx
  __int64 v74; // rax
  char **v75; // rdx
  unsigned int v77; // [rsp+80h] [rbp-80h]
  unsigned int v78; // [rsp+84h] [rbp-7Ch]
  struct VIDMM_PROCESS_ADAPTER_INFO *v79; // [rsp+88h] [rbp-78h]
  struct VIDMM_PROCESS_ADAPTER_INFO *v80; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+90h] [rbp-70h]
  VIDMM_ALLOC *v83; // [rsp+98h] [rbp-68h]
  __int64 v84; // [rsp+A0h] [rbp-60h] BYREF
  struct VIDMM_LOCAL_ALLOC *v85; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v86; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v87; // [rsp+B8h] [rbp-48h]
  __int64 v88; // [rsp+C0h] [rbp-40h]
  __int64 v89; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v90; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v92; // [rsp+E0h] [rbp-20h] BYREF
  struct VIDMM_MULTI_ALLOC *v93; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v94; // [rsp+F0h] [rbp-10h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v95; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v96[32]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v97[18]; // [rsp+120h] [rbp+20h] BYREF
  struct _VIDSCH_SYNC_OBJECT **v99; // [rsp+1D0h] [rbp+D0h]
  __int64 v100; // [rsp+1D0h] [rbp+D0h]
  struct VIDMM_ALLOC **v102; // [rsp+1F0h] [rbp+F0h]

  v88 = *(_QWORD *)a3;
  v78 = 0;
  v11 = 0LL;
  v77 = 0;
  v12 = 0;
  v87 = 0LL;
  LODWORD(v13) = 0;
  v79 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = a3;
    *(_QWORD *)(v14 + 32) = a2;
    WdLogGlobalForLineNumber = 4287;
  }
  *a7 = 0LL;
  if ( !g_IsInternalReleaseOrDbg )
  {
    v17 = (VIDMM_ALLOC *)operator new(256LL, 0x33306956u, 64LL);
    if ( !v17 )
    {
      v16 = 0LL;
      goto LABEL_92;
    }
    v16 = VIDMM_ALLOC::VIDMM_ALLOC(v17);
LABEL_9:
    v83 = v16;
    if ( v16 )
      goto LABEL_10;
LABEL_92:
    _InterlockedAdd(&dword_1400816A8, 1u);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 4310;
    DxgkLogInternalTriageEvent(0LL, 262145LL);
    LODWORD(v13) = -1073741801;
    goto LABEL_93;
  }
  v15 = (VIDMM_ALLOC *)operator new(304LL, 0x33306956u, 64LL);
  v16 = v15;
  if ( !v15 )
  {
    v16 = 0LL;
    goto LABEL_9;
  }
  VIDMM_ALLOC::VIDMM_ALLOC(v15);
  *((_DWORD *)v16 + 7) |= 0x20u;
  *((_QWORD *)v16 + 32) = 0LL;
  *((_QWORD *)v16 + 33) = 0LL;
  *((_QWORD *)v16 + 34) = 0LL;
  *((_QWORD *)v16 + 35) = 0LL;
  *((_QWORD *)v16 + 36) = 0LL;
  *((_QWORD *)v16 + 37) = 0LL;
  v83 = v16;
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
      WdLogGlobalForLineNumber = 4336;
    }
LABEL_13:
    LODWORD(v13) = -1071775482;
    goto LABEL_93;
  }
  v19 = *((unsigned int *)a3 + 8);
  if ( (*((_BYTE *)a3 + 32) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19) + 24) = a3;
      WdLogGlobalForLineNumber = 4349;
    }
LABEL_17:
    LODWORD(v13) = -1071775470;
    goto LABEL_93;
  }
  v81 = *((_QWORD *)a3 + 6);
  if ( (v19 & 4) != 0 )
    v79 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 8LL) + 16LL)
                                                + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
  v20 = VIDMM_GLOBAL::OpenLocalAllocation(this, a3, a2[1], a4, a8);
  v85 = v20;
  v11 = v20;
  if ( !v20 )
  {
    LODWORD(v13) = -1071775488;
    goto LABEL_93;
  }
  v91 = *((_QWORD *)a3 + 6);
  *((_QWORD *)v16 + 1) = a2;
  *(_QWORD *)v16 = v20;
  *((_QWORD *)v16 + 2) = a6;
  *((_QWORD *)v16 + 12) = *((_QWORD *)a3 + 49);
  *((_DWORD *)v16 + 7) ^= ((unsigned __int8)*((_DWORD *)v16 + 7) ^ (**((_DWORD **)a3 + 49) >> 26)) & 8;
  *((_BYTE *)v16 + 24) = a5;
  if ( a5
    && (**((_DWORD **)a3 + 49) & 0x200000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a6 + 1) + 40LL) + 408LL) & 4) != 0
    && *((_DWORD *)this + 1736) > 1u )
  {
    *((_BYTE *)v16 + 24) = 0;
  }
  v21 = (_QWORD *)((char *)v16 + 160);
  *((_QWORD *)v16 + 20) = 0LL;
  *((_QWORD *)v16 + 17) = (char *)v16 + 128;
  *((_QWORD *)v16 + 16) = (char *)v16 + 128;
  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
  {
    v16 = v83;
    *((_QWORD *)v83 + 19) = (char *)v83 + 144;
    *((_QWORD *)v83 + 18) = (char *)v83 + 144;
  }
  v23 = (struct VIDMM_LOCAL_ALLOC **)*((_QWORD *)v11 + 5);
  v24 = (VIDMM_ALLOC *)((char *)v16 + 40);
  if ( *v23 != (struct VIDMM_LOCAL_ALLOC *)((char *)v11 + 32) )
    goto LABEL_110;
  *(_QWORD *)v24 = (char *)v11 + 32;
  *((_QWORD *)v16 + 6) = v23;
  *v23 = v24;
  *((_QWORD *)v11 + 5) = v24;
  if ( (*((_BYTE *)this + 40936) & 0x20) != 0 )
  {
    if ( (**((_DWORD **)a3 + 49) & 0x10000008) != 0 )
    {
      v25 = *(unsigned int *)(*((_QWORD *)this + 3) + 444LL);
      if ( (v25 & 0x10) != 0 )
      {
        v41 = *((_QWORD *)a3 + 29);
      }
      else
      {
        v84 = 0LL;
        v90 = 0LL;
        v89 = *(_QWORD *)(v88 + 16);
        CurrentProcess = PsGetCurrentProcess(v25, v23, 0LL, v22);
        v27 = *((_QWORD *)a3 + 28);
        v28 = CurrentProcess;
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v30 = (*((__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
               + 3))(
                v27,
                v28,
                &v84,
                0LL,
                v89,
                &v90,
                &v89,
                2,
                0,
                4);
        v13 = v30;
        if ( v30 < 0 )
        {
          _InterlockedAdd(&dword_1400816BC, 1u);
          v35 = PsGetCurrentProcess(v32, v31, v33, v34);
          WdLogSingleEntry3(6LL, a3, v35, v13);
          WdLogGlobalForLineNumber = 4455;
          PsGetCurrentProcess(v37, v36, v38, v39);
          DxgkLogInternalTriageEvent(v40, 262145LL);
          v11 = v85;
          v12 = 1;
          goto LABEL_93;
        }
        v41 = v84;
        v11 = v85;
      }
      *((_QWORD *)v16 + 20) = v41;
    }
    else
    {
      *v21 = *((_QWORD *)v11 + 2);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
  v42 = 0LL;
  v12 = 0;
  if ( v81 != v91 )
  {
    if ( v11 != *((struct VIDMM_LOCAL_ALLOC **)a3 + 6) && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    if ( *(_WORD *)(*((_QWORD *)a3 + 49) + 8LL) != (_WORD)v42 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v96,
        (struct _KTHREAD **)this + 4988);
      v44 = (_QWORD *)((char *)a3 + 296);
      if ( *((_QWORD *)a3 + 37) )
        VIDMM_GLOBAL::RemoveAllocationFromDecommitList(v43, a3, v79);
      v45 = *((_DWORD *)a3 + 8);
      if ( (v45 & 0x40) != 0 && (v45 & 0x20) != 0 )
      {
        v46 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL)
                        + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
        v47 = *(_QWORD **)(v46 + 112);
        v48 = v46 + 104;
        if ( *v47 != v48 )
          goto LABEL_110;
        *v44 = v48;
        *((_QWORD *)a3 + 38) = v47;
        *v47 = v44;
        *(_QWORD *)(v48 + 8) = v44;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v96);
      v12 = 0;
      v42 = 0LL;
    }
  }
  if ( (**((_DWORD **)a3 + 49) & 0x40000000) != 0 )
  {
    if ( (*((_DWORD *)this + 1746) & 2) != 0
      && (**(_DWORD **)(*(_QWORD *)v11 + 392LL) & 0x20000000) != 0
      && v11 == *(struct VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v11 + 48LL) )
    {
      LODWORD(v13) = -1071775487;
      goto LABEL_93;
    }
    v49 = VIDMM_GLOBAL::PinOneAllocation(this, v16, 0LL, 0, 0xFFFFFFFFFFFFFFFFuLL, v42);
    LODWORD(v13) = v49;
    if ( v49 < 0 )
    {
      _InterlockedAdd(&dword_14008172C, 1u);
      WdLogSingleEntry2(6LL, v16, v49);
      WdLogGlobalForLineNumber = 4567;
      DxgkLogInternalTriageEvent(v50, 262145LL);
      v12 = 0;
      goto LABEL_93;
    }
    DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 136));
    v12 = 1;
    if ( *((_BYTE *)a3 + 41) == 1 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v51) + 24) = a3;
        WdLogGlobalForLineNumber = 4586;
      }
      goto LABEL_13;
    }
    if ( (*((_BYTE *)a3 + 32) & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v51) + 24) = a3;
        WdLogGlobalForLineNumber = 4595;
      }
      goto LABEL_17;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
    v42 = 0LL;
    goto LABEL_73;
  }
  v52 = a2;
  v53 = a2[3];
  if ( !v53
    || (*((_BYTE *)v53 + 1919) != (_BYTE)v42
     || *((_DWORD *)v53 + 116) == 2 && *(int *)(*(_QWORD *)(*((_QWORD *)v53 + 2) + 16LL) + 3004LL) >= 2000)
    && (*((_DWORD *)a3 + 7) & 0x20) == 0 )
  {
LABEL_74:
    *((_DWORD *)v16 + 7) |= 0x40u;
    *a7 = v16;
    if ( (byte_140081241 & 0x10) == 0 )
      goto LABEL_86;
    v58 = *((_QWORD *)v16 + 2);
    if ( v58 )
    {
      v59 = *(_QWORD *)(v58 + 40);
      v78 = *(_DWORD *)(v58 + 16);
      if ( v59 )
      {
        v60 = *(_DWORD *)(v59 + 16);
        v87 = *(_QWORD *)(v59 + 48);
        v77 = v60;
      }
    }
    v82 = *((_QWORD *)a3 + 31);
    if ( (**((_DWORD **)a3 + 49) & 8) != 0 )
      v61 = *((_QWORD *)a3 + 29);
    else
      v61 = *((_QWORD *)v11 + 2);
    v100 = v61;
    if ( v58 && (v62 = *(_QWORD *)(v58 + 40)) != 0 )
    {
      v102 = *(struct VIDMM_ALLOC ***)(v62 + 56);
    }
    else
    {
      v102 = (struct VIDMM_ALLOC **)v42;
      if ( !v58 )
      {
        v80 = (struct VIDMM_PROCESS_ADAPTER_INFO *)v42;
        v102 = (struct VIDMM_ALLOC **)v42;
        goto LABEL_85;
      }
    }
    v80 = *(struct VIDMM_PROCESS_ADAPTER_INFO **)(v58 + 40);
LABEL_85:
    v63 = *((_QWORD *)this + 3);
    v64 = v52[3];
    CurrentProcessId = PsGetCurrentProcessId();
    McTemplateK0ppppppppppppq_EtwWriteTransfer(
      (__int64)v80,
      &EventCreateDeviceAllocation,
      v77,
      CurrentProcessId,
      v64,
      v63,
      v16,
      a3,
      v80,
      v102,
      v78,
      v77,
      v87,
      v100,
      v82);
LABEL_86:
    IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
    v67 = *(_QWORD *)(v88 + 16);
    if ( IsEnabledDeviceUsageNoInline )
    {
      _InterlockedAdd((volatile signed __int32 *)this + 1902, 1u);
      _InterlockedAdd64((volatile signed __int64 *)this + 952, v67);
    }
    else
    {
      ++*((_DWORD *)this + 1902);
      *((_QWORD *)this + 952) += v67;
    }
    return (unsigned int)v13;
  }
  v54 = *((_QWORD *)v16 + 1);
  v55 = *((_DWORD *)a3 + 6) & 0x3F;
  v86 = (unsigned __int64)v42;
  v56 = *(_QWORD *)(v54 + 72);
  v92 = (unsigned __int64)v42;
  v93 = v16;
  v99 = *(struct _VIDSCH_SYNC_OBJECT ***)(32 * v55 + v56);
  Resident = VIDMM_GLOBAL::MakeResident(this, (struct VIDMM_PAGING_QUEUE *)v99, &v93, 1uLL, (char)v42, &v86, &v92);
  LODWORD(v13) = Resident;
  if ( Resident == 259 )
  {
    v95 = v99[11];
    v94 = v86;
    VIDMM_GLOBAL::WaitForFences(this, &v95, &v94, 1u, 0LL, 0LL);
    v42 = 0LL;
    LODWORD(v13) = 0;
LABEL_73:
    v52 = a2;
    goto LABEL_74;
  }
  v42 = 0LL;
  if ( Resident >= 0 )
    goto LABEL_73;
LABEL_93:
  if ( v11 )
  {
    if ( v12 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
    memset(v97, 0, 0x58uLL);
    v68 = *((_QWORD *)v16 + 1);
    v69 = *((_DWORD *)a3 + 6) & 0x3F;
    LODWORD(v97[0]) = 200;
    v70 = *(_QWORD *)(v68 + 72);
    v97[2] = v16;
    v71 = VIDMM_GLOBAL::QueueDeferredCommand(
            (struct VIDMM_WORKER_THREAD **)this,
            *(struct VIDMM_PAGING_QUEUE **)(32 * v69 + v70),
            (struct _VIDMM_DEFERRED_COMMAND *)v97,
            1,
            0LL);
    Timeout = 0LL;
    if ( v71 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 5LL, 200LL, v71, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    KeWaitForSingleObject((char *)v16 + 72, (KWAIT_REASON)Timeout, 0, 0, Timeout);
    DXGFASTMUTEX::Acquire((struct VIDMM_GLOBAL_ALLOC *)((char *)a3 + 136));
    v12 = 1;
    v73 = (char *)v16 + 40;
    v74 = *((_QWORD *)v16 + 5);
    if ( !v74 )
      goto LABEL_104;
    if ( *(char **)(v74 + 8) == v73 )
    {
      v75 = (char **)*((_QWORD *)v16 + 6);
      if ( *v75 == v73 )
      {
        *v75 = (char *)v74;
        *(_QWORD *)(v74 + 8) = v75;
LABEL_104:
        VIDMM_GLOBAL::CloseLocalAllocation(this, v11, 1);
        goto LABEL_105;
      }
    }
LABEL_110:
    __fastfail(3u);
  }
LABEL_105:
  if ( v16 )
  {
    VIDMM_DEVICE::NotifyAllocationClosed((VIDMM_DEVICE *)a2, v16);
    operator delete(v16);
  }
  if ( v12 )
    DXGFASTMUTEX::Release((struct _KTHREAD **)a3 + 17);
  return (unsigned int)v13;
}
