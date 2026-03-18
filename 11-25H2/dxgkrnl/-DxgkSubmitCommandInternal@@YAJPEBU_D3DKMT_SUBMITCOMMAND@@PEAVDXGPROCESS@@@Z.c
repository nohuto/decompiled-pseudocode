/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140290740
 * Callers:
 *     DxgkSubmitCommand @ 0x140348340 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403E9940 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x140016050 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14001D750 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x14001DBCC (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x140038CAC (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x140188114 (-AllocateElements@-$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAUVIDMM_MULTI_ALLOC@@I.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x140292440 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1402930B8 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x140387334 (--1-$PagedPoolArray@PEAUVIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x14038A830 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403CDEF0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x14040B6D8 (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
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
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 Elements; // rax
  unsigned int *v60; // rdx
  unsigned int v61; // r8d
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  struct DXGCONTEXT *v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r8
  unsigned int v77; // eax
  __int64 v78; // r14
  int v79; // ecx
  __int64 v80; // r14
  int v81; // ecx
  signed __int64 v82; // rax
  signed __int64 v83; // rtt
  const wchar_t *v84; // r9
  struct DXGCONTEXT *v85; // rbx
  unsigned int v86; // r9d
  unsigned int *v87; // rdi
  int v88; // [rsp+50h] [rbp-498h] BYREF
  __int64 v89; // [rsp+58h] [rbp-490h]
  char v90; // [rsp+60h] [rbp-488h]
  char v91; // [rsp+68h] [rbp-480h]
  PVOID P; // [rsp+70h] [rbp-478h]
  _BYTE v93[32]; // [rsp+78h] [rbp-470h] BYREF
  unsigned int v94; // [rsp+98h] [rbp-450h]
  unsigned int v95; // [rsp+A0h] [rbp-448h] BYREF
  DXGCONTEXT *v96; // [rsp+A8h] [rbp-440h] BYREF
  char v97; // [rsp+B0h] [rbp-438h]
  struct DXGCONTEXT *v98; // [rsp+B8h] [rbp-430h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-428h] BYREF
  int v100; // [rsp+C8h] [rbp-420h]
  DXGCONTEXT **v101; // [rsp+D0h] [rbp-418h] BYREF
  unsigned int v102; // [rsp+D8h] [rbp-410h]
  __int64 *v103; // [rsp+E0h] [rbp-408h]
  unsigned __int64 v104; // [rsp+E8h] [rbp-400h] BYREF
  DXGADAPTER *v105; // [rsp+F0h] [rbp-3F8h]
  char v106; // [rsp+F8h] [rbp-3F0h]
  UINT v107; // [rsp+100h] [rbp-3E8h]
  struct DXGPROCESS *v108; // [rsp+108h] [rbp-3E0h]
  char v109[8]; // [rsp+110h] [rbp-3D8h] BYREF
  __int64 v110; // [rsp+118h] [rbp-3D0h]
  _QWORD v111[6]; // [rsp+120h] [rbp-3C8h] BYREF
  char v112; // [rsp+150h] [rbp-398h]
  _BYTE v113[24]; // [rsp+158h] [rbp-390h] BYREF
  char v114[8]; // [rsp+170h] [rbp-378h] BYREF
  _BYTE v115[16]; // [rsp+178h] [rbp-370h] BYREF
  DXGADAPTER *v116; // [rsp+188h] [rbp-360h]
  char v117; // [rsp+190h] [rbp-358h]
  __int64 v118; // [rsp+198h] [rbp-350h]
  _BYTE v119[16]; // [rsp+1B8h] [rbp-330h] BYREF
  DXGADAPTER *v120; // [rsp+1C8h] [rbp-320h]
  char v121; // [rsp+1D0h] [rbp-318h]
  __int64 v122; // [rsp+1D8h] [rbp-310h]
  __int64 v123; // [rsp+1F8h] [rbp-2F0h]
  char v124; // [rsp+200h] [rbp-2E8h]
  DXGALLOCATIONREFERENCE *v125; // [rsp+210h] [rbp-2D8h] BYREF
  char v126; // [rsp+218h] [rbp-2D0h] BYREF
  unsigned int v127; // [rsp+298h] [rbp-250h]
  void *v128; // [rsp+2A0h] [rbp-248h] BYREF
  _BYTE v129[128]; // [rsp+2A8h] [rbp-240h] BYREF
  int v130; // [rsp+328h] [rbp-1C0h]
  _D3DKMT_SUBMITCOMMAND v131; // [rsp+330h] [rbp-1B8h] BYREF

  v4 = a1;
  v108 = a2;
  v88 = -1;
  v89 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v90 = 1;
    v88 = 2102;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2102);
  }
  else
  {
    v90 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v88, 2102);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v91 = CurrentThreadPreviousMode == 1;
  memset(&v131, 0, sizeof(v131));
  v6 = &v131;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v131, v4, 0x180uLL);
  }
  else
  {
    v6 = (_D3DKMT_SUBMITCOMMAND *)v4;
  }
  Flags = v6->Flags;
  if ( (*(_BYTE *)&Flags & 4) != 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1648;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"NoKmdAccess can be used only with testsigning",
      1648LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_82;
  }
  if ( (*((_DWORD *)a2 + 102) & 0x100) != 0 && (*(_BYTE *)&Flags & 2) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1656;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"PresentRedirected is invalid from virtual machine",
      1656LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_82;
  }
  v98 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96, v6->BroadcastContext[0], a2, &v98, 0, 1);
  v8 = v98;
  if ( !v98 )
  {
    WdLogSingleEntry3(2LL, a2, v6->BroadcastContext[0], -1073741811LL);
    WdLogGlobalForLineNumber = 1666;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)a2,
      v6->BroadcastContext[0],
      -1073741811LL,
      0LL,
      0LL);
    if ( v96 && !v97 )
      DXGCONTEXT::ReleaseReference(v96);
    goto LABEL_82;
  }
  v9 = *((_DWORD *)v98 + 98);
  if ( (v9 & 0x10) != 0 )
  {
    WdLogSingleEntry1(2LL, v98);
    WdLogGlobalForLineNumber = 1673;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DXGCONTEXT 0x%p is hardware scheduled and should not be passed to SubmitCommandCb.",
      (__int64)v8,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_78:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
LABEL_82:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
    v47 = v90 == 0;
    goto LABEL_83;
  }
  if ( (v9 & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1680;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
    goto LABEL_82;
  }
  BroadcastContextCount = v6->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    WdLogSingleEntry4(2LL, v98, v6->BroadcastContextCount, 64LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1693;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x fails as specified BroadcastContextCount 0x%I64x exceeds limit 0x%I64x or is zero. returning 0x%I64x",
      (__int64)v8,
      v6->BroadcastContextCount,
      64LL,
      -1073741811LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
    if ( !v90 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_99:
    McTemplateK0q_EtwWriteTransfer(v45, (__int64)&EventProfilerExit, v46, v88);
    return 3221225485LL;
  }
  if ( v6->NumPrimaries > 0x10 )
  {
    WdLogSingleEntry4(2LL, v98, v6->NumPrimaries, 16LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1701;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x fails as specified NumWrittenPrimaries 0x%I64x exceeds limit 0x%I64x returning 0x%I64x",
      (__int64)v8,
      v6->NumPrimaries,
      16LL,
      -1073741811LL,
      0LL);
    goto LABEL_78;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v98 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v11 + 209) )
  {
    v51 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v11 + 4664), a2, v6);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
    if ( v90 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v52, (__int64)&EventProfilerExit, v53, v88);
    return v51;
  }
  Pool2 = 0LL;
  P = 0LL;
  v94 = 0;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    P = v93;
    memset(v93, 0, 8 * BroadcastContextCount);
    Pool2 = P;
LABEL_17:
    v94 = BroadcastContextCount;
    v13 = BroadcastContextCount;
    goto LABEL_18;
  }
  v13 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)BroadcastContextCount >= 8 )
  {
    Pool2 = (PVOID)ExAllocatePool2(256LL, 8 * BroadcastContextCount, 1265072196LL, (unsigned int)BroadcastContextCount);
    P = Pool2;
    goto LABEL_17;
  }
LABEL_18:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1717;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory - failed to allocate the broadcast context array",
      1717LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v93 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v94 = 0;
LABEL_187:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
    if ( !v90 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225495LL;
    goto LABEL_229;
  }
  v101 = (DXGCONTEXT **)Pool2;
  v102 = v13;
  _m_prefetchw((char *)v8 + 32);
  v14 = *((_QWORD *)v8 + 4);
  do
  {
    if ( !v14 )
    {
      v44 = v98;
      WdLogSingleEntry1(2LL, v98);
      WdLogGlobalForLineNumber = 1730;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DXGCONTEXT 0x%p failed to acquire reference.",
        (__int64)v44,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_76:
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v101);
      if ( P != v93 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v94 = 0;
      goto LABEL_78;
    }
    v15 = v14;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 4, v14 + 1, v14);
  }
  while ( v15 != v14 );
  v16 = v98;
  *(_QWORD *)P = v98;
  v17 = *((_QWORD *)v16 + 2);
  v99 = v17;
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL);
  if ( *(int *)(v18 + 2736) >= 0x2000 || *(_BYTE *)(v18 + 3036) )
  {
    v19 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 332);
    v100 = v19;
  }
  else
  {
    v19 = 0;
    v100 = 0;
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
      v16 = v98;
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
        McTemplateK0q_EtwWriteTransfer(v72, (__int64)&EventBlockThread, v73, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
    }
    v22 = 1;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v113, a2);
LABEL_36:
  if ( v22 < v6->BroadcastContextCount )
  {
    v76 = v22;
    v103 = (__int64 *)v22;
    v77 = (v6->BroadcastContext[v22] >> 6) & 0xFFFFFF;
    if ( v77 < *((_DWORD *)a2 + 74) )
    {
      v78 = *((_QWORD *)a2 + 35) + 16LL * v77;
      if ( ((v6->BroadcastContext[v22] >> 25) & 0x60) == (*(_BYTE *)(v78 + 8) & 0x60)
        && (*(_DWORD *)(v78 + 8) & 0x2000) == 0 )
      {
        v79 = *(_DWORD *)(v78 + 8) & 0x1F;
        if ( v79 )
        {
          if ( v79 == 7 )
          {
            v80 = *(_QWORD *)v78;
LABEL_197:
            if ( !v80 || (v81 = *(_DWORD *)(v80 + 392), (v81 & 8) != 0) || *(_QWORD *)(v80 + 16) != *((_QWORD *)v16 + 2) )
            {
              v85 = v98;
              WdLogSingleEntry4(2LL, v98, v80, v76, -1073741811LL);
              WdLogGlobalForLineNumber = 1768;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
                (__int64)v85,
                v80,
                (__int64)v103,
                -1073741811LL,
                0LL);
              DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v113);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
              ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v101);
              if ( P != v93 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v94 = 0;
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
              v47 = v90 == 0;
LABEL_83:
              if ( v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
                return 3221225485LL;
              goto LABEL_99;
            }
            if ( (v81 & 0x10) != 0 )
            {
              WdLogSingleEntry1(2LL, v80);
              WdLogGlobalForLineNumber = 1776;
              v84 = L"DXGCONTEXT 0x%p is hardware scheduled and should not be passed to SubmitCommandCb.";
            }
            else
            {
              _m_prefetchw((const void *)(v80 + 32));
              v82 = *(_QWORD *)(v80 + 32);
              while ( v82 )
              {
                v83 = v82;
                v82 = _InterlockedCompareExchange64((volatile signed __int64 *)(v80 + 32), v82 + 1, v82);
                if ( v83 == v82 )
                {
                  *((_QWORD *)P + v76) = v80;
                  ++v22;
                  goto LABEL_36;
                }
              }
              WdLogSingleEntry1(2LL, v80);
              WdLogGlobalForLineNumber = 1783;
              v84 = L"DXGCONTEXT 0x%p failed to acquire reference.";
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v84, v80, 0LL, 0LL, 0LL, 0LL);
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v113);
            goto LABEL_210;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v76 = v22;
        }
      }
    }
    v80 = 0LL;
    goto LABEL_197;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v113);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v111,
    P,
    v94,
    v23,
    1);
  if ( v112 )
  {
    if ( !v111[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1800;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v111);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v101);
      if ( P != v93 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v94 = 0;
      goto LABEL_187;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1805;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v111);
LABEL_210:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v101);
    if ( P != v93 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v94 = 0;
    goto LABEL_78;
  }
  v24 = *((_QWORD *)v98 + 2);
  v110 = v24;
  v105 = *(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v105 + 3);
  v104 = -1LL;
  v25 = v105;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v25 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v25 + 38);
  v106 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v114, v24, 0, v26, 0);
  if ( !v124 )
  {
    v27 = 0;
    goto LABEL_40;
  }
  v27 = 0;
  if ( v121 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v119, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  v48 = v120;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v120 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v120 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v49, (__int64)&EventBlockThread, v50, 72);
      KeWaitForSingleObject((char *)v120 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v120, 0LL);
    v48 = v120;
  }
  v122 = 0LL;
  v121 = 1;
  if ( *((_DWORD *)v48 + 50) == 1 )
  {
LABEL_40:
    if ( v117 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v115, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7603;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v116 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v116 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventBlockThread, v29, 72);
        KeWaitForSingleObject((char *)v116 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v116, 0LL);
    }
    v118 = 0LL;
    v117 = 1;
    if ( *(_DWORD *)(v123 + 608) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v115);
      if ( v124 )
        COREACCESS::Release((COREACCESS *)v119);
      goto LABEL_164;
    }
    v30 = v98;
    if ( *((_BYTE *)v98 + 430) )
    {
      v125 = 0LL;
      v127 = 0;
      v128 = 0LL;
      v130 = 0;
      v31 = 0LL;
      if ( !v6->NumHistoryBuffers )
      {
LABEL_48:
        if ( v6->CommandLength )
        {
          v32 = DXGCONTEXT::SubmitCommand(
                  v30,
                  v6,
                  (struct COREDEVICEACCESS *)v114,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v104,
                  (struct DXGCONTEXT **)P,
                  v31,
                  v6->NumHistoryBuffers,
                  v91);
          if ( v32 < 0 )
          {
LABEL_53:
            if ( v128 != v129 )
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v128);
            if ( v125 == (DXGALLOCATIONREFERENCE *)&v126 )
            {
              for ( i = 0; i < v127; ++i )
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)((char *)v125 + 8 * i));
            }
            else if ( v125 )
            {
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v125);
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
            if ( v106 )
            {
              v106 = 0;
              v36 = (char *)v105 + 136;
              _InterlockedDecrement((volatile signed __int32 *)v105 + 38);
              ExReleasePushLockSharedEx(v36, 0LL);
              KeLeaveCriticalRegion();
              DXGADAPTER::ReleaseReference(v105);
            }
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v111);
            if ( v100 )
            {
              v37 = v99 + 144;
              _InterlockedDecrement((volatile signed __int32 *)(v99 + 160));
              ExReleasePushLockSharedEx(v37, 0LL);
            }
            else
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v99 + 136));
            }
            KeLeaveCriticalRegion();
            v38 = v101;
            if ( v101 && v102 )
            {
              v39 = v102;
              do
              {
                if ( *v38 )
                  DXGCONTEXT::ReleaseReference(*v38);
                ++v38;
                --v39;
              }
              while ( v39 );
            }
            if ( P != v93 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v94 = 0;
            if ( v96 && !v97 )
              DXGCONTEXT::ReleaseReference(v96);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
            v42 = v90 == 0;
LABEL_73:
            if ( !v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v88);
            return (unsigned int)v32;
          }
        }
        else
        {
          v32 = 0;
        }
        v33 = *(_QWORD *)(*((_QWORD *)v30 + 2) + 1944LL);
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
          v86 = v6->BroadcastContextCount;
          if ( v86 <= 1 )
            v87 = 0LL;
          else
            v87 = &v6->BroadcastContext[1];
          v32 = DXGCONTEXT::HandleVistaBltStub(
                  v30,
                  PresentHistoryToken,
                  (*(unsigned int *)&v35 >> 1) & 1,
                  (struct COREDEVICEACCESS *)v114,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v104,
                  v86 - 1,
                  v87,
                  (struct DXGCONTEXT **)P);
        }
        goto LABEL_53;
      }
      v56 = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(&v125);
      Elements = PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::AllocateElements(
                   (__int64 *)&v128,
                   v6->NumHistoryBuffers,
                   v57,
                   v58);
      v31 = (struct VIDMM_MULTI_ALLOC **)Elements;
      if ( v56 && Elements )
      {
        while ( 1 )
        {
          v107 = v27;
          if ( v27 >= v6->NumHistoryBuffers )
            break;
          v95 = 0;
          v60 = &v6->HistoryBufferArray[v27];
          if ( CurrentThreadPreviousMode == 1 )
          {
            if ( (unsigned __int64)v60 >= MmUserProbeAddress )
              v60 = (unsigned int *)MmUserProbeAddress;
            RtlCopyVolatileMemory(&v95, v60, 4uLL);
            v61 = v95;
          }
          else
          {
            v61 = *v60;
            v95 = *v60;
          }
          v103 = (__int64 *)(v56 + 8LL * v27);
          AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v109, v61);
          DXGALLOCATIONREFERENCE::MoveAssign(v103, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v109);
          v63 = *v103;
          if ( !*v103 )
          {
            WdLogSingleEntry1(2LL, v95);
            WdLogGlobalForLineNumber = 1887;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Invalid history buffer handle provided to SubmitCommand. D3DKMT_HANDLE=0x%8x",
              v95,
              0LL,
              0LL,
              0LL,
              0LL);
            PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<VIDMM_MULTI_ALLOC *,16>(&v128);
            PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v125);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v111);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
            ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v101);
            if ( P != v93 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v94 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
            if ( v90 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v64, (__int64)&EventProfilerExit, v65, v88);
            return 3221225485LL;
          }
          v66 = 8LL * v27;
          if ( *(_QWORD *)(v63 + 8) != *((_QWORD *)v30 + 2) )
          {
            _mm_lfence();
            v67 = v98;
            WdLogSingleEntry3(
              2LL,
              *(_QWORD *)(v66 + v56),
              *(_QWORD *)(*(_QWORD *)(v66 + v56) + 8LL),
              *((_QWORD *)v98 + 2));
            WdLogGlobalForLineNumber = 1895;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"History buffer 0x%p device 0x%p does not match context device 0x%p.",
              *v103,
              *(_QWORD *)(*v103 + 8),
              *((_QWORD *)v67 + 2),
              0LL,
              0LL);
            PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<VIDMM_MULTI_ALLOC *,16>(&v128);
            PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v125);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v111);
            DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
            ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v101);
            if ( P != v93 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v94 = 0;
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
            if ( v90 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v68, (__int64)&EventProfilerExit, v69, v88);
            return 3221225485LL;
          }
          v31[(unsigned __int64)v66 / 8] = *(struct VIDMM_MULTI_ALLOC **)(v63 + 24);
          ++v27;
        }
        v32 = (*(__int64 (__fastcall **)(struct VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v110 + 16)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 1016LL))(v31);
        if ( v32 >= 0 )
          goto LABEL_48;
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1932;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid history buffer passed to SubmitCommand.",
          1932LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( v128 != v129 )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v128);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v125);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v111);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
        ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v101);
        if ( P != v93 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v94 = 0;
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
        v42 = v90 == 0;
        goto LABEL_73;
      }
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1862;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to created paged pool array for history buffer array",
        1862LL,
        0LL,
        0LL,
        0LL,
        0LL);
      PagedPoolArray<VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<VIDMM_MULTI_ALLOC *,16>(&v128);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v125);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v111);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v101);
      if ( P != v93 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v94 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
      if ( !v90 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        return 3221225495LL;
LABEL_229:
      McTemplateK0q_EtwWriteTransfer(v74, (__int64)&EventProfilerExit, v75, v88);
      return 3221225495LL;
    }
    WdLogSingleEntry3(2LL, a2, v6->BroadcastContext[0], -1073741811LL);
    WdLogGlobalForLineNumber = 1827;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x The context does not support virtual addressing. hContext 0x%I64x returning 0x%I64x",
      (__int64)a2,
      v6->BroadcastContext[0],
      -1073741811LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v111);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
    goto LABEL_76;
  }
  v121 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v120 + 23) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v120, 0LL);
  v122 = 0LL;
LABEL_164:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v114);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v111);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v101);
  if ( P != v93 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v94 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v96);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v88);
  if ( v90 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v70, (__int64)&EventProfilerExit, v71, v88);
  return 3221226166LL;
}
