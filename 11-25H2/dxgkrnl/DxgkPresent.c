/*
 * XREFs of DxgkPresent @ 0x1402F11A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x140013214 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x140014670 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z @ 0x140019488 (-RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXUPRESENTHISTORYDIAGNOSTICINFO@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14001D750 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400339D0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x140033BE0 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140035C88 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x140039030 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1401883A4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1402F09C0 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1402F0AA0 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140317908 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     _DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE @ 0x140389F78 (_DXGADAPTER--SubmitPresentHistoryTokenFromVm_--_45_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1403A2CD8 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
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
  __int64 v16; // r9
  struct DXGCONTEXT *v17; // rdi
  __int64 v18; // r13
  struct _KEVENT *v19; // rdx
  int v20; // r15d
  struct _KEVENT *v21; // rbx
  unsigned int v22; // ebx
  __int64 v23; // rbx
  _QWORD *Pool2; // rcx
  _QWORD *v25; // r12
  unsigned int i; // ebx
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r12
  unsigned int v32; // eax
  int v33; // ebx
  unsigned int v34; // ecx
  struct DXGADAPTER *v35; // r8
  DXGADAPTER *v36; // rbx
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  DXGDEVICE **v40; // rdi
  __int64 v41; // r15
  PVOID v42; // rbx
  __int64 v43; // rax
  int v44; // ecx
  unsigned int v45; // eax
  __int64 v46; // rax
  int v47; // ecx
  int v48; // r8d
  bool v49; // al
  int v50; // eax
  __int64 v51; // rcx
  char *v52; // rcx
  void *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  struct DXGGLOBAL *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  struct DXGPROCESS *v61; // rdi
  struct DXGPROCESS *v62; // rax
  __int64 v63; // rdi
  PLIST_ENTRY j; // rbx
  DXGPRESENT *v66; // rax
  DXGADAPTER *v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // r8
  unsigned int v70; // ebx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  int *v75; // r9
  struct DXGGLOBAL *v76; // rax
  __int64 v77; // rbx
  int v78; // edi
  ULONG TimeIncrement; // eax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  struct DXGGLOBAL *v84; // rax
  char *v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  struct DXGGLOBAL *v89; // rax
  PVOID v90; // rcx
  __int64 v91; // rcx
  struct DXGCONTEXT *v92; // rdx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *v95; // rax
  struct DXGTHREAD *v96; // rax
  struct _ETHREAD *v97; // rbx
  KSPIN_LOCK *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // r8
  unsigned int v101; // r8d
  __int64 v102; // rax
  __int64 v103; // r9
  int v104; // edx
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rbx
  __int64 v110; // rax
  DXGPRESENT *v111; // rax
  struct DXGPROCESS *v112; // rbx
  struct DXGCONTEXT *v113; // r15
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  int *v117; // r9
  struct DXGGLOBAL *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  struct DXGGLOBAL *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  struct DXGGLOBAL *v126; // rax
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  int *v136; // r9
  int v137; // [rsp+60h] [rbp-298h] BYREF
  __int64 v138; // [rsp+68h] [rbp-290h]
  int *v139; // [rsp+70h] [rbp-288h]
  int *v140; // [rsp+78h] [rbp-280h]
  char v141; // [rsp+80h] [rbp-278h]
  int AllocationInfo; // [rsp+88h] [rbp-270h] BYREF
  PVOID P; // [rsp+90h] [rbp-268h]
  _BYTE v144[32]; // [rsp+98h] [rbp-260h] BYREF
  unsigned int v145; // [rsp+B8h] [rbp-240h]
  DXGCONTEXT *v146; // [rsp+C0h] [rbp-238h] BYREF
  char v147; // [rsp+C8h] [rbp-230h]
  __int64 v148; // [rsp+D0h] [rbp-228h] BYREF
  int v149; // [rsp+D8h] [rbp-220h]
  struct DXGPROCESS *v150; // [rsp+E0h] [rbp-218h]
  unsigned __int64 v151; // [rsp+E8h] [rbp-210h] BYREF
  DXGADAPTER *v152; // [rsp+F0h] [rbp-208h]
  char v153; // [rsp+F8h] [rbp-200h]
  struct DXGCONTEXT *v154[2]; // [rsp+100h] [rbp-1F8h] BYREF
  int v155; // [rsp+110h] [rbp-1E8h]
  struct DXGCONTEXT *v156; // [rsp+118h] [rbp-1E0h] BYREF
  unsigned int *v157; // [rsp+120h] [rbp-1D8h] BYREF
  _QWORD v158[6]; // [rsp+128h] [rbp-1D0h] BYREF
  char v159; // [rsp+158h] [rbp-1A0h]
  char *v160; // [rsp+160h] [rbp-198h]
  unsigned int *v161; // [rsp+168h] [rbp-190h]
  __int64 v162; // [rsp+170h] [rbp-188h]
  __int128 v163; // [rsp+180h] [rbp-178h] BYREF
  _QWORD v164[2]; // [rsp+190h] [rbp-168h] BYREF
  _BYTE v165[16]; // [rsp+1A0h] [rbp-158h] BYREF
  _BYTE v166[24]; // [rsp+1B0h] [rbp-148h] BYREF
  __int64 v167; // [rsp+1C8h] [rbp-130h]
  _BYTE v168[80]; // [rsp+1D0h] [rbp-128h] BYREF
  char v169[8]; // [rsp+220h] [rbp-D8h] BYREF
  _BYTE v170[16]; // [rsp+228h] [rbp-D0h] BYREF
  DXGADAPTER *v171; // [rsp+238h] [rbp-C0h]
  char v172; // [rsp+240h] [rbp-B8h]
  __int64 v173; // [rsp+248h] [rbp-B0h]
  _BYTE v174[16]; // [rsp+268h] [rbp-90h] BYREF
  DXGADAPTER *v175; // [rsp+278h] [rbp-80h]
  char v176; // [rsp+280h] [rbp-78h]
  __int64 v177; // [rsp+288h] [rbp-70h]
  __int64 v178; // [rsp+2A8h] [rbp-50h]
  char v179; // [rsp+2B0h] [rbp-48h]

  v160 = Src;
  AllocationInfo = -1073741811;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Global = DXGGLOBAL::GetGlobal();
  v4 = (unsigned int *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1104));
  v5 = v4;
  v161 = v4;
  if ( !v4 )
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1276;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
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
  v157 = v5;
  if ( bTracingEnabled )
    v7 = v5;
  else
    v7 = 0LL;
  v138 = 0LL;
  v137 = 2020;
  v140 = &AllocationInfo;
  v141 = 0;
  v139 = (int *)v7;
  if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)&AllocationInfo, (__int64)&EventProfilerEnter, v6, 2020);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v137, 2020);
  CurrentProcess = PsGetCurrentProcess(v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_7;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    v150 = v13;
    if ( !v13 )
      goto LABEL_7;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v95 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v13 = DXGGLOBAL::SearchDxgThreadList(v95, CurrentThread);
    v150 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
      v13 = v12;
      v150 = v12;
    }
  }
  v154[1] = v13;
  if ( !v13 )
  {
    v127 = PsGetCurrentProcess(v11);
    WdLogSingleEntry2(2LL, -1073741811LL, v127);
    WdLogGlobalForLineNumber = 1305;
    v129 = PsGetCurrentProcess(v128);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v129,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v130,
          v74,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v130,
        v74,
        *v139,
        *((_QWORD *)v139 + 1),
        v139[4],
        v139[21],
        v139[22],
        *v140,
        v139[5],
        v139[6]);
    }
    if ( (qword_14015B4C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v81,
          v83,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v81,
        v83,
        *v139,
        *((_QWORD *)v139 + 1),
        v139[4],
        v139[21],
        v139[22],
        *v140,
        v139[5],
        v139[6]);
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v82, (__int64)&EventProfilerExit, v83, v137);
    v84 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v84 + 1104), v5);
    return 3223191558LL;
  }
  if ( (v5[22] & 0x10000000) != 0 )
  {
    v156 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165, *v5, v13, &v156, 0, 1);
    v92 = v156;
    if ( v156 )
    {
      *v5 = v5[362];
      AllocationInfo = PreIndirectPresentReadAllocationInfo(
                         v13,
                         *((struct DXGDEVICE **)v92 + 2),
                         v5[5],
                         (struct INDIRECT_RESOURCE_INFO *)(v5 + 379));
      if ( AllocationInfo < 0 )
      {
        WdLogSingleEntry1(3LL, v5[5]);
        WdLogGlobalForLineNumber = 1362;
      }
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
      goto LABEL_16;
    }
    v109 = v5[362];
    v110 = PsGetCurrentProcess(v91);
    WdLogSingleEntry3(3LL, -1073741811LL, v110, v109);
    WdLogGlobalForLineNumber = 1351;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v165);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    v75 = v139;
    if ( v141 )
      goto LABEL_142;
    if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      goto LABEL_213;
LABEL_107:
    if ( (qword_14015B4C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
    {
LABEL_108:
      v76 = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v76 + 1104), v5);
      return 3221225485LL;
    }
LABEL_158:
    McTemplateK0q_EtwWriteTransfer(v73, (__int64)&EventProfilerExit, v74, v137);
    goto LABEL_108;
  }
LABEL_16:
  v154[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146, *v5, v13, v154, 0, 1);
  v17 = v154[0];
  if ( !v154[0] )
  {
    v70 = *v5;
    v71 = PsGetCurrentProcess(v15);
    WdLogSingleEntry3(3LL, -1073741811LL, v71, v70);
    WdLogGlobalForLineNumber = 1374;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    v75 = v139;
    if ( v141 )
      goto LABEL_142;
    goto LABEL_105;
  }
  if ( *((_BYTE *)v154[0] + 434) && v5[23] )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v119,
          v121,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v119,
        v121,
        *v139,
        *((_QWORD *)v139 + 1),
        v139[4],
        v139[21],
        v139[22],
        *v140,
        v139[5],
        v139[6]);
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v120, (__int64)&EventProfilerExit, v121, v137);
    v122 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v122 + 1104), v5);
    return 3221225474LL;
  }
  if ( (*((_DWORD *)v154[0] + 98) & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1387;
    goto LABEL_141;
  }
  v18 = *((_QWORD *)v154[0] + 2);
  v19 = *(struct _KEVENT **)(v18 + 16);
  if ( ((__int64)v19->Header.WaitListHead.Blink[186].Flink & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, *v5);
    WdLogGlobalForLineNumber = 1393;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Present is not supported on MCDM adapter context 0x%I64x",
      *v5,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_141;
  }
  v162 = *((_QWORD *)v154[0] + 2);
  v148 = v18;
  v20 = 0;
  v149 = 0;
  if ( v18 )
  {
    if ( *(_DWORD *)(v18 + 464) == 2 )
    {
      v21 = v19 + 5;
      if ( KeReadStateEvent(v19 + 5) )
        goto LABEL_23;
    }
    else
    {
      v21 = v19 + 4;
      if ( KeReadStateEvent(v19 + 4) )
      {
LABEL_23:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v99, (__int64)&EventBlockThread, v100, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v18 + 16) + 16LL));
        }
        v20 = 1;
        v149 = 1;
        goto LABEL_25;
      }
    }
    KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
    goto LABEL_23;
  }
LABEL_25:
  v22 = v5[23];
  if ( v22 > 0x40 )
  {
    WdLogSingleEntry2(3LL, v17, -1073741811LL);
    WdLogGlobalForLineNumber = 1410;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
    goto LABEL_141;
  }
  v23 = v22 + 1;
  Pool2 = 0LL;
  P = 0LL;
  v145 = 0;
  if ( (unsigned int)v23 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v23 < 8 )
      goto LABEL_30;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v23, 1265072196LL, v16);
    P = Pool2;
  }
  else
  {
    Pool2 = v144;
    P = v144;
    if ( (_DWORD)v23 )
    {
      memset(v144, 0, 8LL * (unsigned int)v23);
      Pool2 = P;
    }
  }
  v145 = v23;
LABEL_30:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1419;
    if ( P != v144 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v145 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v123,
          v125,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v123,
        v125,
        *v139,
        *((_QWORD *)v139 + 1),
        v139[4],
        v139[21],
        v139[22],
        *v140,
        v139[5],
        v139[6]);
    }
    if ( (qword_14015B4C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_256;
    goto LABEL_281;
  }
  *Pool2 = v17;
  v25 = P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v166, v150);
  for ( i = 0; i < v5[23]; i = v106 )
  {
    v101 = v5[i + 24];
    v102 = (v101 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v102 >= *((_DWORD *)v150 + 74) )
      goto LABEL_306;
    v103 = *((_QWORD *)v150 + 35);
    v104 = *(_DWORD *)(v103 + 16 * v102 + 8);
    if ( ((v101 >> 25) & 0x60) != (*(_BYTE *)(v103 + 16 * v102 + 8) & 0x60)
      || (v104 & 0x2000) != 0
      || (v104 & 0x1F) == 0 )
    {
      goto LABEL_306;
    }
    if ( (*(_BYTE *)(v103 + 16LL * ((v101 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_306:
      v105 = 0LL;
      goto LABEL_200;
    }
    v105 = *(_QWORD *)(v103 + 16LL * ((v101 >> 6) & 0xFFFFFF));
LABEL_200:
    v106 = i + 1;
    *((_QWORD *)P + v106) = v105;
    v107 = *((_QWORD *)P + v106);
    if ( !v107 || (*(_DWORD *)(v107 + 392) & 8) != 0 || (v108 = *((_QWORD *)v17 + 2), *(_QWORD *)(v107 + 16) != v108) )
    {
      WdLogSingleEntry4(2LL, v17, v5[i + 24], i, -1073741811LL);
      WdLogGlobalForLineNumber = 1457;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v17,
        v5[i + 24],
        i,
        -1073741811LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v166);
      v90 = P;
      if ( P != v144 )
        goto LABEL_272;
      goto LABEL_164;
    }
    if ( i
      && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v108 + 16) + 16LL))
      && *(_DWORD *)(v25[i] + 388LL) <= *(_DWORD *)(v25[i - 1] + 388LL) )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1466;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Context physical adapters must be in the increasing adapter ordinal order, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v166);
LABEL_163:
      v90 = P;
      if ( P != v144 )
      {
LABEL_272:
        if ( v90 )
          ExFreePoolWithTag(v90, 0);
      }
LABEL_164:
      P = 0LL;
      v145 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
      goto LABEL_141;
    }
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v166);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v158,
    P,
    v145,
    v27,
    1);
  if ( v159 )
  {
    if ( v158[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1489;
      goto LABEL_162;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1484;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v158);
    if ( P != v144 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v145 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v131,
          v125,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v131,
        v125,
        *v139,
        *((_QWORD *)v139 + 1),
        v139[4],
        v139[21],
        v139[22],
        *v140,
        v139[5],
        v139[6]);
    }
    if ( (qword_14015B4C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
    {
LABEL_256:
      v126 = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v126 + 1104), v5);
      return 3221225495LL;
    }
LABEL_281:
    McTemplateK0q_EtwWriteTransfer(v124, (__int64)&EventProfilerExit, v125, v137);
    goto LABEL_256;
  }
  *((_QWORD *)v5 + 187) = P;
  *((_BYTE *)v5 + 1512) = 1;
  v31 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 1880LL);
  v32 = v5[22];
  if ( (v32 & 0x8000) != 0 )
  {
    if ( (v32 & 0x400000) != 0 || *((_QWORD *)v5 + 180) )
    {
      WdLogSingleEntry4(2LL, -1073741811LL, v17, v5[22], *((_QWORD *)v5 + 180));
      WdLogGlobalForLineNumber = 481;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"ret = 0x%I64x 0x%I64x 0x%I64x 0x%I64x RedirectedFlip doesn't support Present regions.",
        -1073741811LL,
        (__int64)v17,
        v5[22],
        *((_QWORD *)v5 + 180),
        0LL);
      v33 = -1073741811;
    }
    else
    {
      v33 = 0;
    }
  }
  else
  {
    v66 = (DXGPRESENT *)*((_QWORD *)v17 + 19);
    if ( v66
      || ((v111 = (DXGPRESENT *)DXGQUOTAALLOCATOR<256,1265072196>::operator new(1648LL, v28, v29, v30)) == 0LL
        ? (v66 = 0LL)
        : (v66 = DXGPRESENT::DXGPRESENT(v111, *(_DWORD *)(*((_QWORD *)v17 + 2) + 1888LL))),
          (*((_QWORD *)v17 + 19) = v66) != 0LL) )
    {
      *((_BYTE *)v17 + 435) = 1;
      v33 = DXGPRESENT::CopyPresentArgs(v66, v17, (struct _D3DKMT_PRESENT *)v5);
    }
    else
    {
      v112 = v150;
      WdLogSingleEntry4(6LL, -1073741801LL, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 16LL), v150, v17);
      WdLogGlobalForLineNumber = 496;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"0x%I64x Out of memory allocating DXGPRESENT, 0x%I64x 0x%I64x 0x%I64x",
        -1073741801LL,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 16LL),
        (__int64)v112,
        (__int64)v17,
        0LL);
      v33 = -1073741801;
    }
  }
  AllocationInfo = v33;
  if ( v33 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v158);
    if ( P != v144 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v145 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v132,
          v116,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v132,
        v116,
        *v139,
        *((_QWORD *)v139 + 1),
        v139[4],
        v139[21],
        v139[22],
        *v140,
        v139[5],
        v139[6]);
    }
    if ( (qword_14015B4C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      goto LABEL_227;
LABEL_289:
    McTemplateK0q_EtwWriteTransfer(v115, (__int64)&EventProfilerExit, v116, v137);
LABEL_227:
    v118 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v118 + 1104), v5);
    return (unsigned int)v33;
  }
  v34 = v5[22];
  if ( (v34 & 0x10000000) != 0 )
  {
    if ( v31 )
    {
      if ( (*(_DWORD *)(v31 + 444) & 0x100) != 0 )
        goto LABEL_42;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1516;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
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
        0x40000,
        0xFFFFFFFFLL,
        L"Indirect Display present has to be on a context associated with Dod",
        1510LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_162:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v158);
    goto LABEL_163;
  }
  if ( v31 )
  {
    if ( (*(_DWORD *)(v31 + 444) & 0x100) != 0 && (v34 & 0x18000) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1526;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"No non-direct display presents can go to indirect display device",
        1526LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v158);
      if ( P != v144 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v145 = 0;
      if ( v18 && v20 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v18 + 136));
        KeLeaveCriticalRegion();
      }
LABEL_141:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
      v75 = v139;
      if ( v141 )
      {
LABEL_142:
        if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            v72,
            v74,
            *v75,
            v75[14],
            *((_QWORD *)v75 + 10),
            *((_QWORD *)v75 + 11),
            v75[274],
            *v140);
        goto LABEL_107;
      }
LABEL_105:
      if ( !v75 || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
        goto LABEL_107;
LABEL_213:
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v72,
        v74,
        *v75,
        *((_QWORD *)v75 + 1),
        v75[4],
        v75[21],
        v75[22],
        *v140,
        v75[5],
        v75[6]);
      goto LABEL_107;
    }
LABEL_42:
    v35 = (struct DXGADAPTER *)v31;
  }
  else
  {
    v35 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 16LL);
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v168, *((const struct _DXGKWIN32KENG_INTERFACE *const *)v150 + 11), v35);
  v152 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)v152 + 3);
  v151 = -1LL;
  v36 = v152;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v36 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)v36 + 38);
  v153 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v169, *((_QWORD *)v17 + 2), 2, v37, 0);
  if ( !v179 )
    goto LABEL_44;
  if ( v176 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v174, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  v67 = v175;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v175 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v175 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v68, (__int64)&EventBlockThread, v69, 72);
      KeWaitForSingleObject((char *)v175 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v175, 0LL);
    v67 = v175;
  }
  v177 = 0LL;
  v176 = 1;
  if ( *((_DWORD *)v67 + 50) == 1 )
  {
LABEL_44:
    if ( v172 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v170, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7603;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v171 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v171 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventBlockThread, v39, 72);
        KeWaitForSingleObject((char *)v171 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v171, 0LL);
    }
    v173 = 0LL;
    v172 = 1;
    if ( *(_DWORD *)(v178 + 608) == 1 )
    {
      v33 = 0;
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v170);
      if ( v179 )
        COREACCESS::Release((COREACCESS *)v174);
      v33 = -1073741130;
    }
  }
  else
  {
    v176 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v175 + 23) )
      DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v175, 0LL);
    v177 = 0LL;
    v33 = -1073741130;
  }
  AllocationInfo = v33;
  if ( v33 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v169);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v151);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v168);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v158);
    if ( P != v144 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v145 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    v117 = v139;
    if ( !v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        goto LABEL_249;
LABEL_226:
      if ( (qword_14015B4C0 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        goto LABEL_227;
      goto LABEL_289;
    }
LABEL_292:
    if ( v117 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v114,
        v116,
        *v117,
        v117[14],
        *((_QWORD *)v117 + 10),
        *((_QWORD *)v117 + 11),
        v117[274],
        *v140);
    goto LABEL_226;
  }
  if ( (v5[22] & 0x200000) != 0 )
  {
    v113 = v154[0];
    v33 = SubmitPresentHistoryTokenPreparation(
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v151,
            (struct COREDEVICEACCESS *)v169,
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v154[0] + 2) + 16LL) + 16LL),
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 90),
            *((void **)v5 + 44),
            (v5[22] & 0x10) != 0);
    AllocationInfo = v33;
    if ( v33 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v169);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v151);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v168);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v158);
      if ( P != v144 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v145 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
      v117 = v139;
      if ( !v141 )
      {
LABEL_224:
        if ( !v117 || (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) == 0LL )
          goto LABEL_226;
LABEL_249:
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v114,
          v116,
          *v117,
          *((_QWORD *)v117 + 1),
          v117[4],
          v117[21],
          v117[22],
          *v140,
          v117[5],
          v117[6]);
        goto LABEL_226;
      }
    }
    else
    {
      v33 = SubmitPresentHistoryToken(
              (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 90),
              (struct COREDEVICEACCESS *)v169,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v151,
              (struct CWin32kLocks *)v168,
              0,
              0LL,
              (struct DXGK_PRESENT_PARAMS *)v5,
              0LL,
              v113,
              0LL,
              0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v169);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v151);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v168);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v158);
      if ( P != v144 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v145 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
      v117 = v139;
      if ( !v141 )
        goto LABEL_224;
    }
    goto LABEL_292;
  }
  v40 = (DXGDEVICE **)v154[0];
  v41 = *(_QWORD *)(*((_QWORD *)v154[0] + 2) + 16LL);
  v164[1] = v41;
  v42 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v41 + 1424));
  v164[0] = v42;
  if ( v42 )
  {
    v43 = *(_QWORD *)(v41 + 16);
    v44 = *(int *)(v43 + 2736) < 0x2000 ? 1 : *(_DWORD *)(v43 + 296);
    v45 = *(int *)(v43 + 2736) >= 0x2000 || *(_BYTE *)(v43 + 3036)
        ? *(_DWORD *)(v43 + 2944) * (72 * v44 + 224) + 8 * v44 + 616
        : 1304;
    memset(v42, 0, v45);
    v46 = *(_QWORD *)(v41 + 16);
    v47 = *(int *)(v46 + 2736) < 0x2000 ? 1 : *(_DWORD *)(v46 + 296);
    v48 = *(_DWORD *)(v46 + 2944);
    v49 = *(int *)(v46 + 2736) >= 0x2000 || *(_BYTE *)(v46 + 3036);
    *((_BYTE *)v42 + 356) = v49;
    if ( v49 )
    {
      *((_DWORD *)v42 + 151) = v48;
      *((_DWORD *)v42 + 152) = v47;
      *((_DWORD *)v42 + 153) = v48 * (72 * v47 + 224) + 16;
      v50 = v48 * (72 * v47 + 224) + 616;
      *((_DWORD *)v42 + 138) = v50;
      *((_DWORD *)v42 + 139) = v50 + 8 * v47;
    }
  }
  if ( !v42 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1581;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      1581LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v164);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v169);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v151);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v168);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v158);
    if ( P != v144 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v145 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v148);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    v136 = v139;
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v133,
          v135,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v133,
        v135,
        *v139,
        *((_QWORD *)v139 + 1),
        v139[4],
        v139[21],
        v139[22],
        *v140,
        v139[5],
        v139[6]);
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v134, (__int64)&EventProfilerExit, v135, v137);
    DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE(&v157, v133, v135, v136);
    return 3221225495LL;
  }
  AllocationInfo = DXGCONTEXT::Present(
                     (DXGCONTEXT *)v40,
                     (struct _D3DKMT_PRESENT *)v5,
                     (struct COREDEVICEACCESS *)v169,
                     (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v151,
                     (struct CWin32kLocks *)v168,
                     (struct DXGCONTEXT **)P,
                     (struct VIDSCH_SUBMIT_DATA_BASE *)v42);
  if ( AllocationInfo == -1071775482 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v171)
      || (v155 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v169, 0LL), v155 >= 0) )
    {
      DXGDEVICE::CloseInternalCddPrimaryHandle(v40[2], (struct COREDEVICEACCESS *)v169);
      goto LABEL_66;
    }
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v41 + 1424), v42);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v169);
    if ( v153 )
    {
      v153 = 0;
      v85 = (char *)v152 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v152 + 38);
      ExReleasePushLockSharedEx(v85, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v152);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v168);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v158);
    if ( P != v144 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v145 = 0;
    if ( v18 && v149 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v18 + 136));
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v86,
          v88,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v86,
        v88,
        *v139,
        *((_QWORD *)v139 + 1),
        v139[4],
        v139[21],
        v139[22],
        *v140,
        v139[5],
        v139[6]);
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v87, (__int64)&EventProfilerExit, v88, v137);
    v89 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v89 + 1104), v5);
    return (unsigned int)v155;
  }
  else
  {
LABEL_66:
    if ( v31 )
    {
      v51 = *(_QWORD *)(v31 + 3120);
      if ( v51 )
      {
        if ( (v5[22] & 4) != 0 && v5[4] < *(_DWORD *)(v51 + 96) )
        {
          v77 = MEMORY[0xFFFFF78000000320];
          v167 = MEMORY[0xFFFFF78000000320];
          v78 = AllocationInfo;
          TimeIncrement = KeQueryTimeIncrement();
          v80 = *(_QWORD *)(*(_QWORD *)(v31 + 3120) + 128LL) + 3984LL * v5[4];
          *(_QWORD *)&v163 = v77 * TimeIncrement;
          DWORD2(v163) = v78;
          HIDWORD(v163) = (*((_DWORD *)v150 + 102) >> 2) & 1 | 4;
          DISPLAY_SOURCE::RecordPresentDiagHistory(v80, &v163);
          v42 = (PVOID)v164[0];
        }
      }
    }
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v41 + 1424), v42);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v169);
    if ( v153 )
    {
      v153 = 0;
      v52 = (char *)v152 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v152 + 38);
      ExReleasePushLockSharedEx(v52, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER::ReleaseReference(v152);
    }
    if ( AllocationInfo >= 0 )
    {
      v53 = v160 + 1488;
      if ( (unsigned __int64)(v160 + 1488) >= MmUserProbeAddress )
        v53 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v53, v5 + 378, 1uLL);
    }
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v168);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v158);
    if ( P != v144 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v145 = 0;
    if ( v18 && v149 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v18 + 136));
      KeLeaveCriticalRegion();
      v149 = 0;
    }
    if ( v146 && !v147 )
      DXGCONTEXT::ReleaseReference(v146);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v137);
    if ( v141 )
    {
      if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v54,
          v56,
          *v139,
          v139[14],
          *((_QWORD *)v139 + 10),
          *((_QWORD *)v139 + 11),
          v139[274],
          *v140);
    }
    else if ( v139 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v54,
        v56,
        *v139,
        *((_QWORD *)v139 + 1),
        v139[4],
        v139[21],
        v139[22],
        *v140,
        v139[5],
        v139[6]);
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v55, (__int64)&EventProfilerExit, v56, v137);
    v57 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v57 + 1104), v5);
    v59 = PsGetCurrentProcess(v58);
    v60 = PsGetProcessDxgProcess(v59);
    v61 = (struct DXGPROCESS *)v60;
    if ( !v60 || (*(_DWORD *)(v60 + 408) & 0x80) != 0 )
    {
      v96 = DXGTHREAD::GetCurrent();
      if ( v96 )
      {
        v62 = (struct DXGPROCESS *)*((_QWORD *)v96 + 3);
        if ( !v62 )
          goto LABEL_89;
      }
      else
      {
        v97 = KeGetCurrentThread();
        v98 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
        v62 = DXGGLOBAL::SearchDxgThreadList(v98, v97);
        if ( !v62 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 2925;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to find DXGPROCESS",
            2925LL,
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
      v62 = v61;
    }
    v63 = *((_QWORD *)v62 + 8);
    for ( j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v63 + 104), (PKSPIN_LOCK)(v63 + 120));
          j;
          j = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v63 + 104), (PKSPIN_LOCK)(v63 + 120)) )
    {
      ((void (__fastcall *)(struct _LIST_ENTRY *))j[1].Flink)(j[1].Blink);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(j);
    }
    return (unsigned int)AllocationInfo;
  }
}
