/*
 * XREFs of ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x1402A7570
 * Callers:
 *     DxgkMakeResident @ 0x1402A7550 (DxgkMakeResident.c)
 *     ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z @ 0x14040ECA0 (-DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@PEBD@Z.c)
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140425E60 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?RtlStringCbCopyA@@YAJPEAD_KPEBD@Z @ 0x14000E530 (-RtlStringCbCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14000E9C4 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qxx_EtwWriteTransfer @ 0x1400126F4 (McTemplateK0qxx_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013278 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x14002F238 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033510 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140034428 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x14003893C (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1402A8B78 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1404012B0 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
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
  struct DXGPAGINGQUEUE *v14; // r15
  unsigned __int64 NumAllocations; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  DXGALLOCATIONREFERENCE *v18; // r14
  unsigned __int64 v19; // rbx
  _BYTE *Pool2; // rcx
  unsigned int *AllocationList; // r12
  __int64 v22; // r14
  __int64 v23; // rcx
  int v24; // ebx
  struct _KEVENT *v25; // rsi
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  char v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  struct DXGPROCESS *v34; // rsi
  struct DXGPROCESS *v35; // r15
  unsigned int *v36; // rsi
  struct DXGPAGINGQUEUE *v37; // rsi
  __int64 v38; // r14
  struct D3DDDI_MAKERESIDENT *v39; // r13
  __int64 Value; // r8
  int v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int Resident; // ebx
  __int64 v45; // r8
  int v46; // esi
  struct D3DDDI_MAKERESIDENT *v47; // r14
  void *p_PagingFenceValue; // rcx
  void *p_NumBytesToTrim; // rcx
  __int64 v50; // rcx
  DXGALLOCATIONREFERENCE *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int *v55; // rax
  unsigned int v56; // r8d
  struct _EX_RUNDOWN_REF *v57; // rax
  ULONG_PTR Count; // r8
  ULONG_PTR v59; // rbx
  ULONG_PTR *v60; // rcx
  struct _EX_RUNDOWN_REF **v61; // rbx
  struct DXGTHREAD *DxgThread; // rax
  __int64 v63; // rcx
  __int64 v64; // r8
  bool v65; // zf
  DXGADAPTER *v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rcx
  __int64 v70; // r8
  struct _KEVENT *v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGTHREAD *v77; // rax
  struct _ETHREAD *v78; // rbx
  KSPIN_LOCK *v79; // rax
  __int64 v80; // rax
  bool v81; // cf
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  DXGALLOCATIONREFERENCE *v84; // rbx
  __int64 v85; // r15
  unsigned int v86; // r14d
  struct D3DDDI_MAKERESIDENT_FLAGS v87; // ebx
  unsigned int v88; // esi
  unsigned int HostProcess; // eax
  __int64 v90; // rcx
  __int64 v91; // r8
  unsigned int v92[2]; // [rsp+28h] [rbp-490h]
  struct DXGALLOCATIONREFERENCE *v93; // [rsp+30h] [rbp-488h]
  int v94; // [rsp+50h] [rbp-468h] BYREF
  __int64 v95; // [rsp+58h] [rbp-460h]
  char v96; // [rsp+60h] [rbp-458h]
  struct _EX_RUNDOWN_REF *v97; // [rsp+68h] [rbp-450h] BYREF
  char v98[8]; // [rsp+70h] [rbp-448h] BYREF
  struct D3DDDI_MAKERESIDENT *v99; // [rsp+78h] [rbp-440h]
  _BYTE *v100; // [rsp+80h] [rbp-438h]
  struct DXGPAGINGQUEUE *v101; // [rsp+88h] [rbp-430h] BYREF
  struct DXGPROCESS *v102; // [rsp+90h] [rbp-428h]
  struct D3DDDI_MAKERESIDENT *v103; // [rsp+98h] [rbp-420h]
  __int64 v104; // [rsp+A0h] [rbp-418h] BYREF
  int v105; // [rsp+A8h] [rbp-410h]
  unsigned int v106; // [rsp+B0h] [rbp-408h]
  struct DXGTHREAD *v107; // [rsp+B8h] [rbp-400h] BYREF
  ULONG_PTR *v108; // [rsp+C0h] [rbp-3F8h]
  struct _EX_RUNDOWN_REF **v109; // [rsp+C8h] [rbp-3F0h]
  struct DXGALLOCATIONREFERENCE *v110; // [rsp+D0h] [rbp-3E8h]
  __int64 v111; // [rsp+D8h] [rbp-3E0h]
  unsigned int *v112; // [rsp+E0h] [rbp-3D8h]
  struct D3DDDI_MAKERESIDENT *v113; // [rsp+E8h] [rbp-3D0h]
  _BYTE v114[24]; // [rsp+F0h] [rbp-3C8h] BYREF
  _OWORD v115[3]; // [rsp+108h] [rbp-3B0h] BYREF
  PVOID P; // [rsp+140h] [rbp-378h]
  _BYTE v117[320]; // [rsp+148h] [rbp-370h] BYREF
  int v118; // [rsp+288h] [rbp-230h]
  char v119[8]; // [rsp+290h] [rbp-228h] BYREF
  _BYTE v120[16]; // [rsp+298h] [rbp-220h] BYREF
  DXGADAPTER *v121; // [rsp+2A8h] [rbp-210h]
  char v122; // [rsp+2B0h] [rbp-208h]
  char *v123; // [rsp+2B8h] [rbp-200h]
  char v124[24]; // [rsp+2C0h] [rbp-1F8h] BYREF
  _BYTE v125[16]; // [rsp+2D8h] [rbp-1E0h] BYREF
  DXGADAPTER *v126; // [rsp+2E8h] [rbp-1D0h]
  char v127; // [rsp+2F0h] [rbp-1C8h]
  __int64 v128; // [rsp+2F8h] [rbp-1C0h]
  __int64 v129; // [rsp+318h] [rbp-1A0h]
  char v130; // [rsp+320h] [rbp-198h]
  DXGALLOCATIONREFERENCE *v131; // [rsp+330h] [rbp-188h] BYREF
  _BYTE v132[320]; // [rsp+338h] [rbp-180h] BYREF
  unsigned int v133; // [rsp+478h] [rbp-40h]

  v103 = a1;
  v113 = a1;
  v94 = -1;
  v6 = 0;
  v95 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v96 = 1;
    v94 = 2115;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 2115);
  }
  else
  {
    v96 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v94, 2115);
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v11 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      v102 = v11;
      if ( v11 )
        goto LABEL_6;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v11 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      v102 = v11;
      if ( v11 )
        goto LABEL_6;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = v10;
  v102 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 460;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
    v65 = v96 == 0;
    goto LABEL_98;
  }
LABEL_6:
  memset(v115, 0, sizeof(v115));
  v99 = 0LL;
  if ( a2 )
  {
    v12 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v12 = (struct D3DDDI_MAKERESIDENT *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v115, v12, 0x30uLL);
    v13 = (struct D3DDDI_MAKERESIDENT *)v115;
    v99 = (struct D3DDDI_MAKERESIDENT *)v115;
    v11 = v102;
  }
  else
  {
    v13 = a1;
    v99 = a1;
  }
  if ( !v13->NumAllocations )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 493;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
    v65 = v96 == 0;
    goto LABEL_98;
  }
  if ( !v13->AllocationList )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 500;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
    v65 = v96 == 0;
    goto LABEL_98;
  }
  if ( v13->Flags.Value >= 4 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 507;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
    v65 = v96 == 0;
    goto LABEL_98;
  }
  v101 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)v98, v13->hPagingQueue, (struct _KTHREAD **)v11, &v101, 1);
  v14 = v101;
  if ( !v101 )
  {
    WdLogSingleEntry2(3LL, v13->hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 518;
    goto LABEL_97;
  }
  v131 = 0LL;
  v133 = 0;
  P = 0LL;
  v118 = 0;
  NumAllocations = v13->NumAllocations;
  if ( (unsigned int)NumAllocations <= 0x28 )
  {
    v131 = (DXGALLOCATIONREFERENCE *)v132;
    if ( (_DWORD)NumAllocations )
    {
      v16 = 0LL;
      v17 = (unsigned int)NumAllocations;
      do
      {
        *(_QWORD *)((char *)v131 + v16) = 0LL;
        v16 += 8LL;
        --v17;
      }
      while ( v17 );
    }
LABEL_18:
    v133 = NumAllocations;
    v18 = v131;
    v110 = v131;
    goto LABEL_19;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / NumAllocations >= 8 )
  {
    v80 = 8 * NumAllocations;
    if ( !is_mul_ok(NumAllocations, 8uLL) )
      v80 = -1LL;
    v81 = __CFADD__(v80, 8LL);
    v82 = v80 + 8;
    if ( v81 )
      v82 = -1LL;
    v83 = operator new[](v82, 0x4B677844u, 256LL);
    if ( v83 )
    {
      *(_QWORD *)v83 = NumAllocations;
      v84 = (DXGALLOCATIONREFERENCE *)(v83 + 8);
      `vector constructor iterator'(
        (char *)(v83 + 8),
        8LL,
        NumAllocations,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v131 = v84;
    }
    goto LABEL_18;
  }
  v18 = 0LL;
  v110 = 0LL;
LABEL_19:
  v19 = v13->NumAllocations;
  if ( (unsigned int)v19 > 0x28 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v19 < 8 )
    {
      Pool2 = 0LL;
      v100 = 0LL;
      goto LABEL_24;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v19, 1265072196LL);
    P = Pool2;
    goto LABEL_22;
  }
  Pool2 = v117;
  v100 = v117;
  P = v117;
  if ( (_DWORD)v19 )
  {
    memset(v117, 0, 8LL * (unsigned int)v19);
    Pool2 = P;
LABEL_22:
    v100 = Pool2;
  }
  v118 = v19;
LABEL_24:
  if ( !v18 || !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 542;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate storage to validate input",
      542LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v117 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v118 = 0;
    PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v131);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v98);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
    if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v90, (__int64)&EventProfilerExit, v91, v94);
    return 3221225495LL;
  }
  AllocationList = (unsigned int *)v13->AllocationList;
  v112 = &AllocationList[v13->NumAllocations];
  v109 = (struct _EX_RUNDOWN_REF **)v18;
  v108 = (ULONG_PTR *)Pool2;
  v22 = *((_QWORD *)v14 + 2);
  v111 = v22;
  v104 = v22;
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
  if ( *(int *)(v23 + 2736) >= 0x2000 || *(_BYTE *)(v23 + 3036) )
    v24 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
  else
    v24 = 0;
  v105 = v24;
  v25 = *(struct _KEVENT **)(v22 + 16);
  if ( *(_DWORD *)(v22 + 464) != 2 )
  {
    if ( KeReadStateEvent(v25 + 4) )
      goto LABEL_30;
    v71 = v25 + 4;
    goto LABEL_124;
  }
  if ( !KeReadStateEvent(v25 + 5) )
  {
    v71 = v25 + 5;
LABEL_124:
    KeWaitForSingleObject(v71, Executive, 0, 0, 0LL);
  }
LABEL_30:
  KeEnterCriticalRegion();
  if ( v24 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v22 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 160));
      v27 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v27 = 0;
    }
    if ( !v27 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v22 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v72, (__int64)&EventBlockThread, v73, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v22 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v22 + 16) + 16LL));
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, v22, 0, v26, 0);
  if ( v130 )
  {
    if ( v127 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v125, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    v66 = v126;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v126 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v126 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v67, (__int64)&EventBlockThread, v68, 72);
        KeWaitForSingleObject((char *)v126 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v126, 0LL);
      v66 = v126;
    }
    v128 = 0LL;
    v127 = 1;
    if ( *((_DWORD *)v66 + 50) != 1 )
      goto LABEL_109;
  }
  if ( v122 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v120, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7628;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v121 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v121 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventBlockThread, v29, 72);
      KeWaitForSingleObject((char *)v121 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v121, a3);
  }
  v123 = 0LL;
  if ( a3 && (int)RtlStringCbCopyA(v124, 17LL, a3) >= 0 )
    v123 = v124;
  v122 = 1;
  if ( *(_DWORD *)(v129 + 608) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v120);
    if ( !v130 )
    {
LABEL_110:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v104);
      if ( P != v117 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v118 = 0;
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v131);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v98);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
      if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v69, (__int64)&EventProfilerExit, v70, v94);
      return 3221226166LL;
    }
LABEL_109:
    COREACCESS::Release((COREACCESS *)v125);
    goto LABEL_110;
  }
  v30 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
  v31 = *(_BYTE *)(v30 + 209);
  v32 = PsGetCurrentProcess(v30);
  v33 = PsGetProcessDxgProcess(v32);
  v34 = (struct DXGPROCESS *)v33;
  if ( !v33 || (*(_DWORD *)(v33 + 408) & 0x80) != 0 )
  {
    v77 = DXGTHREAD::GetCurrent();
    if ( v77 )
    {
      v35 = (struct DXGPROCESS *)*((_QWORD *)v77 + 3);
      if ( v35 )
        goto LABEL_49;
    }
    else
    {
      v78 = KeGetCurrentThread();
      v79 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v35 = DXGGLOBAL::SearchDxgThreadList(v79, v78);
      if ( v35 )
        goto LABEL_49;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v35 = v34;
LABEL_49:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v114, v35);
  v36 = v112;
  while ( 1 )
  {
    if ( AllocationList == v36 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v114);
      if ( v31 )
      {
        v85 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL);
        v39 = v99;
        v86 = v99->NumAllocations;
        v87.0 = (struct D3DDDI_MAKERESIDENT_FLAGS::$2E662C15F8525AEEECC7862586193CD2::$C41099F84E8AA7AB57942996F31C279B)v99->Flags.Value;
        v88 = *((_DWORD *)v101 + 7);
        HostProcess = DXGPROCESS::GetHostProcess(v102);
        Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                     (DXG_GUEST_VIRTUALGPU_VMBUS *)(v85 + 4664),
                     HostProcess,
                     0,
                     v88,
                     v87,
                     v86,
                     v110,
                     &v39->PagingFenceValue,
                     &v39->NumBytesToTrim);
      }
      else
      {
        v37 = v101;
        v38 = *((_QWORD *)v101 + 2);
        if ( !*(_BYTE *)(v38 + 1919)
          && (*(_DWORD *)(v38 + 464) != 2 || *(int *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 3004LL) < 2000) )
        {
          WdLogSingleEntry1(2LL, v101);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Calling MakeResident on a device that was not created with the UMD residency flag. Device=0x%p",
            (__int64)v37,
            0LL,
            0LL,
            0LL,
            0LL);
          Resident = -1073741637;
          v39 = v99;
          v46 = a2;
          goto LABEL_102;
        }
        v39 = v99;
        Value = v99->Flags.Value;
        v41 = v99->Flags.Value & 1 | 2;
        if ( (Value & 2) == 0 )
          v41 = v99->Flags.Value & 1;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
        {
          LODWORD(v93) = v99->Flags.0;
          v92[0] = v99->NumAllocations;
          McTemplateK0pxqt_EtwWriteTransfer(
            *(_QWORD *)(*((_QWORD *)v101 + 5) + 32LL),
            &EventMakeResidentBegin,
            Value,
            v101,
            *(_QWORD *)(*((_QWORD *)v101 + 5) + 32LL),
            *(_QWORD *)v92,
            v93);
        }
        Resident = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD, int, UINT64 *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 760LL) + 8LL) + 720LL))(
                     *(_QWORD *)(*(_QWORD *)(v38 + 16) + 768LL),
                     *((_QWORD *)v37 + 4),
                     v100,
                     v39->NumAllocations,
                     v41,
                     &v39->PagingFenceValue,
                     &v39->NumBytesToTrim);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
          McTemplateK0qxx_EtwWriteTransfer(v43, v42, v45, Resident, v39->NumBytesToTrim, v39->PagingFenceValue);
      }
      v46 = a2;
      if ( Resident >= 0 && a2 )
      {
        v47 = v103;
        p_PagingFenceValue = &v103->PagingFenceValue;
        if ( (unsigned __int64)&v103->PagingFenceValue >= MmUserProbeAddress )
          p_PagingFenceValue = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(p_PagingFenceValue, &v39->PagingFenceValue, 8uLL);
        goto LABEL_64;
      }
LABEL_102:
      v47 = v103;
LABEL_64:
      if ( v46 )
      {
        p_NumBytesToTrim = &v47->NumBytesToTrim;
        if ( (unsigned __int64)&v47->NumBytesToTrim >= MmUserProbeAddress )
          p_NumBytesToTrim = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(p_NumBytesToTrim, &v39->NumBytesToTrim, 8uLL);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
      if ( v105 )
      {
        v50 = v104 + 144;
        _InterlockedDecrement((volatile signed __int32 *)(v104 + 160));
        ExReleasePushLockSharedEx(v50, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v104 + 136));
      }
      KeLeaveCriticalRegion();
      if ( P != v117 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v118 = 0;
      v51 = v131;
      if ( v131 == (DXGALLOCATIONREFERENCE *)v132 )
      {
        if ( v133 )
        {
          while ( 1 )
          {
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v51 + v6++);
            if ( v6 >= v133 )
              break;
            v51 = v131;
          }
        }
      }
      else if ( v131 )
      {
        DXGALLOCATIONREFERENCE::`vector deleting destructor'(v131);
      }
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v98);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
      if ( v96 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v52, (__int64)&EventProfilerExit, v53, v94);
      }
      return (unsigned int)Resident;
    }
    if ( a2 )
    {
      v55 = AllocationList;
      if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
        v55 = (unsigned int *)MmUserProbeAddress;
      v56 = *v55;
      v106 = *v55;
    }
    else
    {
      v56 = *AllocationList;
      v106 = *AllocationList;
    }
    DXGPROCESS::GetAllocationUnsafe((__int64)v35, (DXGALLOCATIONREFERENCE *)&v97, v56);
    v57 = v97;
    if ( !v97 )
      break;
    Count = v97[1].Count;
    if ( Count != v22 )
    {
      WdLogSingleEntry2(2LL, v22, Count);
      WdLogGlobalForLineNumber = 610;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Mismatch between paging queue device and allocation device. Paging Queue Device: 0x%I64x, Allocation Device: 0x%I64x",
        v22,
        v97[1].Count,
        0LL,
        0LL,
        0LL);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v97);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v114);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v104);
      if ( P != v117 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v118 = 0;
      PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v131);
      DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v98);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
      if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        goto LABEL_121;
      return 3221225485LL;
    }
    if ( !v31 )
    {
      v59 = v97[3].Count;
      if ( !v59 )
      {
        WdLogSingleEntry1(3LL, v97);
        WdLogGlobalForLineNumber = 621;
        v57 = v97;
      }
      v60 = v108;
      *v108 = v59;
      v108 = v60 + 1;
    }
    v61 = v109;
    if ( *v109 )
    {
      ExReleaseRundownProtection(*v109 + 11);
      v57 = v97;
    }
    *v61 = v57;
    v97 = 0LL;
    v109 = v61 + 1;
    ++AllocationList;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 340) )
    {
      v107 = 0LL;
      if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v107) >= 0 )
      {
        DxgThread = v107;
        if ( v107 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v107 = DxgThread) != 0LL) )
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
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid hAllocation specified: 0x%I64x, returning 0x%I64x",
    (__int64)v97,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v97);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v114);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v104);
  if ( P != v117 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v118 = 0;
  PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(&v131);
LABEL_97:
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v98);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94);
  v65 = v96 == 0;
LABEL_98:
  if ( !v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
LABEL_121:
    McTemplateK0q_EtwWriteTransfer(v63, (__int64)&EventProfilerExit, v64, v94);
  return 3221225485LL;
}
