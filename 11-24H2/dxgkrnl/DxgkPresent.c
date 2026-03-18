/*
 * XREFs of DxgkPresent @ 0x1402EAC90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z @ 0x140009EA8 (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14000E170 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1400106AC (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x140011470 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400338A0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x140033AFC (--1CWin32kLocks@@QEAA@XZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035AC0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x140038E40 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x14018A6B4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A1E90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1402A4850 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402C7874 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1402EA4B0 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1402EA590 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1402F3D24 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140301AA8 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     _DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE @ 0x14037605C (_DXGADAPTER--SubmitPresentHistoryTokenFromVm_--_45_--ENSURE_DELETE--_ENSURE_DELETE.c)
 */

__int64 __fastcall DxgkPresent(char *Src)
{
  char CurrentThreadPreviousMode; // r15
  struct DXGGLOBAL *Global; // rax
  unsigned int *v4; // rax
  unsigned int *v5; // rsi
  __int64 v6; // r8
  unsigned int *v7; // rax
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *v12; // rdi
  struct DXGPROCESS *v13; // rbx
  const void *v14; // rdx
  __int64 v15; // rcx
  struct DXGCONTEXT *v16; // rdi
  __int64 v17; // r13
  struct _KEVENT *v18; // rdx
  int v19; // r15d
  struct _KEVENT *v20; // rbx
  unsigned int v21; // ebx
  __int64 v22; // rbx
  _QWORD *Pool2; // rcx
  _QWORD *v24; // r12
  unsigned int i; // ebx
  __int64 v26; // r9
  __int64 v27; // r12
  unsigned int v28; // eax
  int v29; // ebx
  unsigned int v30; // ecx
  struct DXGADAPTER *v31; // r8
  DXGADAPTER *v32; // rbx
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  DXGDEVICE **v36; // rdi
  __int64 v37; // r15
  PVOID v38; // rbx
  __int64 v39; // rax
  int v40; // ecx
  unsigned int v41; // eax
  __int64 v42; // rax
  int v43; // ecx
  int v44; // r8d
  bool v45; // al
  int v46; // eax
  __int64 v47; // rcx
  char *v48; // rcx
  void *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct DXGGLOBAL *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  struct DXGPROCESS *v57; // rdi
  struct DXGPROCESS *v58; // rax
  __int64 v59; // rdi
  PLIST_ENTRY j; // rbx
  DXGPRESENT *v62; // rax
  DXGADAPTER *v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned int v66; // ebx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  int *v71; // r9
  struct DXGGLOBAL *v72; // rax
  __int64 v73; // rbx
  int v74; // edi
  ULONG TimeIncrement; // eax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  struct DXGGLOBAL *v80; // rax
  char *v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  struct DXGGLOBAL *v85; // rax
  PVOID v86; // rcx
  __int64 v87; // rcx
  struct DXGCONTEXT *v88; // rdx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *v91; // rax
  struct DXGTHREAD *v92; // rax
  struct _ETHREAD *v93; // rbx
  KSPIN_LOCK *v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r8
  unsigned int v97; // r8d
  __int64 v98; // rax
  __int64 v99; // r9
  int v100; // edx
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rbx
  __int64 v106; // rax
  DXGPRESENT *v107; // rax
  struct DXGPROCESS *v108; // rbx
  struct DXGCONTEXT *v109; // r15
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  int *v113; // r9
  struct DXGGLOBAL *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  struct DXGGLOBAL *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  struct DXGGLOBAL *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  int *v132; // r9
  int v133; // [rsp+60h] [rbp-298h] BYREF
  __int64 v134; // [rsp+68h] [rbp-290h]
  int *v135; // [rsp+70h] [rbp-288h]
  int *v136; // [rsp+78h] [rbp-280h]
  char v137; // [rsp+80h] [rbp-278h]
  int AllocationInfo; // [rsp+88h] [rbp-270h] BYREF
  PVOID P; // [rsp+90h] [rbp-268h]
  _BYTE v140[32]; // [rsp+98h] [rbp-260h] BYREF
  unsigned int v141; // [rsp+B8h] [rbp-240h]
  DXGCONTEXT *v142; // [rsp+C0h] [rbp-238h] BYREF
  char v143; // [rsp+C8h] [rbp-230h]
  __int64 v144; // [rsp+D0h] [rbp-228h] BYREF
  int v145; // [rsp+D8h] [rbp-220h]
  struct DXGPROCESS *v146; // [rsp+E0h] [rbp-218h]
  unsigned __int64 v147; // [rsp+E8h] [rbp-210h] BYREF
  DXGADAPTER *v148; // [rsp+F0h] [rbp-208h]
  char v149; // [rsp+F8h] [rbp-200h]
  struct DXGCONTEXT *v150[2]; // [rsp+100h] [rbp-1F8h] BYREF
  int v151; // [rsp+110h] [rbp-1E8h]
  struct DXGCONTEXT *v152; // [rsp+118h] [rbp-1E0h] BYREF
  unsigned int *v153; // [rsp+120h] [rbp-1D8h] BYREF
  _QWORD v154[6]; // [rsp+128h] [rbp-1D0h] BYREF
  char v155; // [rsp+158h] [rbp-1A0h]
  char *v156; // [rsp+160h] [rbp-198h]
  unsigned int *v157; // [rsp+168h] [rbp-190h]
  __int64 v158; // [rsp+170h] [rbp-188h]
  __int128 v159; // [rsp+180h] [rbp-178h] BYREF
  _QWORD v160[2]; // [rsp+190h] [rbp-168h] BYREF
  _BYTE v161[16]; // [rsp+1A0h] [rbp-158h] BYREF
  _BYTE v162[24]; // [rsp+1B0h] [rbp-148h] BYREF
  __int64 v163; // [rsp+1C8h] [rbp-130h]
  _BYTE v164[80]; // [rsp+1D0h] [rbp-128h] BYREF
  char v165[8]; // [rsp+220h] [rbp-D8h] BYREF
  _BYTE v166[16]; // [rsp+228h] [rbp-D0h] BYREF
  DXGADAPTER *v167; // [rsp+238h] [rbp-C0h]
  char v168; // [rsp+240h] [rbp-B8h]
  __int64 v169; // [rsp+248h] [rbp-B0h]
  _BYTE v170[16]; // [rsp+268h] [rbp-90h] BYREF
  DXGADAPTER *v171; // [rsp+278h] [rbp-80h]
  char v172; // [rsp+280h] [rbp-78h]
  __int64 v173; // [rsp+288h] [rbp-70h]
  __int64 v174; // [rsp+2A8h] [rbp-50h]
  char v175; // [rsp+2B0h] [rbp-48h]

  v156 = Src;
  AllocationInfo = -1073741811;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Global = DXGGLOBAL::GetGlobal();
  v4 = (unsigned int *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
  v5 = v4;
  v157 = v4;
  if ( !v4 )
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1276;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for present parameters. Returing 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  memset(v4, 0, 0x5F8uLL);
  v153 = v5;
  if ( bTracingEnabled )
    v7 = v5;
  else
    v7 = 0LL;
  v134 = 0LL;
  v133 = 2020;
  v136 = &AllocationInfo;
  v137 = 0;
  v135 = (int *)v7;
  if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)&AllocationInfo, (__int64)&EventProfilerEnter, v6, 2020);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v133, 2020);
  CurrentProcess = PsGetCurrentProcess(v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_7;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    v146 = v13;
    if ( !v13 )
      goto LABEL_7;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v91 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v13 = DXGGLOBAL::SearchDxgThreadList(v91, CurrentThread);
    v146 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
      v13 = v12;
      v146 = v12;
    }
  }
  v150[1] = v13;
  if ( !v13 )
  {
    v123 = PsGetCurrentProcess(v11);
    WdLogSingleEntry2(2LL, -1073741811LL, v123);
    WdLogGlobalForLineNumber = 1305;
    v125 = PsGetCurrentProcess(v124);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v125,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    if ( v137 )
    {
      if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v126,
          v70,
          *v135,
          v135[14],
          *((_QWORD *)v135 + 10),
          *((_QWORD *)v135 + 11),
          v135[274],
          *v136);
    }
    else if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v126,
        v70,
        *v135,
        *((_QWORD *)v135 + 1),
        v135[4],
        v135[21],
        v135[22],
        *v136,
        v135[5],
        v135[6]);
    }
    if ( (qword_14015E4B0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_108;
    goto LABEL_158;
  }
  v14 = Src;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      v14 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v5, v14, 0x5D8uLL);
  }
  else
  {
    memmove(v5, Src, 0x5D8uLL);
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)v13 + 11) + 416LL))() && (v5[22] & 0x8000) == 0 )
  {
    AllocationInfo = -1071775738;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    if ( v137 )
    {
      if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v77,
          v79,
          *v135,
          v135[14],
          *((_QWORD *)v135 + 10),
          *((_QWORD *)v135 + 11),
          v135[274],
          *v136);
    }
    else if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v77,
        v79,
        *v135,
        *((_QWORD *)v135 + 1),
        v135[4],
        v135[21],
        v135[22],
        *v136,
        v135[5],
        v135[6]);
    }
    if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v78, (__int64)&EventProfilerExit, v79, v133);
    v80 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v80 + 1136), v5);
    return 3223191558LL;
  }
  if ( (v5[22] & 0x10000000) != 0 )
  {
    v152 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161, *v5, (struct _KTHREAD **)v13, &v152, 0, 1);
    v88 = v152;
    if ( v152 )
    {
      *v5 = v5[362];
      AllocationInfo = PreIndirectPresentReadAllocationInfo(
                         v13,
                         *((struct DXGDEVICE **)v88 + 2),
                         v5[5],
                         (struct INDIRECT_RESOURCE_INFO *)(v5 + 379));
      if ( AllocationInfo < 0 )
      {
        WdLogSingleEntry1(3LL, v5[5]);
        WdLogGlobalForLineNumber = 1362;
      }
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
      goto LABEL_16;
    }
    v105 = v5[362];
    v106 = PsGetCurrentProcess(v87);
    WdLogSingleEntry3(3LL, -1073741811LL, v106, v105);
    WdLogGlobalForLineNumber = 1351;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v161);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    v71 = v135;
    if ( v137 )
      goto LABEL_142;
    if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      goto LABEL_213;
LABEL_107:
    if ( (qword_14015E4B0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
    {
LABEL_108:
      v72 = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v72 + 1136), v5);
      return 3221225485LL;
    }
LABEL_158:
    McTemplateK0q_EtwWriteTransfer(v69, (__int64)&EventProfilerExit, v70, v133);
    goto LABEL_108;
  }
LABEL_16:
  v150[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142, *v5, (struct _KTHREAD **)v13, v150, 0, 1);
  v16 = v150[0];
  if ( !v150[0] )
  {
    v66 = *v5;
    v67 = PsGetCurrentProcess(v15);
    WdLogSingleEntry3(3LL, -1073741811LL, v67, v66);
    WdLogGlobalForLineNumber = 1374;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    v71 = v135;
    if ( v137 )
      goto LABEL_142;
    goto LABEL_105;
  }
  if ( *((_BYTE *)v150[0] + 434) && v5[23] )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    if ( v137 )
    {
      if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v115,
          v117,
          *v135,
          v135[14],
          *((_QWORD *)v135 + 10),
          *((_QWORD *)v135 + 11),
          v135[274],
          *v136);
    }
    else if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v115,
        v117,
        *v135,
        *((_QWORD *)v135 + 1),
        v135[4],
        v135[21],
        v135[22],
        *v136,
        v135[5],
        v135[6]);
    }
    if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v116, (__int64)&EventProfilerExit, v117, v133);
    v118 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v118 + 1136), v5);
    return 3221225474LL;
  }
  if ( (*((_DWORD *)v150[0] + 98) & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1387;
    goto LABEL_141;
  }
  v17 = *((_QWORD *)v150[0] + 2);
  v18 = *(struct _KEVENT **)(v17 + 16);
  if ( ((__int64)v18->Header.WaitListHead.Blink[186].Flink & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, *v5);
    WdLogGlobalForLineNumber = 1393;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Present is not supported on MCDM adapter context 0x%I64x",
      *v5,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_141;
  }
  v158 = *((_QWORD *)v150[0] + 2);
  v144 = v17;
  v19 = 0;
  v145 = 0;
  if ( v17 )
  {
    if ( *(_DWORD *)(v17 + 464) == 2 )
    {
      v20 = v18 + 5;
      if ( KeReadStateEvent(v18 + 5) )
        goto LABEL_23;
    }
    else
    {
      v20 = v18 + 4;
      if ( KeReadStateEvent(v18 + 4) )
      {
LABEL_23:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v95, (__int64)&EventBlockThread, v96, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL));
        }
        v19 = 1;
        v145 = 1;
        goto LABEL_25;
      }
    }
    KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
    goto LABEL_23;
  }
LABEL_25:
  v21 = v5[23];
  if ( v21 > 0x40 )
  {
    WdLogSingleEntry2(3LL, v16, -1073741811LL);
    WdLogGlobalForLineNumber = 1410;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
    goto LABEL_141;
  }
  v22 = v21 + 1;
  Pool2 = 0LL;
  P = 0LL;
  v141 = 0;
  if ( (unsigned int)v22 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v22 < 8 )
      goto LABEL_30;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v22, 1265072196LL);
    P = Pool2;
  }
  else
  {
    Pool2 = v140;
    P = v140;
    if ( (_DWORD)v22 )
    {
      memset(v140, 0, 8LL * (unsigned int)v22);
      Pool2 = P;
    }
  }
  v141 = v22;
LABEL_30:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1419;
    if ( P != v140 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v141 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    if ( v137 )
    {
      if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v119,
          v121,
          *v135,
          v135[14],
          *((_QWORD *)v135 + 10),
          *((_QWORD *)v135 + 11),
          v135[274],
          *v136);
    }
    else if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v119,
        v121,
        *v135,
        *((_QWORD *)v135 + 1),
        v135[4],
        v135[21],
        v135[22],
        *v136,
        v135[5],
        v135[6]);
    }
    if ( (qword_14015E4B0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_256;
    goto LABEL_281;
  }
  *Pool2 = v16;
  v24 = P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v162, v146);
  for ( i = 0; i < v5[23]; i = v102 )
  {
    v97 = v5[i + 24];
    v98 = (v97 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v98 >= *((_DWORD *)v146 + 74) )
      goto LABEL_306;
    v99 = *((_QWORD *)v146 + 35);
    v100 = *(_DWORD *)(v99 + 16 * v98 + 8);
    if ( ((v97 >> 25) & 0x60) != (*(_BYTE *)(v99 + 16 * v98 + 8) & 0x60) || (v100 & 0x2000) != 0 || (v100 & 0x1F) == 0 )
      goto LABEL_306;
    if ( (*(_BYTE *)(v99 + 16LL * ((v97 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_306:
      v101 = 0LL;
      goto LABEL_200;
    }
    v101 = *(_QWORD *)(v99 + 16LL * ((v97 >> 6) & 0xFFFFFF));
LABEL_200:
    v102 = i + 1;
    *((_QWORD *)P + v102) = v101;
    v103 = *((_QWORD *)P + v102);
    if ( !v103 || (*(_DWORD *)(v103 + 392) & 8) != 0 || (v104 = *((_QWORD *)v16 + 2), *(_QWORD *)(v103 + 16) != v104) )
    {
      WdLogSingleEntry4(2LL, v16, v5[i + 24], i, -1073741811LL);
      WdLogGlobalForLineNumber = 1457;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v16,
        v5[i + 24],
        i,
        -1073741811LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v162);
      v86 = P;
      if ( P != v140 )
        goto LABEL_272;
      goto LABEL_164;
    }
    if ( i
      && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v104 + 16) + 16LL))
      && *(_DWORD *)(v24[i] + 388LL) <= *(_DWORD *)(v24[i - 1] + 388LL) )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1466;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Context physical adapters must be in the increasing adapter ordinal order, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v162);
LABEL_163:
      v86 = P;
      if ( P != v140 )
      {
LABEL_272:
        if ( v86 )
          ExFreePoolWithTag(v86, 0);
      }
LABEL_164:
      P = 0LL;
      v141 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
      goto LABEL_141;
    }
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v162);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v154,
    P,
    v141,
    v26,
    1);
  if ( v155 )
  {
    if ( v154[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1489;
      goto LABEL_162;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1484;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
    if ( P != v140 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v141 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    if ( v137 )
    {
      if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v127,
          v121,
          *v135,
          v135[14],
          *((_QWORD *)v135 + 10),
          *((_QWORD *)v135 + 11),
          v135[274],
          *v136);
    }
    else if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v127,
        v121,
        *v135,
        *((_QWORD *)v135 + 1),
        v135[4],
        v135[21],
        v135[22],
        *v136,
        v135[5],
        v135[6]);
    }
    if ( (qword_14015E4B0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
    {
LABEL_256:
      v122 = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v122 + 1136), v5);
      return 3221225495LL;
    }
LABEL_281:
    McTemplateK0q_EtwWriteTransfer(v120, (__int64)&EventProfilerExit, v121, v133);
    goto LABEL_256;
  }
  *((_QWORD *)v5 + 187) = P;
  *((_BYTE *)v5 + 1512) = 1;
  v27 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 1896LL);
  v28 = v5[22];
  if ( (v28 & 0x8000) != 0 )
  {
    if ( (v28 & 0x400000) != 0 || *((_QWORD *)v5 + 180) )
    {
      WdLogSingleEntry4(2LL, -1073741811LL, v16, v5[22], *((_QWORD *)v5 + 180));
      WdLogGlobalForLineNumber = 482;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
        -1073741811LL,
        (__int64)v16,
        v5[22],
        *((_QWORD *)v5 + 180),
        0LL);
      v29 = -1073741811;
    }
    else
    {
      v29 = 0;
    }
  }
  else
  {
    v62 = (DXGPRESENT *)*((_QWORD *)v16 + 19);
    if ( v62
      || ((v107 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL)) == 0LL
        ? (v62 = 0LL)
        : (v62 = DXGPRESENT::DXGPRESENT(v107, *(_DWORD *)(*((_QWORD *)v16 + 2) + 1904LL))),
          (*((_QWORD *)v16 + 19) = v62) != 0LL) )
    {
      *((_BYTE *)v16 + 435) = 1;
      v29 = DXGPRESENT::CopyPresentArgs(v62, v16, (struct _D3DKMT_PRESENT *)v5);
    }
    else
    {
      v108 = v146;
      WdLogSingleEntry4(6LL, -1073741801LL, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL), v146, v16);
      WdLogGlobalForLineNumber = 497;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
        -1073741801LL,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL),
        (__int64)v108,
        (__int64)v16,
        0LL);
      v29 = -1073741801;
    }
  }
  AllocationInfo = v29;
  if ( v29 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
    if ( P != v140 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v141 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    if ( v137 )
    {
      if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v128,
          v112,
          *v135,
          v135[14],
          *((_QWORD *)v135 + 10),
          *((_QWORD *)v135 + 11),
          v135[274],
          *v136);
    }
    else if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v128,
        v112,
        *v135,
        *((_QWORD *)v135 + 1),
        v135[4],
        v135[21],
        v135[22],
        *v136,
        v135[5],
        v135[6]);
    }
    if ( (qword_14015E4B0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_227;
LABEL_289:
    McTemplateK0q_EtwWriteTransfer(v111, (__int64)&EventProfilerExit, v112, v133);
LABEL_227:
    v114 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v114 + 1136), v5);
    return (unsigned int)v29;
  }
  v30 = v5[22];
  if ( (v30 & 0x10000000) != 0 )
  {
    if ( v27 )
    {
      if ( (*(_DWORD *)(v27 + 444) & 0x100) != 0 )
        goto LABEL_42;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1516;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Indirect Display present can only be used with a indirect display Dod driver",
        1516LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1510;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Indirect Display present has to be on a context associated with Dod",
        1510LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_162:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
    goto LABEL_163;
  }
  if ( v27 )
  {
    if ( (*(_DWORD *)(v27 + 444) & 0x100) != 0 && (v30 & 0x18000) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1526;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"No non-direct display presents can go to indirect display device",
        1526LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
      if ( P != v140 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v141 = 0;
      if ( v17 && v19 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v17 + 136));
        KeLeaveCriticalRegion();
      }
LABEL_141:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
      v71 = v135;
      if ( v137 )
      {
LABEL_142:
        if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            v68,
            v70,
            *v71,
            v71[14],
            *((_QWORD *)v71 + 10),
            *((_QWORD *)v71 + 11),
            v71[274],
            *v136);
        goto LABEL_107;
      }
LABEL_105:
      if ( !v71 || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
        goto LABEL_107;
LABEL_213:
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v68,
        v70,
        *v71,
        *((_QWORD *)v71 + 1),
        v71[4],
        v71[21],
        v71[22],
        *v136,
        v71[5],
        v71[6]);
      goto LABEL_107;
    }
LABEL_42:
    v31 = (struct DXGADAPTER *)v27;
  }
  else
  {
    v31 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v164, *((const struct _DXGKWIN32KENG_INTERFACE *const *)v146 + 11), v31);
  v148 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v148 + 3);
  v147 = -1LL;
  v32 = v148;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v32 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v32 + 38);
  v149 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v165, *((_QWORD *)v16 + 2), 2, v33, 0);
  if ( !v175 )
    goto LABEL_44;
  if ( v172 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v170, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7628;
  }
  v63 = v171;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v171 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v171 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v64, (__int64)&EventBlockThread, v65, 72);
      KeWaitForSingleObject((char *)v171 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v171, 0LL);
    v63 = v171;
  }
  v173 = 0LL;
  v172 = 1;
  if ( *((_DWORD *)v63 + 50) == 1 )
  {
LABEL_44:
    if ( v168 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v166, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v167 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v167 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventBlockThread, v35, 72);
        KeWaitForSingleObject((char *)v167 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v167, 0LL);
    }
    v169 = 0LL;
    v168 = 1;
    if ( *(_DWORD *)(v174 + 608) == 1 )
    {
      v29 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v166);
      if ( v175 )
        COREACCESS::Release((COREACCESS *)v170);
      v29 = -1073741130;
    }
  }
  else
  {
    v172 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v171 + 23) )
      DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v171, 0LL);
    v173 = 0LL;
    v29 = -1073741130;
  }
  AllocationInfo = v29;
  if ( v29 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v147);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v164);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
    if ( P != v140 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v141 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    v113 = v135;
    if ( !v137 )
    {
      if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        goto LABEL_249;
LABEL_226:
      if ( (qword_14015E4B0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        goto LABEL_227;
      goto LABEL_289;
    }
LABEL_292:
    if ( v113 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v110,
        v112,
        *v113,
        v113[14],
        *((_QWORD *)v113 + 10),
        *((_QWORD *)v113 + 11),
        v113[274],
        *v136);
    goto LABEL_226;
  }
  if ( (v5[22] & 0x200000) != 0 )
  {
    v109 = v150[0];
    v29 = SubmitPresentHistoryTokenPreparation(
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v147,
            (struct COREDEVICEACCESS *)v165,
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v150[0] + 2) + 16LL) + 16LL),
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 90),
            *((void **)v5 + 44),
            (v5[22] & 0x10) != 0);
    AllocationInfo = v29;
    if ( v29 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v147);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v164);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
      if ( P != v140 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v141 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
      v113 = v135;
      if ( !v137 )
      {
LABEL_224:
        if ( !v113 || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
          goto LABEL_226;
LABEL_249:
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v110,
          v112,
          *v113,
          *((_QWORD *)v113 + 1),
          v113[4],
          v113[21],
          v113[22],
          *v136,
          v113[5],
          v113[6]);
        goto LABEL_226;
      }
    }
    else
    {
      v29 = SubmitPresentHistoryToken(
              (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 90),
              (struct COREDEVICEACCESS *)v165,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v147,
              (struct CWin32kLocks *)v164,
              0,
              0LL,
              (struct DXGK_PRESENT_PARAMS *)v5,
              0LL,
              v109,
              0LL,
              0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v147);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v164);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
      if ( P != v140 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v141 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
      v113 = v135;
      if ( !v137 )
        goto LABEL_224;
    }
    goto LABEL_292;
  }
  v36 = (DXGDEVICE **)v150[0];
  v37 = *(_QWORD *)(*((_QWORD *)v150[0] + 2) + 16LL);
  v160[1] = v37;
  v38 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v37 + 1424));
  v160[0] = v38;
  if ( v38 )
  {
    v39 = *(_QWORD *)(v37 + 16);
    v40 = *(int *)(v39 + 2736) < 0x2000 ? 1 : *(_DWORD *)(v39 + 296);
    v41 = *(int *)(v39 + 2736) >= 0x2000 || *(_BYTE *)(v39 + 3036)
        ? *(_DWORD *)(v39 + 2944) * (72 * v40 + 224) + 8 * v40 + 616
        : 1304;
    memset(v38, 0, v41);
    v42 = *(_QWORD *)(v37 + 16);
    v43 = *(int *)(v42 + 2736) < 0x2000 ? 1 : *(_DWORD *)(v42 + 296);
    v44 = *(_DWORD *)(v42 + 2944);
    v45 = *(int *)(v42 + 2736) >= 0x2000 || *(_BYTE *)(v42 + 3036);
    *((_BYTE *)v38 + 356) = v45;
    if ( v45 )
    {
      *((_DWORD *)v38 + 151) = v44;
      *((_DWORD *)v38 + 152) = v43;
      *((_DWORD *)v38 + 153) = v44 * (72 * v43 + 224) + 16;
      v46 = v44 * (72 * v43 + 224) + 616;
      *((_DWORD *)v38 + 138) = v46;
      *((_DWORD *)v38 + 139) = v46 + 8 * v43;
    }
  }
  if ( !v38 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1581;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      1581LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v160);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v147);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v164);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
    if ( P != v140 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v141 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v144);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    v132 = v135;
    if ( v137 )
    {
      if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v129,
          v131,
          *v135,
          v135[14],
          *((_QWORD *)v135 + 10),
          *((_QWORD *)v135 + 11),
          v135[274],
          *v136);
    }
    else if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v129,
        v131,
        *v135,
        *((_QWORD *)v135 + 1),
        v135[4],
        v135[21],
        v135[22],
        *v136,
        v135[5],
        v135[6]);
    }
    if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v130, (__int64)&EventProfilerExit, v131, v133);
    DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE(&v153, v129, v131, v132);
    return 3221225495LL;
  }
  AllocationInfo = DXGCONTEXT::Present(
                     (DXGCONTEXT *)v36,
                     (const struct DXGK_PRESENT_PARAMS *)v5,
                     (struct COREDEVICEACCESS *)v165,
                     (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v147,
                     (struct CWin32kLocks *)v164,
                     (struct DXGCONTEXT **)P,
                     (struct VIDSCH_SUBMIT_DATA_BASE *)v38);
  if ( AllocationInfo == -1071775482 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v167)
      || (v151 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v165, 0LL), v151 >= 0) )
    {
      DXGDEVICE::CloseInternalCddPrimaryHandle(v36[2], (struct COREDEVICEACCESS *)v165);
      goto LABEL_66;
    }
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v37 + 1424), v38);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
    if ( v149 )
    {
      v149 = 0;
      v81 = (char *)v148 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v148 + 38);
      ExReleasePushLockSharedEx(v81, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v148);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v164);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
    if ( P != v140 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v141 = 0;
    if ( v17 && v145 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 136));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v142);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    if ( v137 )
    {
      if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v82,
          v84,
          *v135,
          v135[14],
          *((_QWORD *)v135 + 10),
          *((_QWORD *)v135 + 11),
          v135[274],
          *v136);
    }
    else if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v82,
        v84,
        *v135,
        *((_QWORD *)v135 + 1),
        v135[4],
        v135[21],
        v135[22],
        *v136,
        v135[5],
        v135[6]);
    }
    if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v83, (__int64)&EventProfilerExit, v84, v133);
    v85 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v85 + 1136), v5);
    return (unsigned int)v151;
  }
  else
  {
LABEL_66:
    if ( v27 )
    {
      v47 = *(_QWORD *)(v27 + 3120);
      if ( v47 )
      {
        if ( (v5[22] & 4) != 0 && v5[4] < *(_DWORD *)(v47 + 96) )
        {
          v73 = MEMORY[0xFFFFF78000000320];
          v163 = MEMORY[0xFFFFF78000000320];
          v74 = AllocationInfo;
          TimeIncrement = KeQueryTimeIncrement();
          v76 = *(_QWORD *)(*(_QWORD *)(v27 + 3120) + 128LL) + 4024LL * v5[4];
          *(_QWORD *)&v159 = v73 * TimeIncrement;
          DWORD2(v159) = v74;
          HIDWORD(v159) = (*((_DWORD *)v146 + 102) >> 2) & 1 | 4;
          DISPLAY_SOURCE::RecordPresentDiagHistory(v76, &v159);
          v38 = (PVOID)v160[0];
        }
      }
    }
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v37 + 1424), v38);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
    if ( v149 )
    {
      v149 = 0;
      v48 = (char *)v148 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v148 + 38);
      ExReleasePushLockSharedEx(v48, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v148);
    }
    if ( AllocationInfo >= 0 )
    {
      v49 = v156 + 1488;
      if ( (unsigned __int64)(v156 + 1488) >= MmUserProbeAddress )
        v49 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v49, v5 + 378, 1uLL);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v164);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v154);
    if ( P != v140 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v141 = 0;
    if ( v17 && v145 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 136));
      KeLeaveCriticalRegion();
      v145 = 0;
    }
    if ( v142 && !v143 )
      DXGCONTEXT::ReleaseReference(v142);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v133);
    if ( v137 )
    {
      if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v50,
          v52,
          *v135,
          v135[14],
          *((_QWORD *)v135 + 10),
          *((_QWORD *)v135 + 11),
          v135[274],
          *v136);
    }
    else if ( v135 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v50,
        v52,
        *v135,
        *((_QWORD *)v135 + 1),
        v135[4],
        v135[21],
        v135[22],
        *v136,
        v135[5],
        v135[6]);
    }
    if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v51, (__int64)&EventProfilerExit, v52, v133);
    v53 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v53 + 1136), v5);
    v55 = PsGetCurrentProcess(v54);
    v56 = PsGetProcessDxgProcess(v55);
    v57 = (struct DXGPROCESS *)v56;
    if ( !v56 || (*(_DWORD *)(v56 + 408) & 0x80) != 0 )
    {
      v92 = DXGTHREAD::GetCurrent();
      if ( v92 )
      {
        v58 = (struct DXGPROCESS *)*((_QWORD *)v92 + 3);
        if ( !v58 )
          goto LABEL_89;
      }
      else
      {
        v93 = KeGetCurrentThread();
        v94 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v58 = DXGGLOBAL::SearchDxgThreadList(v94, v93);
        if ( !v58 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 2926;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed to find DXGPROCESS",
            2926LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_89;
        }
      }
    }
    else
    {
LABEL_89:
      v58 = v57;
    }
    v59 = *((_QWORD *)v58 + 8);
    for ( j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v59 + 104), (PKSPIN_LOCK)(v59 + 120));
          j;
          j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v59 + 104), (PKSPIN_LOCK)(v59 + 120)) )
    {
      ((void (__fastcall *)(struct _LIST_ENTRY *))j[1].Flink)(j[1].Blink);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(j);
    }
    return (unsigned int)AllocationInfo;
  }
}
