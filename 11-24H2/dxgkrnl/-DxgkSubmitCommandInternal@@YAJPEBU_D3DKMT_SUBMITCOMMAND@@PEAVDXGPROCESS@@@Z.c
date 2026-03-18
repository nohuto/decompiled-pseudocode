/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1402A4B90
 * Callers:
 *     DxgkSubmitCommand @ 0x140335950 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403E3320 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14000E170 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x14000E5EC (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140012E50 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x14003893C (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x14018A424 (-AllocateElements@-$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAUVIDMM_MULTI_ALLOC@@I.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A1E90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x1402A6890 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1402A74E8 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x140371DAC (--1-$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1403768FC (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x140389364 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x14040424C (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(const struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2, __int64 a3)
{
  const struct _D3DKMT_SUBMITCOMMAND *v4; // rbx
  char CurrentThreadPreviousMode; // r15
  _D3DKMT_SUBMITCOMMAND *v6; // rdi
  D3DKMT_SUBMITCOMMANDFLAGS Flags; // ecx
  struct DXGCONTEXT *v8; // rbx
  int v9; // eax
  __int64 BroadcastContextCount; // r14
  __int64 v11; // rcx
  PVOID Pool2; // rcx
  unsigned int v13; // r8d
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  struct DXGCONTEXT *v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // r14d
  struct _KEVENT *v20; // r12
  int v21; // eax
  unsigned int v22; // r12d
  __int64 v23; // r9
  __int64 v24; // r14
  DXGADAPTER *v25; // rbx
  __int64 v26; // r9
  UINT v27; // r12d
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGCONTEXT *v30; // rbx
  struct VIDMM_MULTI_ALLOC **v31; // r14
  int v32; // esi
  __int64 v33; // r8
  unsigned __int64 PresentHistoryToken; // rdx
  D3DKMT_SUBMITCOMMANDFLAGS v35; // ecx
  char *v36; // rcx
  __int64 v37; // rcx
  DXGCONTEXT **v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // r8
  bool v42; // zf
  struct DXGCONTEXT *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // r8
  bool v47; // zf
  DXGADAPTER *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int v51; // ebx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct _KEVENT *v54; // rcx
  unsigned int i; // ebx
  __int64 v56; // r13
  __int64 Elements; // rax
  unsigned int *v58; // rdx
  unsigned int v59; // r8d
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  struct DXGCONTEXT *v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r8
  unsigned int v75; // eax
  __int64 v76; // r14
  int v77; // ecx
  __int64 v78; // r14
  int v79; // ecx
  signed __int64 v80; // rax
  signed __int64 v81; // rtt
  const wchar_t *v82; // r9
  struct DXGCONTEXT *v83; // rbx
  unsigned int v84; // r9d
  unsigned int *v85; // rdi
  int v86; // [rsp+50h] [rbp-498h] BYREF
  __int64 v87; // [rsp+58h] [rbp-490h]
  char v88; // [rsp+60h] [rbp-488h]
  unsigned __int8 v89; // [rsp+68h] [rbp-480h]
  PVOID P; // [rsp+70h] [rbp-478h]
  _BYTE v91[32]; // [rsp+78h] [rbp-470h] BYREF
  unsigned int v92; // [rsp+98h] [rbp-450h]
  unsigned int v93; // [rsp+A0h] [rbp-448h] BYREF
  DXGCONTEXT *v94; // [rsp+A8h] [rbp-440h] BYREF
  char v95; // [rsp+B0h] [rbp-438h]
  struct DXGCONTEXT *v96; // [rsp+B8h] [rbp-430h] BYREF
  __int64 v97; // [rsp+C0h] [rbp-428h] BYREF
  int v98; // [rsp+C8h] [rbp-420h]
  DXGCONTEXT **v99; // [rsp+D0h] [rbp-418h] BYREF
  unsigned int v100; // [rsp+D8h] [rbp-410h]
  __int64 *v101; // [rsp+E0h] [rbp-408h]
  unsigned __int64 v102; // [rsp+E8h] [rbp-400h] BYREF
  DXGADAPTER *v103; // [rsp+F0h] [rbp-3F8h]
  char v104; // [rsp+F8h] [rbp-3F0h]
  UINT v105; // [rsp+100h] [rbp-3E8h]
  struct DXGPROCESS *v106; // [rsp+108h] [rbp-3E0h]
  char v107[8]; // [rsp+110h] [rbp-3D8h] BYREF
  __int64 v108; // [rsp+118h] [rbp-3D0h]
  _QWORD v109[6]; // [rsp+120h] [rbp-3C8h] BYREF
  char v110; // [rsp+150h] [rbp-398h]
  _BYTE v111[24]; // [rsp+158h] [rbp-390h] BYREF
  char v112[8]; // [rsp+170h] [rbp-378h] BYREF
  _BYTE v113[16]; // [rsp+178h] [rbp-370h] BYREF
  DXGADAPTER *v114; // [rsp+188h] [rbp-360h]
  char v115; // [rsp+190h] [rbp-358h]
  __int64 v116; // [rsp+198h] [rbp-350h]
  _BYTE v117[16]; // [rsp+1B8h] [rbp-330h] BYREF
  DXGADAPTER *v118; // [rsp+1C8h] [rbp-320h]
  char v119; // [rsp+1D0h] [rbp-318h]
  __int64 v120; // [rsp+1D8h] [rbp-310h]
  __int64 v121; // [rsp+1F8h] [rbp-2F0h]
  char v122; // [rsp+200h] [rbp-2E8h]
  DXGALLOCATIONREFERENCE *v123; // [rsp+210h] [rbp-2D8h] BYREF
  char v124; // [rsp+218h] [rbp-2D0h] BYREF
  unsigned int v125; // [rsp+298h] [rbp-250h]
  void *v126; // [rsp+2A0h] [rbp-248h] BYREF
  _BYTE v127[128]; // [rsp+2A8h] [rbp-240h] BYREF
  int v128; // [rsp+328h] [rbp-1C0h]
  _D3DKMT_SUBMITCOMMAND v129; // [rsp+330h] [rbp-1B8h] BYREF

  v4 = a1;
  v106 = a2;
  v86 = -1;
  v87 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v88 = 1;
    v86 = 2102;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2102);
  }
  else
  {
    v88 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v86, 2102);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v89 = CurrentThreadPreviousMode == 1;
  memset(&v129, 0, sizeof(v129));
  v6 = &v129;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v129, v4, 0x180uLL);
  }
  else
  {
    v6 = (_D3DKMT_SUBMITCOMMAND *)v4;
  }
  Flags = v6->Flags;
  if ( (*(_BYTE *)&Flags & 4) != 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1657;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NoKmdAccess can be used only with testsigning",
      1657LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_82;
  }
  if ( (*((_DWORD *)a2 + 102) & 0x100) != 0 && (*(_BYTE *)&Flags & 2) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1665;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"PresentRedirected is invalid from virtual machine",
      1665LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_82;
  }
  v96 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)&v94,
    v6->BroadcastContext[0],
    (struct _KTHREAD **)a2,
    &v96,
    0,
    1);
  v8 = v96;
  if ( !v96 )
  {
    WdLogSingleEntry3(2LL, a2, v6->BroadcastContext[0], -1073741811LL);
    WdLogGlobalForLineNumber = 1675;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)a2,
      v6->BroadcastContext[0],
      -1073741811LL,
      0LL,
      0LL);
    if ( v94 && !v95 )
      DXGCONTEXT::ReleaseReference(v94);
    goto LABEL_82;
  }
  v9 = *((_DWORD *)v96 + 98);
  if ( (v9 & 0x10) != 0 )
  {
    WdLogSingleEntry1(2LL, v96);
    WdLogGlobalForLineNumber = 1682;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGCONTEXT 0x%p is hardware scheduled and should not be passed to SubmitCommandCb.",
      (__int64)v8,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_78:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
LABEL_82:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
    v47 = v88 == 0;
    goto LABEL_83;
  }
  if ( (v9 & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1689;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
    goto LABEL_82;
  }
  BroadcastContextCount = v6->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    WdLogSingleEntry4(2LL, v96, v6->BroadcastContextCount, 64LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1702;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x fails as specified BroadcastContextCount 0x%I64x exceeds limit 0x%I64x or is zero. returning 0x%I64x",
      (__int64)v8,
      v6->BroadcastContextCount,
      64LL,
      -1073741811LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
    if ( !v88 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_99:
    McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit, v46, v86);
    return 3221225485LL;
  }
  if ( v6->NumPrimaries > 0x10 )
  {
    WdLogSingleEntry4(2LL, v96, v6->NumPrimaries, 16LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1710;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x fails as specified NumWrittenPrimaries 0x%I64x exceeds limit 0x%I64x returning 0x%I64x",
      (__int64)v8,
      v6->NumPrimaries,
      16LL,
      -1073741811LL,
      0LL);
    goto LABEL_78;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v96 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v11 + 209) )
  {
    v51 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v11 + 4664), a2, v6);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
    if ( v88 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v52, (__int64)&EventProfilerExit, v53, v86);
    return v51;
  }
  Pool2 = 0LL;
  P = 0LL;
  v92 = 0;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    P = v91;
    memset(v91, 0, 8 * BroadcastContextCount);
    Pool2 = P;
LABEL_17:
    v92 = BroadcastContextCount;
    v13 = BroadcastContextCount;
    goto LABEL_18;
  }
  v13 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)BroadcastContextCount >= 8 )
  {
    Pool2 = (PVOID)ExAllocatePool2(256LL, 8 * BroadcastContextCount, 1265072196LL);
    P = Pool2;
    goto LABEL_17;
  }
LABEL_18:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1726;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Out of memory - failed to allocate the broadcast context array",
      1726LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v91 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v92 = 0;
LABEL_187:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
    if ( !v88 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225495LL;
    goto LABEL_229;
  }
  v99 = (DXGCONTEXT **)Pool2;
  v100 = v13;
  _m_prefetchw((char *)v8 + 32);
  v14 = *((_QWORD *)v8 + 4);
  do
  {
    if ( !v14 )
    {
      v44 = v96;
      WdLogSingleEntry1(2LL, v96);
      WdLogGlobalForLineNumber = 1739;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DXGCONTEXT 0x%p failed to acquire reference.",
        (__int64)v44,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_76:
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v99);
      if ( P != v91 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v92 = 0;
      goto LABEL_78;
    }
    v15 = v14;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 4, v14 + 1, v14);
  }
  while ( v15 != v14 );
  v16 = v96;
  *(_QWORD *)P = v96;
  v17 = *((_QWORD *)v16 + 2);
  v97 = v17;
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
  if ( *(int *)(v18 + 2736) >= 0x2000 || *(_BYTE *)(v18 + 3036) )
  {
    v19 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v98 = v19;
  }
  else
  {
    v19 = 0;
    v98 = 0;
  }
  v20 = *(struct _KEVENT **)(v17 + 16);
  if ( *(_DWORD *)(v17 + 464) == 2 )
  {
    if ( KeReadStateEvent(v20 + 5) )
      goto LABEL_26;
    v54 = v20 + 5;
    goto LABEL_104;
  }
  if ( !KeReadStateEvent(v20 + 4) )
  {
    v54 = v20 + 4;
LABEL_104:
    KeWaitForSingleObject(v54, Executive, 0, 0, 0LL);
  }
LABEL_26:
  KeEnterCriticalRegion();
  if ( v19 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v17 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 160));
      v22 = 1;
      v21 = 1;
      v16 = v96;
    }
    else
    {
      KeLeaveCriticalRegion();
      v21 = 0;
      v22 = 1;
    }
    if ( !v21 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v17 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v70, (__int64)&EventBlockThread, v71, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
    }
    v22 = 1;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v111, a2);
LABEL_36:
  if ( v22 < v6->BroadcastContextCount )
  {
    v74 = v22;
    v101 = (__int64 *)v22;
    v75 = (v6->BroadcastContext[v22] >> 6) & 0xFFFFFF;
    if ( v75 < *((_DWORD *)a2 + 74) )
    {
      v76 = *((_QWORD *)a2 + 35) + 16LL * v75;
      if ( ((v6->BroadcastContext[v22] >> 25) & 0x60) == (*(_BYTE *)(v76 + 8) & 0x60)
        && (*(_DWORD *)(v76 + 8) & 0x2000) == 0 )
      {
        v77 = *(_DWORD *)(v76 + 8) & 0x1F;
        if ( v77 )
        {
          if ( v77 == 7 )
          {
            v78 = *(_QWORD *)v76;
LABEL_197:
            if ( !v78 || (v79 = *(_DWORD *)(v78 + 392), (v79 & 8) != 0) || *(_QWORD *)(v78 + 16) != *((_QWORD *)v16 + 2) )
            {
              v83 = v96;
              WdLogSingleEntry4(2LL, v96, v78, v74, -1073741811LL);
              WdLogGlobalForLineNumber = 1777;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
                (__int64)v83,
                v78,
                (__int64)v101,
                -1073741811LL,
                0LL);
              DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v111);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
              ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v99);
              if ( P != v91 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v92 = 0;
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
              v47 = v88 == 0;
LABEL_83:
              if ( v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
                return 3221225485LL;
              goto LABEL_99;
            }
            if ( (v79 & 0x10) != 0 )
            {
              WdLogSingleEntry1(2LL, v78);
              WdLogGlobalForLineNumber = 1785;
              v82 = L"DXGCONTEXT 0x%p is hardware scheduled and should not be passed to SubmitCommandCb.";
            }
            else
            {
              _m_prefetchw((const void *)(v78 + 32));
              v80 = *(_QWORD *)(v78 + 32);
              while ( v80 )
              {
                v81 = v80;
                v80 = _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 32), v80 + 1, v80);
                if ( v81 == v80 )
                {
                  *((_QWORD *)P + v74) = v78;
                  ++v22;
                  goto LABEL_36;
                }
              }
              WdLogSingleEntry1(2LL, v78);
              WdLogGlobalForLineNumber = 1792;
              v82 = L"DXGCONTEXT 0x%p failed to acquire reference.";
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v82, v78, 0LL, 0LL, 0LL, 0LL);
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v111);
            goto LABEL_210;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v74 = v22;
        }
      }
    }
    v78 = 0LL;
    goto LABEL_197;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v111);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v109,
    P,
    v92,
    v23,
    1);
  if ( v110 )
  {
    if ( !v109[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1809;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v99);
      if ( P != v91 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v92 = 0;
      goto LABEL_187;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1814;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
LABEL_210:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v99);
    if ( P != v91 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v92 = 0;
    goto LABEL_78;
  }
  v24 = *((_QWORD *)v96 + 2);
  v108 = v24;
  v103 = *(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v103 + 3);
  v102 = -1LL;
  v25 = v103;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v25 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v25 + 38);
  v104 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v112, v24, 0, v26, 0);
  if ( !v122 )
  {
    v27 = 0;
    goto LABEL_40;
  }
  v27 = 0;
  if ( v119 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v117, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7628;
  }
  v48 = v118;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v118 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v118 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v49, (__int64)&EventBlockThread, v50, 72);
      KeWaitForSingleObject((char *)v118 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v118, 0LL);
    v48 = v118;
  }
  v120 = 0LL;
  v119 = 1;
  if ( *((_DWORD *)v48 + 50) == 1 )
  {
LABEL_40:
    if ( v115 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v113, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v114 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v114 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventBlockThread, v29, 72);
        KeWaitForSingleObject((char *)v114 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v114, 0LL);
    }
    v116 = 0LL;
    v115 = 1;
    if ( *(_DWORD *)(v121 + 608) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v113);
      if ( v122 )
        COREACCESS::Release((COREACCESS *)v117);
      goto LABEL_164;
    }
    v30 = v96;
    if ( *((_BYTE *)v96 + 430) )
    {
      v123 = 0LL;
      v125 = 0;
      v126 = 0LL;
      v128 = 0;
      v31 = 0LL;
      if ( !v6->NumHistoryBuffers )
      {
LABEL_48:
        if ( v6->CommandLength )
        {
          v32 = DXGCONTEXT::SubmitCommand(
                  v30,
                  v6,
                  (struct COREDEVICEACCESS *)v112,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v102,
                  (struct DXGCONTEXT **)P,
                  v31,
                  v6->NumHistoryBuffers,
                  v89);
          if ( v32 < 0 )
          {
LABEL_53:
            if ( v126 != v127 )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v126);
            if ( v123 == (DXGALLOCATIONREFERENCE *)&v124 )
            {
              for ( i = 0; i < v125; ++i )
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)((char *)v123 + 8 * i));
            }
            else if ( v123 )
            {
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v123);
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
            if ( v104 )
            {
              v104 = 0;
              v36 = (char *)v103 + 136;
              _InterlockedDecrement((volatile signed __int32 *)v103 + 38);
              ExReleasePushLockSharedEx(v36, 0LL);
              KeLeaveCriticalRegion();
              DXGADAPTER::ReleaseReference(v103);
            }
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
            if ( v98 )
            {
              v37 = v97 + 144;
              _InterlockedDecrement((volatile signed __int32 *)(v97 + 160));
              ExReleasePushLockSharedEx(v37, 0LL);
            }
            else
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v97 + 136));
            }
            KeLeaveCriticalRegion();
            v38 = v99;
            if ( v99 && v100 )
            {
              v39 = v100;
              do
              {
                if ( *v38 )
                  DXGCONTEXT::ReleaseReference(*v38);
                ++v38;
                --v39;
              }
              while ( v39 );
            }
            if ( P != v91 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v92 = 0;
            if ( v94 && !v95 )
              DXGCONTEXT::ReleaseReference(v94);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
            v42 = v88 == 0;
LABEL_73:
            if ( !v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v86);
            return (unsigned int)v32;
          }
        }
        else
        {
          v32 = 0;
        }
        v33 = *(_QWORD *)(*((_QWORD *)v30 + 2) + 1960LL);
        PresentHistoryToken = 0LL;
        v35 = v6->Flags;
        if ( (*(_BYTE *)&v35 & 2) != 0 )
        {
          PresentHistoryToken = v6->PresentHistoryToken;
        }
        else if ( v33 && *(_QWORD *)v33 && *(_DWORD *)(v33 + 12) != *((_DWORD *)v30 + 6) )
        {
          PresentHistoryToken = *(_QWORD *)v33;
        }
        if ( PresentHistoryToken )
        {
          v84 = v6->BroadcastContextCount;
          if ( v84 <= 1 )
            v85 = 0LL;
          else
            v85 = &v6->BroadcastContext[1];
          v32 = DXGCONTEXT::HandleVistaBltStub(
                  v30,
                  PresentHistoryToken,
                  (*(unsigned int *)&v35 >> 1) & 1,
                  (struct COREDEVICEACCESS *)v112,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v102,
                  v84 - 1,
                  v85,
                  (struct DXGCONTEXT **)P);
        }
        goto LABEL_53;
      }
      v56 = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(&v123);
      Elements = PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::AllocateElements((__int64 *)&v126, v6->NumHistoryBuffers);
      v31 = (struct VIDMM_MULTI_ALLOC **)Elements;
      if ( v56 && Elements )
      {
        while ( 1 )
        {
          v105 = v27;
          if ( v27 >= v6->NumHistoryBuffers )
            break;
          v93 = 0;
          v58 = &v6->HistoryBufferArray[v27];
          if ( CurrentThreadPreviousMode == 1 )
          {
            if ( (unsigned __int64)v58 >= MmUserProbeAddress )
              v58 = (unsigned int *)MmUserProbeAddress;
            RtlCopyVolatileMemory(&v93, v58, 4uLL);
            v59 = v93;
          }
          else
          {
            v59 = *v58;
            v93 = *v58;
          }
          v101 = (__int64 *)(v56 + 8LL * v27);
          AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v107, v59);
          DXGALLOCATIONREFERENCE::MoveAssign(v101, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v107);
          v61 = *v101;
          if ( !*v101 )
          {
            WdLogSingleEntry1(2LL, v93);
            WdLogGlobalForLineNumber = 1896;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Invalid history buffer handle provided to SubmitCommand. D3DKMT_HANDLE=0x%8x",
              v93,
              0LL,
              0LL,
              0LL,
              0LL);
            PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<VIDMM_MULTI_ALLOC *,16>(&v126);
            PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v123);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v102);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
            ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v99);
            if ( P != v91 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v92 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
            if ( v88 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v62, (__int64)&EventProfilerExit, v63, v86);
            return 3221225485LL;
          }
          v64 = 8LL * v27;
          if ( *(_QWORD *)(v61 + 8) != *((_QWORD *)v30 + 2) )
          {
            _mm_lfence();
            v65 = v96;
            WdLogSingleEntry3(
              2LL,
              *(_QWORD *)(v64 + v56),
              *(_QWORD *)(*(_QWORD *)(v64 + v56) + 8LL),
              *((_QWORD *)v96 + 2));
            WdLogGlobalForLineNumber = 1904;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"History buffer 0x%p device 0x%p does not match context device 0x%p.",
              *v101,
              *(_QWORD *)(*v101 + 8),
              *((_QWORD *)v65 + 2),
              0LL,
              0LL);
            PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<VIDMM_MULTI_ALLOC *,16>(&v126);
            PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v123);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v102);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
            ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v99);
            if ( P != v91 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v92 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
            if ( v88 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v66, (__int64)&EventProfilerExit, v67, v86);
            return 3221225485LL;
          }
          v31[(unsigned __int64)v64 / 8] = *(struct VIDMM_MULTI_ALLOC **)(v61 + 24);
          ++v27;
        }
        v32 = (*(__int64 (__fastcall **)(struct VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v108 + 16)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 1016LL))(v31);
        if ( v32 >= 0 )
          goto LABEL_48;
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1941;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid history buffer passed to SubmitCommand.",
          1941LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v126 != v127 )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v126);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v123);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v102);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
        ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v99);
        if ( P != v91 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v92 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
        v42 = v88 == 0;
        goto LABEL_73;
      }
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1871;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to created paged pool array for history buffer array",
        1871LL,
        0LL,
        0LL,
        0LL,
        0LL);
      PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<VIDMM_MULTI_ALLOC *,16>(&v126);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v123);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v102);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v99);
      if ( P != v91 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v92 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
      if ( !v88 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        return 3221225495LL;
LABEL_229:
      McTemplateK0q_EtwWriteTransfer(v72, (__int64)&EventProfilerExit, v73, v86);
      return 3221225495LL;
    }
    WdLogSingleEntry3(2LL, a2, v6->BroadcastContext[0], -1073741811LL);
    WdLogGlobalForLineNumber = 1836;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x The context does not support virtual addressing. hContext 0x%I64x returning 0x%I64x",
      (__int64)a2,
      v6->BroadcastContext[0],
      -1073741811LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v102);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
    goto LABEL_76;
  }
  v119 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v118 + 23) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v118, 0LL);
  v120 = 0LL;
LABEL_164:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v102);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v109);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v97);
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v99);
  if ( P != v91 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v92 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v94);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86);
  if ( v88 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v68, (__int64)&EventProfilerExit, v69, v86);
  return 3221226166LL;
}
