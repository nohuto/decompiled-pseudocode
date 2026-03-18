/*
 * XREFs of DxgkSubmitPresentToHwQueue @ 0x140420F70
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x140010000 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x140013214 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x140014670 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14001D750 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14001E170 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002B2E0 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002B430 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x140033BE0 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x140035AB0 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x140039030 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1401883A4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x140301990 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140317908 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x140323510 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     _DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE @ 0x140389F78 (_DXGADAPTER--SubmitPresentHistoryTokenFromVm_--_45_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1403A2CD8 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 */

__int64 __fastcall DxgkSubmitPresentToHwQueue(ULONG64 a1)
{
  struct DXGGLOBAL *Global; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // r14
  __int64 v5; // r8
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  int *v17; // r9
  struct DXGGLOBAL *v18; // rax
  const void *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  const void *v26; // rdx
  void *v27; // rdx
  PVOID v28; // r9
  unsigned __int64 v29; // r12
  char *v30; // rcx
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // rbx
  unsigned int v34; // ecx
  int v35; // ecx
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  __int64 v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGGLOBAL *v42; // rax
  struct DXGDEVICE *v43; // rdx
  __int64 v44; // r9
  _QWORD *Pool2; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int *v49; // r9
  struct DXGGLOBAL *v50; // rax
  struct DXGPROCESS *v51; // r12
  _QWORD *v52; // r9
  unsigned int v53; // r15d
  unsigned int v54; // edi
  unsigned int *v55; // rdx
  unsigned int v56; // edx
  unsigned int v57; // eax
  unsigned int v58; // edx
  __int64 v59; // r8
  unsigned int v60; // ecx
  int v61; // ecx
  __int64 v62; // rdx
  _QWORD *v63; // r8
  char *v64; // rcx
  _QWORD *v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r9
  unsigned int *v69; // rdx
  __int64 v70; // rdi
  unsigned int *v71; // rcx
  struct DXGADAPTER *v72; // rdi
  int v73; // r15d
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  struct DXGGLOBAL *v77; // rax
  int v78; // ecx
  __int64 v79; // r9
  int v80; // edi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  int *v84; // r9
  struct DXGGLOBAL *v85; // rax
  int v86; // eax
  PVOID v87; // rdi
  void *v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  struct DXGGLOBAL *v92; // rax
  __int64 v93; // rcx
  struct DXGPROCESS *v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  int v101; // [rsp+60h] [rbp-2E8h] BYREF
  __int64 v102; // [rsp+68h] [rbp-2E0h]
  _DWORD *v103; // [rsp+70h] [rbp-2D8h]
  int *v104; // [rsp+78h] [rbp-2D0h]
  char v105; // [rsp+80h] [rbp-2C8h]
  int AllocationInfo; // [rsp+88h] [rbp-2C0h] BYREF
  PVOID P; // [rsp+90h] [rbp-2B8h] BYREF
  _BYTE v108[32]; // [rsp+98h] [rbp-2B0h] BYREF
  unsigned int v109; // [rsp+B8h] [rbp-290h]
  __int64 v110; // [rsp+C0h] [rbp-288h] BYREF
  int v111; // [rsp+C8h] [rbp-280h]
  PVOID v112; // [rsp+D0h] [rbp-278h]
  _BYTE v113[32]; // [rsp+D8h] [rbp-270h] BYREF
  unsigned int v114; // [rsp+F8h] [rbp-250h]
  _BYTE v115[16]; // [rsp+100h] [rbp-248h] BYREF
  int v116; // [rsp+110h] [rbp-238h]
  struct DXGDEVICE *v117; // [rsp+118h] [rbp-230h] BYREF
  struct DXGPROCESS *v118; // [rsp+120h] [rbp-228h]
  _BYTE v119[24]; // [rsp+128h] [rbp-220h] BYREF
  void *Src; // [rsp+140h] [rbp-208h] BYREF
  struct DXGDEVICE *v121; // [rsp+148h] [rbp-200h] BYREF
  __int64 v122; // [rsp+150h] [rbp-1F8h]
  PVOID v123[2]; // [rsp+158h] [rbp-1F0h] BYREF
  _QWORD *v124; // [rsp+168h] [rbp-1E0h]
  _QWORD v125[6]; // [rsp+170h] [rbp-1D8h] BYREF
  char v126; // [rsp+1A0h] [rbp-1A8h]
  ULONG64 v127; // [rsp+1A8h] [rbp-1A0h]
  PVOID v128; // [rsp+1B0h] [rbp-198h]
  PVOID Entry; // [rsp+1B8h] [rbp-190h] BYREF
  __int64 v130; // [rsp+1C0h] [rbp-188h]
  _BYTE v131[24]; // [rsp+1C8h] [rbp-180h] BYREF
  void *v132; // [rsp+1E0h] [rbp-168h]
  _BYTE v133[24]; // [rsp+1E8h] [rbp-160h] BYREF
  _BYTE v134[80]; // [rsp+200h] [rbp-148h] BYREF
  PVOID v135; // [rsp+250h] [rbp-F8h] BYREF
  _BYTE v136[16]; // [rsp+258h] [rbp-F0h] BYREF
  unsigned int v137; // [rsp+268h] [rbp-E0h]
  _BYTE v138[24]; // [rsp+270h] [rbp-D8h] BYREF
  DXGADAPTER *v139; // [rsp+288h] [rbp-C0h]

  v127 = a1;
  AllocationInfo = -1073741811;
  Global = DXGGLOBAL::GetGlobal();
  v3 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1104));
  v4 = v3;
  v123[1] = v3;
  if ( !v3 )
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 2330;
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
  memset(v3, 0, 0x5F8uLL);
  v123[0] = v4;
  v6 = 0LL;
  if ( bTracingEnabled )
    v6 = v4;
  v102 = 0LL;
  v101 = 2020;
  v104 = &AllocationInfo;
  v105 = 0;
  v103 = v6;
  if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)&AllocationInfo, (__int64)&EventProfilerEnter, v5, 2020);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v101, 2020);
  Current = DXGPROCESS::GetCurrent(v7);
  v118 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 2358;
    v12 = PsGetCurrentProcess(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x, returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
    v16 = v105 == 0;
    goto LABEL_10;
  }
  v135 = 0LL;
  v137 = 0;
  P = 0LL;
  v109 = 0;
  v20 = (const void *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v20 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v4, v20, 0x5D8uLL);
  v23 = (unsigned int)(v4[23] + 1);
  v116 = v23;
  if ( (unsigned int)(v23 - 1) > 0x40 )
  {
    WdLogSingleEntry1(2LL, (unsigned int)v23);
    WdLogGlobalForLineNumber = 2377;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"SubmitPresentToHwQueue passed a wrong number of broadcast contexts 0x%d",
      (unsigned int)v23,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v108 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v109 = 0;
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
    if ( v105 )
    {
      if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          *((_QWORD *)v103 + 11),
          *((_QWORD *)v103 + 10),
          *v103,
          v103[14],
          *((_QWORD *)v103 + 10),
          *((_QWORD *)v103 + 11),
          v103[274],
          *v104);
    }
    else if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v98,
        v100,
        *v103,
        *((_QWORD *)v103 + 1),
        v103[4],
        v103[21],
        v103[22],
        *v104,
        v103[5],
        v103[6]);
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v99, (__int64)&EventProfilerExit, v100, v101);
    DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE(v123);
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64)&v135, v23, v21, v22)
    || !PagedPoolZeroedArray<DXGHWQUEUE *,4>::AllocateElements((__int64 *)&P, v23, v24, v25) )
  {
    if ( P != v108 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v109 = 0;
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
    if ( v105 )
    {
      if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          *((_QWORD *)v103 + 11),
          *((_QWORD *)v103 + 10),
          *v103,
          v103[14],
          *((_QWORD *)v103 + 10),
          *((_QWORD *)v103 + 11),
          v103[274],
          *v104);
    }
    else if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v95,
        v97,
        *v103,
        *((_QWORD *)v103 + 1),
        v103[4],
        v103[21],
        v103[22],
        *v104,
        v103[5],
        v103[6]);
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v96, (__int64)&EventProfilerExit, v97, v101);
    DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE(v123);
    return 3221225495LL;
  }
  Src = 0LL;
  v26 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v26 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v26, 8uLL);
  v27 = Src;
  v132 = Src;
  v28 = v135;
  v128 = v135;
  v29 = (unsigned int)v23;
  v30 = (char *)Src + 4 * v23;
  if ( v30 < Src || (unsigned __int64)v30 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v28, v27, 4 * v23);
  v31 = 0LL;
  v122 = 0LL;
  if ( (v4[22] & 0x10000000) != 0 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v133, Current);
    v32 = (v4[362] >> 6) & 0xFFFFFF;
    if ( v32 < *((_DWORD *)Current + 74) )
    {
      v33 = *((_QWORD *)Current + 35) + 16LL * v32;
      v34 = *(_DWORD *)(v33 + 8);
      if ( v4[362] >> 30 == ((v34 >> 5) & 3) && (v34 & 0x2000) == 0 )
      {
        v35 = v34 & 0x1F;
        if ( v35 )
        {
          if ( v35 == 7 )
          {
            v31 = *(_QWORD *)v33;
            goto LABEL_39;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v31 = 0LL;
LABEL_39:
    v122 = v31;
    if ( !v31 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v133);
      if ( P != v108 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v109 = 0;
      if ( v135 != v136 && v135 )
        ExFreePoolWithTag(v135, 0);
      v135 = 0LL;
      v137 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
      v16 = v105 == 0;
LABEL_10:
      v17 = v103;
      if ( v16 )
        goto LABEL_14;
      goto LABEL_11;
    }
    _m_prefetchw((const void *)(v31 + 32));
    v36 = *(_QWORD *)(v31 + 32);
    if ( v36 )
    {
      do
      {
        v37 = v36;
        v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 32), v36 + 1, v36);
      }
      while ( v37 != v36 && v36 );
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v133);
    v121 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v117, *v4, Current, &v121);
    if ( !v121 )
    {
      if ( v117 && _InterlockedExchangeAdd64((volatile signed __int64 *)v117 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v117 + 2), v117);
      goto LABEL_55;
    }
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       Current,
                       (ADAPTER_RENDER **)v121,
                       v4[5],
                       (struct INDIRECT_RESOURCE_INFO *)(v4 + 379));
    if ( AllocationInfo < 0 )
    {
      WdLogSingleEntry1(3LL, (unsigned int)v4[5]);
      WdLogGlobalForLineNumber = 2448;
    }
    if ( v117 && _InterlockedExchangeAdd64((volatile signed __int64 *)v117 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v117 + 2), v117);
    LODWORD(v23) = v116;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v115,
    *(_DWORD *)v135,
    Current,
    (struct DXGHWQUEUE **)P,
    0,
    1);
  if ( !*(_QWORD *)P )
  {
    WdLogSingleEntry3(2LL, Current, *(unsigned int *)v135, -1073741811LL);
    WdLogGlobalForLineNumber = 2456;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)Current,
      *(unsigned int *)v135,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_72;
  }
  *((_QWORD *)v4 + 188) = P;
  if ( (v4[22] & 0x10000000) != 0 )
    v38 = v31;
  else
    v38 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_BYTE *)(v38 + 434) && v4[23] )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v115);
    if ( v31 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
    if ( P != v108 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v109 = 0;
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
    if ( v105 )
    {
      if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v39,
          v41,
          *v103,
          v103[14],
          *((_QWORD *)v103 + 10),
          *((_QWORD *)v103 + 11),
          v103[274],
          *v104);
    }
    else if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v39,
        v41,
        *v103,
        *((_QWORD *)v103 + 1),
        v103[4],
        v103[21],
        v103[22],
        *v104,
        v103[5],
        v103[6]);
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v101);
    v42 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v42 + 1104), v4);
    return 3221225474LL;
  }
  v43 = *(struct DXGDEVICE **)(v38 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 2976LL) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, v38);
    WdLogGlobalForLineNumber = 2473;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Present is not supported on MCDM adapter context 0x%I64x",
      v38,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_72;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v110, v43);
  Pool2 = 0LL;
  v112 = 0LL;
  v114 = 0;
  if ( (unsigned int)v23 <= 4 )
  {
    Pool2 = v113;
    v112 = v113;
    if ( (_DWORD)v23 )
    {
      memset(v113, 0, 8 * v29);
      Pool2 = v112;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v29 < 8 )
      goto LABEL_106;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v29, 1265072196LL, v44);
    v112 = Pool2;
  }
  v114 = v23;
LABEL_106:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2485;
    goto LABEL_108;
  }
  *Pool2 = v38;
  v51 = v118;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v131, v118);
  v52 = v112;
  v124 = v112;
  v53 = 0;
  if ( !v4[23] )
  {
LABEL_159:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v131);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v125,
      v112,
      v114,
      v68,
      1);
    if ( v126 )
    {
      if ( v125[0] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2562;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v125);
        goto LABEL_164;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2557;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v125);
LABEL_108:
      if ( v112 != v113 && v112 )
        ExFreePoolWithTag(v112, 0);
      v114 = 0;
      v112 = 0LL;
      if ( v110 && v111 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v110 + 136));
        KeLeaveCriticalRegion();
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v115);
      if ( v31 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
      if ( P != v108 && P )
        ExFreePoolWithTag(P, 0);
      v109 = 0;
      P = 0LL;
      if ( v135 != v136 && v135 )
        ExFreePoolWithTag(v135, 0);
      v135 = 0LL;
      v137 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
      v49 = v103;
      if ( v105 )
      {
LABEL_123:
        if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            v46,
            v48,
            *v49,
            v49[14],
            *((_QWORD *)v49 + 10),
            *((_QWORD *)v49 + 11),
            v49[274],
            *v104);
LABEL_129:
        if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v47, (__int64)&EventProfilerExit, v48, v101);
        v50 = DXGGLOBAL::GetGlobal();
        ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v50 + 1104), v4);
        return 3221225495LL;
      }
LABEL_126:
      if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v46,
          v48,
          *v49,
          *((_QWORD *)v49 + 1),
          v49[4],
          v49[21],
          v49[22],
          *v104,
          v49[5],
          v49[6]);
      goto LABEL_129;
    }
    *((_QWORD *)v4 + 187) = v112;
    *((_BYTE *)v4 + 1512) = 1;
    v72 = *(struct DXGADAPTER **)(*(_QWORD *)(v38 + 16) + 1880LL);
    v73 = DXGCONTEXT::CopyPresentArgs((DXGCONTEXT *)v38, (struct _D3DKMT_PRESENT *)v4, v51);
    AllocationInfo = v73;
    if ( v73 < 0 )
    {
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v125);
      if ( v112 != v113 && v112 )
        ExFreePoolWithTag(v112, 0);
      v112 = 0LL;
      v114 = 0;
      if ( v110 && v111 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v110 + 136));
        KeLeaveCriticalRegion();
      }
LABEL_186:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v115);
      if ( v31 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
      if ( P != v108 && P )
        ExFreePoolWithTag(P, 0);
      v109 = 0;
      P = 0LL;
      if ( v135 != v136 && v135 )
        ExFreePoolWithTag(v135, 0);
      v135 = 0LL;
      v137 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
      if ( v105 )
      {
        if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            v74,
            v76,
            *v103,
            v103[14],
            *((_QWORD *)v103 + 10),
            *((_QWORD *)v103 + 11),
            v103[274],
            *v104);
      }
      else if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v74,
          v76,
          *v103,
          *((_QWORD *)v103 + 1),
          v103[4],
          v103[21],
          v103[22],
          *v104,
          v103[5],
          v103[6]);
      }
      if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v75, (__int64)&EventProfilerExit, v76, v101);
      v77 = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v77 + 1104), v4);
      return (unsigned int)v73;
    }
    v78 = v4[22];
    if ( (v78 & 0x10000000) != 0 )
    {
      if ( !v72 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2583;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Indirect Display present has to be on a context associated with Dod",
          2583LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_208:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v125);
        goto LABEL_164;
      }
      if ( (*((_DWORD *)v72 + 111) & 0x100) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2589;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Indirect Display present can only be used with a indirect display Dod driver",
          2589LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_208;
      }
    }
    else if ( v72 )
    {
      if ( (*((_DWORD *)v72 + 111) & 0x100) != 0 && (v78 & 0x18000) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2599;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"No non-direct display presents can go to indirect display device",
          2599LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_208;
      }
    }
    else
    {
      v72 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 16LL);
    }
    CWin32kLocks::CWin32kLocks((CWin32kLocks *)v134, *((const struct _DXGKWIN32KENG_INTERFACE *const *)v51 + 11), v72);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v119,
      *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v138, *(_QWORD *)(v38 + 16), 2, v79, 0);
    v80 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v138, 0LL);
    AllocationInfo = v80;
    if ( v80 >= 0 )
    {
      if ( (v4[22] & 0x200000) == 0 )
      {
        CVidSchSubmitData::CVidSchSubmitData(
          (CVidSchSubmitData *)&Entry,
          *(struct ADAPTER_RENDER **)(*(_QWORD *)(v38 + 16) + 16LL),
          1);
        v87 = Entry;
        if ( !Entry )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 2659;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            0xFFFFFFFFLL,
            L"Failed to allocate VidSchSubmitData",
            2659LL,
            0LL,
            0LL,
            0LL,
            0LL);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v119);
          CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v134);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v125);
          if ( v112 != v113 && v112 )
            ExFreePoolWithTag(v112, 0);
          v112 = 0LL;
          v114 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v110);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v115);
          if ( v31 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
          if ( P != v108 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v109 = 0;
          if ( v135 != v136 && v135 )
            ExFreePoolWithTag(v135, 0);
          v135 = 0LL;
          v137 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
          v49 = v103;
          if ( v105 )
            goto LABEL_123;
          goto LABEL_126;
        }
        AllocationInfo = DXGCONTEXT::Present(
                           (DXGCONTEXT *)v38,
                           (struct _D3DKMT_PRESENT *)v4,
                           (struct COREDEVICEACCESS *)v138,
                           (struct DXGADAPTERSTOPRESETLOCKSHARED *)v119,
                           (struct CWin32kLocks *)v134,
                           (struct DXGCONTEXT **)v112,
                           (struct VIDSCH_SUBMIT_DATA_BASE *)Entry);
        if ( AllocationInfo == -1071775482 )
        {
          if ( !DXGADAPTER::IsCoreResourceSharedOwner(v139) )
          {
            v73 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v138, 0LL);
            if ( v73 < 0 )
            {
              ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v130 + 1424), v87);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v119);
              CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v134);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v125);
              if ( v112 != v113 && v112 )
                ExFreePoolWithTag(v112, 0);
              v112 = 0LL;
              v114 = 0;
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v110);
              goto LABEL_186;
            }
          }
          DXGDEVICE::CloseInternalCddPrimaryHandle(*(DXGDEVICE **)(v38 + 16), (struct COREDEVICEACCESS *)v138);
        }
        ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v130 + 1424), v87);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v119);
        if ( AllocationInfo >= 0 )
        {
          v88 = (void *)(v127 + 1496);
          if ( v127 + 1496 >= MmUserProbeAddress )
            v88 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v88, v4 + 378, 1uLL);
        }
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v134);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v125);
        if ( v112 != v113 && v112 )
          ExFreePoolWithTag(v112, 0);
        v112 = 0LL;
        v114 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v110);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v115);
        if ( v31 )
          DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
        if ( P != v108 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v109 = 0;
        if ( v135 != v136 && v135 )
          ExFreePoolWithTag(v135, 0);
        v135 = 0LL;
        v137 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
        if ( v105 )
        {
          if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              v89,
              v91,
              *v103,
              v103[14],
              *((_QWORD *)v103 + 10),
              *((_QWORD *)v103 + 11),
              v103[274],
              *v104);
        }
        else if ( v103 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          McTemplateK0qpqqqqpp_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            v89,
            v91,
            *v103,
            *((_QWORD *)v103 + 1),
            v103[4],
            v103[21],
            v103[22],
            *v104,
            v103[5],
            v103[6]);
        }
        if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v90, (__int64)&EventProfilerExit, v91, v101);
        v92 = DXGGLOBAL::GetGlobal();
        ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v92 + 1104), v4);
        v94 = DXGPROCESS::GetCurrent(v93);
        DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v94 + 8) + 104LL));
        return (unsigned int)AllocationInfo;
      }
      v86 = SubmitPresentHistoryTokenPreparation(
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v119,
              (struct COREDEVICEACCESS *)v138,
              *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 16LL),
              (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v4 + 90),
              *((_QWORD *)v4 + 44),
              (v4[22] & 0x10) != 0);
      AllocationInfo = v86;
      if ( v86 >= 0 )
      {
        v80 = SubmitPresentHistoryToken(
                (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v4 + 90),
                (struct COREDEVICEACCESS *)v138,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)v119,
                (struct CWin32kLocks *)v134,
                0,
                0LL,
                (struct DXGK_PRESENT_PARAMS *)v4,
                0LL,
                (struct DXGCONTEXT *)v38,
                0LL,
                0LL);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v119);
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v134);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v125);
        if ( v112 != v113 && v112 )
          ExFreePoolWithTag(v112, 0);
        v112 = 0LL;
        v114 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v110);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v115);
        if ( v31 )
          DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
        if ( P != v108 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v109 = 0;
        if ( v135 != v136 && v135 )
          ExFreePoolWithTag(v135, 0);
        v135 = 0LL;
        v137 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
        v84 = v103;
        if ( v105 )
          goto LABEL_230;
        goto LABEL_233;
      }
      WdLogSingleEntry1(2LL, v86);
      WdLogGlobalForLineNumber = 2639;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkSubmitPresentToHwQueue failed, SubmitPresentHistoryTokenPreparation returned 0x%I64x",
        AllocationInfo,
        0LL,
        0LL,
        0LL,
        0LL);
      v80 = AllocationInfo;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v138);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v119);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v134);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v125);
    if ( v112 != v113 && v112 )
      ExFreePoolWithTag(v112, 0);
    v112 = 0LL;
    v114 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v110);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v115);
    if ( v31 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
    if ( P != v108 && P )
      ExFreePoolWithTag(P, 0);
    v109 = 0;
    P = 0LL;
    if ( v135 != v136 && v135 )
      ExFreePoolWithTag(v135, 0);
    v135 = 0LL;
    v137 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
    v84 = v103;
    if ( v105 )
    {
LABEL_230:
      if ( v84 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v81,
          v83,
          *v84,
          v84[14],
          *((_QWORD *)v84 + 10),
          *((_QWORD *)v84 + 11),
          v84[274],
          *v104);
LABEL_236:
      if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v82, (__int64)&EventProfilerExit, v83, v101);
      v85 = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v85 + 1104), v4);
      return (unsigned int)v80;
    }
LABEL_233:
    if ( v84 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v81,
        v83,
        *v84,
        *((_QWORD *)v84 + 1),
        v84[4],
        v84[21],
        v84[22],
        *v104,
        v84[5],
        v84[6]);
    goto LABEL_236;
  }
  v54 = 1;
  while ( 1 )
  {
    if ( v54 >= v137 )
      v55 = (unsigned int *)v135;
    else
      v55 = (unsigned int *)((char *)v135 + 4 * v54);
    v56 = *v55;
    v57 = (v56 >> 6) & 0xFFFFFF;
    v58 = v56 >> 30;
    if ( v57 >= *((_DWORD *)v51 + 74) )
      goto LABEL_144;
    v59 = *((_QWORD *)v51 + 35) + 16LL * v57;
    v60 = *(_DWORD *)(v59 + 8);
    if ( v58 != ((v60 >> 5) & 3) )
      goto LABEL_144;
    if ( (v60 & 0x2000) != 0 )
      goto LABEL_144;
    v61 = v60 & 0x1F;
    if ( !v61 )
      goto LABEL_144;
    if ( v61 != 15 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v52 = v124;
LABEL_144:
      v62 = 0LL;
      goto LABEL_145;
    }
    v62 = *(_QWORD *)v59;
LABEL_145:
    v63 = v54 >= v109 ? P : (char *)P + 8 * v54;
    *v63 = v62;
    v64 = (char *)P;
    v65 = v54 >= v109 ? P : (char *)P + 8 * v54;
    if ( !*v65 )
      break;
    if ( v54 < v109 )
      v64 = (char *)P + 8 * v54;
    v66 = 8LL * v54;
    *(_QWORD *)((char *)v112 + v66) = *(_QWORD *)(*(_QWORD *)v64 + 16LL);
    v67 = *(_QWORD *)((char *)v112 + v66);
    if ( !v67 || *(_QWORD *)(v67 + 16) != *(_QWORD *)(v38 + 16) )
    {
      WdLogSingleEntry4(2LL, v38, (unsigned int)v4[v53 + 24], v53, -1073741811LL);
      WdLogGlobalForLineNumber = 2531;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        v38,
        (unsigned int)v4[v53 + 24],
        v53,
        -1073741811LL,
        0LL);
      goto LABEL_163;
    }
    if ( *(_DWORD *)(v52[(unsigned __int64)v66 / 8] + 388LL) <= *(_DWORD *)(v52[v53] + 388LL) )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 2539;
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
      goto LABEL_163;
    }
    ++v53;
    ++v54;
    if ( v53 >= v4[23] )
      goto LABEL_159;
  }
  if ( v54 >= v137 )
    v69 = (unsigned int *)v135;
  else
    v69 = (unsigned int *)((char *)v135 + 4 * v54);
  v70 = v53 + 1;
  WdLogSingleEntry2(2LL, *v69, (unsigned int)v70);
  WdLogGlobalForLineNumber = 2518;
  if ( (unsigned int)v70 >= v137 )
    v71 = (unsigned int *)v135;
  else
    v71 = (unsigned int *)((char *)v135 + 4 * v70);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"DxgkSubmitPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d",
    *v71,
    (unsigned int)v70,
    0LL,
    0LL,
    0LL);
LABEL_163:
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v131);
LABEL_164:
  if ( v112 != v113 && v112 )
    ExFreePoolWithTag(v112, 0);
  v112 = 0LL;
  v114 = 0;
  if ( v110 && v111 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v110 + 136));
    KeLeaveCriticalRegion();
  }
LABEL_72:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v115);
  if ( v31 )
LABEL_55:
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v31);
  if ( P != v108 && P )
    ExFreePoolWithTag(P, 0);
  v109 = 0;
  P = 0LL;
  if ( v135 != v136 && v135 )
    ExFreePoolWithTag(v135, 0);
  v135 = 0LL;
  v137 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101);
  v17 = v103;
  if ( v105 )
  {
LABEL_11:
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v13,
        v15,
        *v17,
        v17[14],
        *((_QWORD *)v17 + 10),
        *((_QWORD *)v17 + 11),
        v17[274],
        *v104);
    goto LABEL_17;
  }
LABEL_14:
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      v13,
      v15,
      *v17,
      *((_QWORD *)v17 + 1),
      v17[4],
      v17[21],
      v17[22],
      *v104,
      v17[5],
      v17[6]);
LABEL_17:
  if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v101);
  v18 = DXGGLOBAL::GetGlobal();
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v18 + 1104), v4);
  return 3221225485LL;
}
