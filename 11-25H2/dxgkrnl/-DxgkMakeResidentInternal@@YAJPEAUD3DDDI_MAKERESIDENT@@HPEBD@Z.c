/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x140293140
 * Callers:
 *     DxgkMakeResident @ 0x140293120 (DxgkMakeResident.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z @ 0x1403BAA80 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403F25B0 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qxx_EtwWriteTransfer @ 0x1400158F4 (McTemplateK0qxx_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140016478 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14001DB10 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001DFA4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002D7A8 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1400344F4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x140038CAC (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x140294748 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x140408DB8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 */

__int64 __fastcall DxgkMakeResidentInternal(struct D3DDDI_MAKERESIDENT *a1, int a2, const char *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // rsi
  struct DXGPROCESS *v11; // rax
  struct D3DDDI_MAKERESIDENT *v12; // rdx
  struct D3DDDI_MAKERESIDENT *v13; // rsi
  __int64 v14; // r9
  struct DXGPAGINGQUEUE *v15; // r15
  unsigned __int64 NumAllocations; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  DXGALLOCATIONREFERENCE *v19; // r14
  unsigned __int64 v20; // rbx
  _BYTE *Pool2; // rcx
  unsigned int *AllocationList; // r12
  __int64 v23; // r14
  __int64 v24; // rcx
  int v25; // ebx
  struct _KEVENT *v26; // rsi
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  char v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  struct DXGPROCESS *v35; // rsi
  struct DXGPROCESS *v36; // r15
  unsigned int *v37; // rsi
  struct DXGPAGINGQUEUE *v38; // rsi
  __int64 v39; // r14
  struct D3DDDI_MAKERESIDENT *v40; // r13
  __int64 Value; // r8
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int Resident; // ebx
  __int64 v46; // r8
  int v47; // esi
  struct D3DDDI_MAKERESIDENT *v48; // r14
  void *p_PagingFenceValue; // rcx
  void *p_NumBytesToTrim; // rcx
  __int64 v51; // rcx
  DXGALLOCATIONREFERENCE *v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int *v56; // rax
  unsigned int v57; // r8d
  struct _EX_RUNDOWN_REF *v58; // rax
  ULONG_PTR Count; // r8
  ULONG_PTR v60; // rbx
  ULONG_PTR *v61; // rcx
  struct _EX_RUNDOWN_REF **v62; // rbx
  struct DXGTHREAD *DxgThread; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  bool v66; // zf
  DXGADAPTER *v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // r8
  struct _KEVENT *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *v78; // rax
  struct _ETHREAD *v79; // rbx
  KSPIN_LOCK *v80; // rax
  __int64 v81; // rax
  bool v82; // cf
  unsigned __int64 v83; // rax
  __int64 v84; // rax
  DXGALLOCATIONREFERENCE *v85; // rbx
  __int64 v86; // r15
  unsigned int v87; // r14d
  struct D3DDDI_MAKERESIDENT_FLAGS v88; // ebx
  unsigned int v89; // esi
  unsigned int HostProcess; // eax
  __int64 v91; // rcx
  __int64 v92; // r8
  unsigned int v93[2]; // [rsp+28h] [rbp-490h]
  struct DXGALLOCATIONREFERENCE *v94; // [rsp+30h] [rbp-488h]
  int v95; // [rsp+50h] [rbp-468h] BYREF
  __int64 v96; // [rsp+58h] [rbp-460h]
  char v97; // [rsp+60h] [rbp-458h]
  struct _EX_RUNDOWN_REF *v98; // [rsp+68h] [rbp-450h] BYREF
  char v99[8]; // [rsp+70h] [rbp-448h] BYREF
  struct D3DDDI_MAKERESIDENT *v100; // [rsp+78h] [rbp-440h]
  _BYTE *v101; // [rsp+80h] [rbp-438h]
  struct DXGPAGINGQUEUE *v102; // [rsp+88h] [rbp-430h] BYREF
  struct DXGPROCESS *v103; // [rsp+90h] [rbp-428h]
  struct D3DDDI_MAKERESIDENT *v104; // [rsp+98h] [rbp-420h]
  __int64 v105; // [rsp+A0h] [rbp-418h] BYREF
  int v106; // [rsp+A8h] [rbp-410h]
  unsigned int v107; // [rsp+B0h] [rbp-408h]
  struct DXGTHREAD *v108; // [rsp+B8h] [rbp-400h] BYREF
  ULONG_PTR *v109; // [rsp+C0h] [rbp-3F8h]
  struct _EX_RUNDOWN_REF **v110; // [rsp+C8h] [rbp-3F0h]
  struct DXGALLOCATIONREFERENCE *v111; // [rsp+D0h] [rbp-3E8h]
  __int64 v112; // [rsp+D8h] [rbp-3E0h]
  unsigned int *v113; // [rsp+E0h] [rbp-3D8h]
  struct D3DDDI_MAKERESIDENT *v114; // [rsp+E8h] [rbp-3D0h]
  _BYTE v115[24]; // [rsp+F0h] [rbp-3C8h] BYREF
  _OWORD v116[3]; // [rsp+108h] [rbp-3B0h] BYREF
  PVOID P; // [rsp+140h] [rbp-378h]
  _BYTE v118[320]; // [rsp+148h] [rbp-370h] BYREF
  int v119; // [rsp+288h] [rbp-230h]
  char v120[8]; // [rsp+290h] [rbp-228h] BYREF
  _BYTE v121[16]; // [rsp+298h] [rbp-220h] BYREF
  DXGADAPTER *v122; // [rsp+2A8h] [rbp-210h]
  char v123; // [rsp+2B0h] [rbp-208h]
  char *v124; // [rsp+2B8h] [rbp-200h]
  char v125[24]; // [rsp+2C0h] [rbp-1F8h] BYREF
  _BYTE v126[16]; // [rsp+2D8h] [rbp-1E0h] BYREF
  DXGADAPTER *v127; // [rsp+2E8h] [rbp-1D0h]
  char v128; // [rsp+2F0h] [rbp-1C8h]
  __int64 v129; // [rsp+2F8h] [rbp-1C0h]
  __int64 v130; // [rsp+318h] [rbp-1A0h]
  char v131; // [rsp+320h] [rbp-198h]
  DXGALLOCATIONREFERENCE *v132; // [rsp+330h] [rbp-188h] BYREF
  _BYTE v133[320]; // [rsp+338h] [rbp-180h] BYREF
  unsigned int v134; // [rsp+478h] [rbp-40h]

  v104 = a1;
  v114 = a1;
  v95 = -1;
  v6 = 0;
  v96 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v97 = 1;
    v95 = 2115;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2115);
  }
  else
  {
    v97 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v95, 2115);
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      v103 = v11;
      if ( v11 )
        goto LABEL_6;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      v103 = v11;
      if ( v11 )
        goto LABEL_6;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = v10;
  v103 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 460;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95);
    v66 = v97 == 0;
    goto LABEL_98;
  }
LABEL_6:
  memset(v116, 0, sizeof(v116));
  v100 = 0LL;
  if ( a2 )
  {
    v12 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v12 = (struct D3DDDI_MAKERESIDENT *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v116, v12, 0x30uLL);
    v13 = (struct D3DDDI_MAKERESIDENT *)v116;
    v100 = (struct D3DDDI_MAKERESIDENT *)v116;
    v11 = v103;
  }
  else
  {
    v13 = a1;
    v100 = a1;
  }
  if ( !v13->NumAllocations )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 493;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95);
    v66 = v97 == 0;
    goto LABEL_98;
  }
  if ( !v13->AllocationList )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 500;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95);
    v66 = v97 == 0;
    goto LABEL_98;
  }
  if ( v13->Flags.Value >= 4 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 507;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95);
    v66 = v97 == 0;
    goto LABEL_98;
  }
  v102 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)v99, v13->hPagingQueue, v11, &v102, 1);
  v15 = v102;
  if ( !v102 )
  {
    WdLogSingleEntry2(3LL, v13->hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 518;
    goto LABEL_97;
  }
  v132 = 0LL;
  v134 = 0;
  P = 0LL;
  v119 = 0;
  NumAllocations = v13->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v132 = (DXGALLOCATIONREFERENCE *)v133;
    if ( (_DWORD)NumAllocations )
    {
      v17 = 0LL;
      v18 = (unsigned int)NumAllocations;
      do
      {
        *(_QWORD *)((char *)v132 + v17) = 0LL;
        v17 += 8LL;
        --v18;
      }
      while ( v18 );
    }
LABEL_18:
    v134 = NumAllocations;
    v19 = v132;
    v111 = v132;
    goto LABEL_19;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations >= 8 )
  {
    v81 = 8 * NumAllocations;
    if ( !is_mul_ok(NumAllocations, 8uLL) )
      v81 = -1LL;
    v82 = __CFADD__(v81, 8LL);
    v83 = v81 + 8;
    if ( v82 )
      v83 = -1LL;
    v84 = operator new[](v83, 0x4B677844u, 256LL, v14);
    if ( v84 )
    {
      *(_QWORD *)v84 = NumAllocations;
      v85 = (DXGALLOCATIONREFERENCE *)(v84 + 8);
      `vector constructor iterator'(
        (char *)(v84 + 8),
        8LL,
        NumAllocations,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v132 = v85;
    }
    goto LABEL_18;
  }
  v19 = 0LL;
  v111 = 0LL;
LABEL_19:
  v20 = v13->NumAllocations;
  if ( (unsigned int)v20 > 0x28 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v20 < 8 )
    {
      Pool2 = 0LL;
      v101 = 0LL;
      goto LABEL_24;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v20, 1265072196LL, v14);
    P = Pool2;
    goto LABEL_22;
  }
  Pool2 = v118;
  v101 = v118;
  P = v118;
  if ( (_DWORD)v20 )
  {
    memset(v118, 0, 8LL * (unsigned int)v20);
    Pool2 = P;
LABEL_22:
    v101 = Pool2;
  }
  v119 = v20;
LABEL_24:
  if ( !v19 || !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 542;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate storage to validate input",
      542LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v118 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v119 = 0;
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v132);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v99);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95);
    if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v91, (__int64)&EventProfilerExit, v92, v95);
    return 3221225495LL;
  }
  AllocationList = (unsigned int *)v13->AllocationList;
  v113 = &AllocationList[v13->NumAllocations];
  v110 = (struct _EX_RUNDOWN_REF **)v19;
  v109 = (ULONG_PTR *)Pool2;
  v23 = *((_QWORD *)v15 + 2);
  v112 = v23;
  v105 = v23;
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
  if ( *(int *)(v24 + 2736) >= 0x2000 || *(_BYTE *)(v24 + 3036) )
    v25 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 332);
  else
    v25 = 0;
  v106 = v25;
  v26 = *(struct _KEVENT **)(v23 + 16);
  if ( *(_DWORD *)(v23 + 464) != 2 )
  {
    if ( KeReadStateEvent(v26 + 4) )
      goto LABEL_30;
    v72 = v26 + 4;
    goto LABEL_124;
  }
  if ( !KeReadStateEvent(v26 + 5) )
  {
    v72 = v26 + 5;
LABEL_124:
    KeWaitForSingleObject(v72, Executive, 0, 0, 0LL);
  }
LABEL_30:
  KeEnterCriticalRegion();
  if ( v25 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v23 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 160));
      v28 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v28 = 0;
    }
    if ( !v28 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v23 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v73, (__int64)&EventBlockThread, v74, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v23 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v23 + 16) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v120, v23, 0, v27, 0);
  if ( v131 )
  {
    if ( v128 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v126, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7603;
    }
    v67 = v127;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v127 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v127 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v68, (__int64)&EventBlockThread, v69, 72);
        KeWaitForSingleObject((char *)v127 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v127, 0LL);
      v67 = v127;
    }
    v129 = 0LL;
    v128 = 1;
    if ( *((_DWORD *)v67 + 50) != 1 )
      goto LABEL_109;
  }
  if ( v123 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v121, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v122 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v122 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventBlockThread, v30, 72);
      KeWaitForSingleObject((char *)v122 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v122, a3);
  }
  v124 = 0LL;
  if ( a3 && (int)RtlStringCbCopyA(v125, 17LL, a3) >= 0 )
    v124 = v125;
  v123 = 1;
  if ( *(_DWORD *)(v130 + 608) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v121);
    if ( !v131 )
    {
LABEL_110:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v105);
      if ( P != v118 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v119 = 0;
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v132);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v99);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95);
      if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v70, (__int64)&EventProfilerExit, v71, v95);
      return 3221226166LL;
    }
LABEL_109:
    COREACCESS::Release((COREACCESS *)v126);
    goto LABEL_110;
  }
  v31 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
  v32 = *(_BYTE *)(v31 + 209);
  v33 = PsGetCurrentProcess(v31);
  v34 = PsGetProcessDxgProcess(v33);
  v35 = (struct DXGPROCESS *)v34;
  if ( !v34 || (*(_DWORD *)(v34 + 408) & 0x80) != 0 )
  {
    v78 = DXGTHREAD::GetCurrent();
    if ( v78 )
    {
      v36 = (struct DXGPROCESS *)*((_QWORD *)v78 + 3);
      if ( v36 )
        goto LABEL_49;
    }
    else
    {
      v79 = KeGetCurrentThread();
      v80 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v36 = DXGGLOBAL::SearchDxgThreadList(v80, v79);
      if ( v36 )
        goto LABEL_49;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v36 = v35;
LABEL_49:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v115, v36);
  v37 = v113;
  while ( 1 )
  {
    if ( AllocationList == v37 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v115);
      if ( v32 )
      {
        v86 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
        v40 = v100;
        v87 = v100->NumAllocations;
        v88.0 = (struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B)v100->Flags.Value;
        v89 = *((_DWORD *)v102 + 7);
        HostProcess = DXGPROCESS::GetHostProcess(v103);
        Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v86 + 4664),
                     HostProcess,
                     0,
                     v89,
                     v88,
                     v87,
                     v111,
                     &v40->PagingFenceValue,
                     &v40->NumBytesToTrim);
      }
      else
      {
        v38 = v102;
        v39 = *((_QWORD *)v102 + 2);
        if ( !*(_BYTE *)(v39 + 1903)
          && (*(_DWORD *)(v39 + 464) != 2 || *(int *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 3004LL) < 2000) )
        {
          WdLogSingleEntry1(2LL, v102);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Calling MakeResident on a device that was not created with the UMD residency flag. Device=0x%p",
            (__int64)v38,
            0LL,
            0LL,
            0LL,
            0LL);
          Resident = -1073741637;
          v40 = v100;
          v47 = a2;
          goto LABEL_102;
        }
        v40 = v100;
        Value = v100->Flags.Value;
        v42 = v100->Flags.Value & 1 | 2;
        if ( (Value & 2) == 0 )
          v42 = v100->Flags.Value & 1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
        {
          LODWORD(v94) = v100->Flags.0;
          v93[0] = v100->NumAllocations;
          McTemplateK0pxqt_EtwWriteTransfer(
            *(_QWORD *)(*((_QWORD *)v102 + 5) + 32LL),
            &EventMakeResidentBegin,
            Value,
            v102,
            *(_QWORD *)(*((_QWORD *)v102 + 5) + 32LL),
            *(_QWORD *)v93,
            v94);
        }
        Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 760LL) + 8LL) + 720LL))(
                     *(_QWORD *)(*(_QWORD *)(v39 + 16) + 768LL),
                     *((_QWORD *)v38 + 4),
                     v101,
                     v40->NumAllocations,
                     v42,
                     &v40->PagingFenceValue,
                     &v40->NumBytesToTrim);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
          McTemplateK0qxx_EtwWriteTransfer(v44, v43, v46, Resident, v40->NumBytesToTrim, v40->PagingFenceValue);
      }
      v47 = a2;
      if ( Resident >= 0 && a2 )
      {
        v48 = v104;
        p_PagingFenceValue = &v104->PagingFenceValue;
        if ( (unsigned __int64)&v104->PagingFenceValue >= MmUserProbeAddress )
          p_PagingFenceValue = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(p_PagingFenceValue, &v40->PagingFenceValue, 8uLL);
        goto LABEL_64;
      }
LABEL_102:
      v48 = v104;
LABEL_64:
      if ( v47 )
      {
        p_NumBytesToTrim = &v48->NumBytesToTrim;
        if ( (unsigned __int64)&v48->NumBytesToTrim >= MmUserProbeAddress )
          p_NumBytesToTrim = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(p_NumBytesToTrim, &v40->NumBytesToTrim, 8uLL);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
      if ( v106 )
      {
        v51 = v105 + 144;
        _InterlockedDecrement((volatile signed __int32 *)(v105 + 160));
        ExReleasePushLockSharedEx(v51, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v105 + 136));
      }
      KeLeaveCriticalRegion();
      if ( P != v118 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v119 = 0;
      v52 = v132;
      if ( v132 == (DXGALLOCATIONREFERENCE *)v133 )
      {
        if ( v134 )
        {
          while ( 1 )
          {
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v52 + v6++);
            if ( v6 >= v134 )
              break;
            v52 = v132;
          }
        }
      }
      else if ( v132 )
      {
        DXGALLOCATIONREFERENCE::`vector deleting destructor'(v132);
      }
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v99);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95);
      if ( v97 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v53, (__int64)&EventProfilerExit, v54, v95);
      }
      return (unsigned int)Resident;
    }
    if ( a2 )
    {
      v56 = AllocationList;
      if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
        v56 = (unsigned int *)MmUserProbeAddress;
      v57 = *v56;
      v107 = *v56;
    }
    else
    {
      v57 = *AllocationList;
      v107 = *AllocationList;
    }
    DXGPROCESS::GetAllocationUnsafe((__int64)v36, (DXGALLOCATIONREFERENCE *)&v98, v57);
    v58 = v98;
    if ( !v98 )
      break;
    Count = v98[1].Count;
    if ( Count != v23 )
    {
      WdLogSingleEntry2(2LL, v23, Count);
      WdLogGlobalForLineNumber = 610;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Mismatch between paging queue device and allocation device. Paging Queue Device: 0x%I64x, Allocation Device: 0x%I64x",
        v23,
        v98[1].Count,
        0LL,
        0LL,
        0LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v98);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v115);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v105);
      if ( P != v118 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v119 = 0;
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v132);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v99);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95);
      if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        goto LABEL_121;
      return 3221225485LL;
    }
    if ( !v32 )
    {
      v60 = v98[3].Count;
      if ( !v60 )
      {
        WdLogSingleEntry1(3LL, v98);
        WdLogGlobalForLineNumber = 621;
        v58 = v98;
      }
      v61 = v109;
      *v109 = v60;
      v109 = v61 + 1;
    }
    v62 = v110;
    if ( *v110 )
    {
      ExReleaseRundownProtection(*v110 + 11);
      v58 = v98;
    }
    *v62 = v58;
    v98 = 0LL;
    v110 = v62 + 1;
    ++AllocationList;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 332) )
    {
      v108 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v108) >= 0 )
      {
        DxgThread = v108;
        if ( v108 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v108 = DxgThread) != 0LL) )
        {
          if ( *((_DWORD *)DxgThread + 12) )
          {
            WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
            WdLogGlobalForLineNumber = 73;
          }
        }
      }
    }
  }
  WdLogSingleEntry1(2LL, 0LL);
  WdLogGlobalForLineNumber = 602;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Invalid hAllocation specified: 0x%I64x, returning 0x%I64x",
    (__int64)v98,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v98);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v115);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v120);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v105);
  if ( P != v118 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v119 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v132);
LABEL_97:
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v99);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95);
  v66 = v97 == 0;
LABEL_98:
  if ( !v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
LABEL_121:
    McTemplateK0q_EtwWriteTransfer(v64, (__int64)&EventProfilerExit, v65, v95);
  return 3221225485LL;
}
