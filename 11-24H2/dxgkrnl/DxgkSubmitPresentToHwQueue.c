/*
 * XREFs of DxgkSubmitPresentToHwQueue @ 0x14041D400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x14000E170 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1400106AC (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x140011470 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x14001F490 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002BA80 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x140033AFC (--1CWin32kLocks@@QEAA@XZ.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1400358E8 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x140038E40 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x14018A6B4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1402B8614 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$03@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1402BA140 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1402F3D24 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140301AA8 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     _DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE @ 0x14037605C (_DXGADAPTER--SubmitPresentHistoryTokenFromVm_--_45_--ENSURE_DELETE--_ENSURE_DELETE.c)
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
  __int64 v21; // rdi
  const void *v22; // rdx
  void *v23; // rdx
  PVOID v24; // r9
  unsigned __int64 v25; // r12
  char *v26; // rcx
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rbx
  unsigned int v30; // ecx
  int v31; // ecx
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGGLOBAL *v38; // rax
  struct DXGDEVICE *v39; // rdx
  _QWORD *Pool2; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int *v44; // r9
  struct DXGGLOBAL *v45; // rax
  struct DXGPROCESS *v46; // r12
  _QWORD *v47; // r9
  unsigned int v48; // r15d
  unsigned int v49; // edi
  unsigned int *v50; // rdx
  unsigned int v51; // edx
  unsigned int v52; // eax
  unsigned int v53; // edx
  __int64 v54; // r8
  unsigned int v55; // ecx
  int v56; // ecx
  __int64 v57; // rdx
  _QWORD *v58; // r8
  char *v59; // rcx
  _QWORD *v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r9
  unsigned int *v64; // rdx
  __int64 v65; // rdi
  unsigned int *v66; // rcx
  struct DXGADAPTER *v67; // rdi
  int v68; // r15d
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  struct DXGGLOBAL *v72; // rax
  int v73; // ecx
  __int64 v74; // r9
  int v75; // edi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  int *v79; // r9
  struct DXGGLOBAL *v80; // rax
  int v81; // eax
  PVOID v82; // rdi
  void *v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  struct DXGGLOBAL *v87; // rax
  __int64 v88; // rcx
  struct DXGPROCESS *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  int v96; // [rsp+60h] [rbp-2E8h] BYREF
  __int64 v97; // [rsp+68h] [rbp-2E0h]
  _DWORD *v98; // [rsp+70h] [rbp-2D8h]
  int *v99; // [rsp+78h] [rbp-2D0h]
  char v100; // [rsp+80h] [rbp-2C8h]
  int AllocationInfo; // [rsp+88h] [rbp-2C0h] BYREF
  PVOID P; // [rsp+90h] [rbp-2B8h] BYREF
  _BYTE v103[32]; // [rsp+98h] [rbp-2B0h] BYREF
  unsigned int v104; // [rsp+B8h] [rbp-290h]
  __int64 v105; // [rsp+C0h] [rbp-288h] BYREF
  int v106; // [rsp+C8h] [rbp-280h]
  PVOID v107; // [rsp+D0h] [rbp-278h]
  _BYTE v108[32]; // [rsp+D8h] [rbp-270h] BYREF
  unsigned int v109; // [rsp+F8h] [rbp-250h]
  _BYTE v110[16]; // [rsp+100h] [rbp-248h] BYREF
  int v111; // [rsp+110h] [rbp-238h]
  struct DXGDEVICE *v112; // [rsp+118h] [rbp-230h] BYREF
  struct DXGPROCESS *v113; // [rsp+120h] [rbp-228h]
  _BYTE v114[24]; // [rsp+128h] [rbp-220h] BYREF
  void *Src; // [rsp+140h] [rbp-208h] BYREF
  struct DXGDEVICE *v116; // [rsp+148h] [rbp-200h] BYREF
  __int64 v117; // [rsp+150h] [rbp-1F8h]
  PVOID v118[2]; // [rsp+158h] [rbp-1F0h] BYREF
  _QWORD *v119; // [rsp+168h] [rbp-1E0h]
  _QWORD v120[6]; // [rsp+170h] [rbp-1D8h] BYREF
  char v121; // [rsp+1A0h] [rbp-1A8h]
  ULONG64 v122; // [rsp+1A8h] [rbp-1A0h]
  PVOID v123; // [rsp+1B0h] [rbp-198h]
  PVOID Entry; // [rsp+1B8h] [rbp-190h] BYREF
  __int64 v125; // [rsp+1C0h] [rbp-188h]
  _BYTE v126[24]; // [rsp+1C8h] [rbp-180h] BYREF
  void *v127; // [rsp+1E0h] [rbp-168h]
  _BYTE v128[24]; // [rsp+1E8h] [rbp-160h] BYREF
  _BYTE v129[80]; // [rsp+200h] [rbp-148h] BYREF
  PVOID v130; // [rsp+250h] [rbp-F8h] BYREF
  _BYTE v131[16]; // [rsp+258h] [rbp-F0h] BYREF
  unsigned int v132; // [rsp+268h] [rbp-E0h]
  _BYTE v133[24]; // [rsp+270h] [rbp-D8h] BYREF
  DXGADAPTER *v134; // [rsp+288h] [rbp-C0h]

  v122 = a1;
  AllocationInfo = -1073741811;
  Global = DXGGLOBAL::GetGlobal();
  v3 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
  v4 = v3;
  v118[1] = v3;
  if ( !v3 )
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 2330;
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
  memset(v3, 0, 0x5F8uLL);
  v118[0] = v4;
  v6 = 0LL;
  if ( bTracingEnabled )
    v6 = v4;
  v97 = 0LL;
  v96 = 2020;
  v99 = &AllocationInfo;
  v100 = 0;
  v98 = v6;
  if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)&AllocationInfo, (__int64)&EventProfilerEnter, v5, 2020);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v96, 2020);
  Current = DXGPROCESS::GetCurrent(v7);
  v113 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 2358;
    v12 = PsGetCurrentProcess(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x, returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
    v16 = v100 == 0;
    goto LABEL_10;
  }
  v130 = 0LL;
  v132 = 0;
  P = 0LL;
  v104 = 0;
  v20 = (const void *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v20 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v4, v20, 0x5D8uLL);
  v21 = (unsigned int)(v4[23] + 1);
  v111 = v21;
  if ( (unsigned int)(v21 - 1) > 0x40 )
  {
    WdLogSingleEntry1(2LL, (unsigned int)v21);
    WdLogGlobalForLineNumber = 2377;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"SubmitPresentToHwQueue passed a wrong number of broadcast contexts 0x%d",
      (unsigned int)v21,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v103 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v104 = 0;
    if ( v130 != v131 && v130 )
      ExFreePoolWithTag(v130, 0);
    v130 = 0LL;
    v132 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
    if ( v100 )
    {
      if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          *((_QWORD *)v98 + 11),
          *((_QWORD *)v98 + 10),
          *v98,
          v98[14],
          *((_QWORD *)v98 + 10),
          *((_QWORD *)v98 + 11),
          v98[274],
          *v99);
    }
    else if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v93,
        v95,
        *v98,
        *((_QWORD *)v98 + 1),
        v98[4],
        v98[21],
        v98[22],
        *v99,
        v98[5],
        v98[6]);
    }
    if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v94, (__int64)&EventProfilerExit, v95, v96);
    DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE(v118);
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64)&v130, v21)
    || !PagedPoolZeroedArray<DXGHWQUEUE *,4>::AllocateElements((__int64 *)&P, v21) )
  {
    if ( P != v103 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v104 = 0;
    if ( v130 != v131 && v130 )
      ExFreePoolWithTag(v130, 0);
    v130 = 0LL;
    v132 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
    if ( v100 )
    {
      if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          *((_QWORD *)v98 + 11),
          *((_QWORD *)v98 + 10),
          *v98,
          v98[14],
          *((_QWORD *)v98 + 10),
          *((_QWORD *)v98 + 11),
          v98[274],
          *v99);
    }
    else if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v90,
        v92,
        *v98,
        *((_QWORD *)v98 + 1),
        v98[4],
        v98[21],
        v98[22],
        *v99,
        v98[5],
        v98[6]);
    }
    if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v91, (__int64)&EventProfilerExit, v92, v96);
    DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_45_::ENSURE_DELETE::_ENSURE_DELETE(v118);
    return 3221225495LL;
  }
  Src = 0LL;
  v22 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v22 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v22, 8uLL);
  v23 = Src;
  v127 = Src;
  v24 = v130;
  v123 = v130;
  v25 = (unsigned int)v21;
  v26 = (char *)Src + 4 * v21;
  if ( v26 < Src || (unsigned __int64)v26 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v24, v23, 4 * v21);
  v27 = 0LL;
  v117 = 0LL;
  if ( (v4[22] & 0x10000000) != 0 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v128, Current);
    v28 = (v4[362] >> 6) & 0xFFFFFF;
    if ( v28 < *((_DWORD *)Current + 74) )
    {
      v29 = *((_QWORD *)Current + 35) + 16LL * v28;
      v30 = *(_DWORD *)(v29 + 8);
      if ( v4[362] >> 30 == ((v30 >> 5) & 3) && (v30 & 0x2000) == 0 )
      {
        v31 = v30 & 0x1F;
        if ( v31 )
        {
          if ( v31 == 7 )
          {
            v27 = *(_QWORD *)v29;
            goto LABEL_39;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v27 = 0LL;
LABEL_39:
    v117 = v27;
    if ( !v27 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v128);
      if ( P != v103 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v104 = 0;
      if ( v130 != v131 && v130 )
        ExFreePoolWithTag(v130, 0);
      v130 = 0LL;
      v132 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
      v16 = v100 == 0;
LABEL_10:
      v17 = v98;
      if ( v16 )
        goto LABEL_14;
      goto LABEL_11;
    }
    _m_prefetchw((const void *)(v27 + 32));
    v32 = *(_QWORD *)(v27 + 32);
    if ( v32 )
    {
      do
      {
        v33 = v32;
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 32), v32 + 1, v32);
      }
      while ( v33 != v32 && v32 );
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v128);
    v116 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v112, *v4, (struct _KTHREAD **)Current, &v116);
    if ( !v116 )
    {
      if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
      goto LABEL_55;
    }
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       Current,
                       (ADAPTER_RENDER **)v116,
                       v4[5],
                       (struct INDIRECT_RESOURCE_INFO *)(v4 + 379));
    if ( AllocationInfo < 0 )
    {
      WdLogSingleEntry1(3LL, (unsigned int)v4[5]);
      WdLogGlobalForLineNumber = 2448;
    }
    if ( v112 && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
    LODWORD(v21) = v111;
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v110,
    *(_DWORD *)v130,
    (struct _KTHREAD **)Current,
    (struct DXGHWQUEUE **)P,
    0,
    1);
  if ( !*(_QWORD *)P )
  {
    WdLogSingleEntry3(2LL, Current, *(unsigned int *)v130, -1073741811LL);
    WdLogGlobalForLineNumber = 2456;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)Current,
      *(unsigned int *)v130,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_72;
  }
  *((_QWORD *)v4 + 188) = P;
  if ( (v4[22] & 0x10000000) != 0 )
    v34 = v27;
  else
    v34 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_BYTE *)(v34 + 434) && v4[23] )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v110);
    if ( v27 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v27);
    if ( P != v103 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v104 = 0;
    if ( v130 != v131 && v130 )
      ExFreePoolWithTag(v130, 0);
    v130 = 0LL;
    v132 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
    if ( v100 )
    {
      if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v35,
          v37,
          *v98,
          v98[14],
          *((_QWORD *)v98 + 10),
          *((_QWORD *)v98 + 11),
          v98[274],
          *v99);
    }
    else if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v35,
        v37,
        *v98,
        *((_QWORD *)v98 + 1),
        v98[4],
        v98[21],
        v98[22],
        *v99,
        v98[5],
        v98[6]);
    }
    if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v96);
    v38 = DXGGLOBAL::GetGlobal();
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v38 + 1136), v4);
    return 3221225474LL;
  }
  v39 = *(struct DXGDEVICE **)(v34 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v39 + 2) + 16LL) + 2976LL) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, v34);
    WdLogGlobalForLineNumber = 2473;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Present is not supported on MCDM adapter context 0x%I64x",
      v34,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_72;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105, v39);
  Pool2 = 0LL;
  v107 = 0LL;
  v109 = 0;
  if ( (unsigned int)v21 <= 4 )
  {
    Pool2 = v108;
    v107 = v108;
    if ( (_DWORD)v21 )
    {
      memset(v108, 0, 8 * v25);
      Pool2 = v107;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 8 )
      goto LABEL_106;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v25, 1265072196LL);
    v107 = Pool2;
  }
  v109 = v21;
LABEL_106:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2485;
    goto LABEL_108;
  }
  *Pool2 = v34;
  v46 = v113;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v126, v113);
  v47 = v107;
  v119 = v107;
  v48 = 0;
  if ( !v4[23] )
  {
LABEL_159:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v126);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v120,
      v107,
      v109,
      v63,
      1);
    if ( v121 )
    {
      if ( v120[0] )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2562;
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
        goto LABEL_164;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2557;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
LABEL_108:
      if ( v107 != v108 && v107 )
        ExFreePoolWithTag(v107, 0);
      v109 = 0;
      v107 = 0LL;
      if ( v105 && v106 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v105 + 136));
        KeLeaveCriticalRegion();
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v110);
      if ( v27 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v27);
      if ( P != v103 && P )
        ExFreePoolWithTag(P, 0);
      v104 = 0;
      P = 0LL;
      if ( v130 != v131 && v130 )
        ExFreePoolWithTag(v130, 0);
      v130 = 0LL;
      v132 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
      v44 = v98;
      if ( v100 )
      {
LABEL_123:
        if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            v41,
            v43,
            *v44,
            v44[14],
            *((_QWORD *)v44 + 10),
            *((_QWORD *)v44 + 11),
            v44[274],
            *v99);
LABEL_129:
        if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v96);
        v45 = DXGGLOBAL::GetGlobal();
        ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v45 + 1136), v4);
        return 3221225495LL;
      }
LABEL_126:
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v41,
          v43,
          *v44,
          *((_QWORD *)v44 + 1),
          v44[4],
          v44[21],
          v44[22],
          *v99,
          v44[5],
          v44[6]);
      goto LABEL_129;
    }
    *((_QWORD *)v4 + 187) = v107;
    *((_BYTE *)v4 + 1512) = 1;
    v67 = *(struct DXGADAPTER **)(*(_QWORD *)(v34 + 16) + 1896LL);
    v68 = DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)v34, (struct _D3DKMT_PRESENT *)v4, v46);
    AllocationInfo = v68;
    if ( v68 < 0 )
    {
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
      if ( v107 != v108 && v107 )
        ExFreePoolWithTag(v107, 0);
      v107 = 0LL;
      v109 = 0;
      if ( v105 && v106 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v105 + 136));
        KeLeaveCriticalRegion();
      }
LABEL_186:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v110);
      if ( v27 )
        DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v27);
      if ( P != v103 && P )
        ExFreePoolWithTag(P, 0);
      v104 = 0;
      P = 0LL;
      if ( v130 != v131 && v130 )
        ExFreePoolWithTag(v130, 0);
      v130 = 0LL;
      v132 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
      if ( v100 )
      {
        if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            v69,
            v71,
            *v98,
            v98[14],
            *((_QWORD *)v98 + 10),
            *((_QWORD *)v98 + 11),
            v98[274],
            *v99);
      }
      else if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v69,
          v71,
          *v98,
          *((_QWORD *)v98 + 1),
          v98[4],
          v98[21],
          v98[22],
          *v99,
          v98[5],
          v98[6]);
      }
      if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v70, (__int64)&EventProfilerExit, v71, v96);
      v72 = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v72 + 1136), v4);
      return (unsigned int)v68;
    }
    v73 = v4[22];
    if ( (v73 & 0x10000000) != 0 )
    {
      if ( !v67 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2583;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Indirect Display present has to be on a context associated with Dod",
          2583LL,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_208:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
        goto LABEL_164;
      }
      if ( (*((_DWORD *)v67 + 111) & 0x100) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2589;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
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
    else if ( v67 )
    {
      if ( (*((_DWORD *)v67 + 111) & 0x100) != 0 && (v73 & 0x18000) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 2599;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
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
      v67 = *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 16LL);
    }
    CWin32kLocks::CWin32kLocks((CWin32kLocks *)v129, *((const struct _DXGKWIN32KENG_INTERFACE *const *)v46 + 11), v67);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v114,
      *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v133, *(_QWORD *)(v34 + 16), 2, v74, 0);
    v75 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v133, 0LL);
    AllocationInfo = v75;
    if ( v75 >= 0 )
    {
      if ( (v4[22] & 0x200000) == 0 )
      {
        CVidSchSubmitData::CVidSchSubmitData(
          (CVidSchSubmitData *)&Entry,
          *(struct ADAPTER_RENDER **)(*(_QWORD *)(v34 + 16) + 16LL),
          1);
        v82 = Entry;
        if ( !Entry )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 2659;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate VidSchSubmitData",
            2659LL,
            0LL,
            0LL,
            0LL,
            0LL);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
          CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v129);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
          if ( v107 != v108 && v107 )
            ExFreePoolWithTag(v107, 0);
          v107 = 0LL;
          v109 = 0;
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v110);
          if ( v27 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v27);
          if ( P != v103 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v104 = 0;
          if ( v130 != v131 && v130 )
            ExFreePoolWithTag(v130, 0);
          v130 = 0LL;
          v132 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
          v44 = v98;
          if ( v100 )
            goto LABEL_123;
          goto LABEL_126;
        }
        AllocationInfo = DXGCONTEXT::Present(
                           (DXGCONTEXT *)v34,
                           (struct _D3DKMT_PRESENT *)v4,
                           (struct COREDEVICEACCESS *)v133,
                           (struct DXGADAPTERSTOPRESETLOCKSHARED *)v114,
                           (struct CWin32kLocks *)v129,
                           (struct DXGCONTEXT **)v107,
                           (struct VIDSCH_SUBMIT_DATA_BASE *)Entry);
        if ( AllocationInfo == -1071775482 )
        {
          if ( !DXGADAPTER::IsCoreResourceSharedOwner(v134) )
          {
            v68 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v133, 0LL);
            if ( v68 < 0 )
            {
              ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v125 + 1424), v82);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
              CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v129);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
              if ( v107 != v108 && v107 )
                ExFreePoolWithTag(v107, 0);
              v107 = 0LL;
              v109 = 0;
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
              goto LABEL_186;
            }
          }
          DXGDEVICE::CloseInternalCddPrimaryHandle(*(DXGDEVICE **)(v34 + 16), (struct COREDEVICEACCESS *)v133);
        }
        ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v125 + 1424), v82);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
        if ( AllocationInfo >= 0 )
        {
          v83 = (void *)(v122 + 1496);
          if ( v122 + 1496 >= MmUserProbeAddress )
            v83 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v83, v4 + 378, 1uLL);
        }
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v129);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
        if ( v107 != v108 && v107 )
          ExFreePoolWithTag(v107, 0);
        v107 = 0LL;
        v109 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v110);
        if ( v27 )
          DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v27);
        if ( P != v103 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v104 = 0;
        if ( v130 != v131 && v130 )
          ExFreePoolWithTag(v130, 0);
        v130 = 0LL;
        v132 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
        if ( v100 )
        {
          if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqxxqq_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              v84,
              v86,
              *v98,
              v98[14],
              *((_QWORD *)v98 + 10),
              *((_QWORD *)v98 + 11),
              v98[274],
              *v99);
        }
        else if ( v98 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        {
          McTemplateK0qpqqqqpp_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            v84,
            v86,
            *v98,
            *((_QWORD *)v98 + 1),
            v98[4],
            v98[21],
            v98[22],
            *v99,
            v98[5],
            v98[6]);
        }
        if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v85, (__int64)&EventProfilerExit, v86, v96);
        v87 = DXGGLOBAL::GetGlobal();
        ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v87 + 1136), v4);
        v89 = DXGPROCESS::GetCurrent(v88);
        DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v89 + 8) + 104LL));
        return (unsigned int)AllocationInfo;
      }
      v81 = SubmitPresentHistoryTokenPreparation(
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v114,
              (struct COREDEVICEACCESS *)v133,
              *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 16LL),
              (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v4 + 90),
              *((_QWORD *)v4 + 44),
              (v4[22] & 0x10) != 0);
      AllocationInfo = v81;
      if ( v81 >= 0 )
      {
        v75 = SubmitPresentHistoryToken(
                (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v4 + 90),
                (struct COREDEVICEACCESS *)v133,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)v114,
                (struct CWin32kLocks *)v129,
                0,
                0LL,
                (struct DXGK_PRESENT_PARAMS *)v4,
                0LL,
                (struct DXGCONTEXT *)v34,
                0LL,
                0LL);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v129);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
        if ( v107 != v108 && v107 )
          ExFreePoolWithTag(v107, 0);
        v107 = 0LL;
        v109 = 0;
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v110);
        if ( v27 )
          DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v27);
        if ( P != v103 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v104 = 0;
        if ( v130 != v131 && v130 )
          ExFreePoolWithTag(v130, 0);
        v130 = 0LL;
        v132 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
        v79 = v98;
        if ( v100 )
          goto LABEL_230;
        goto LABEL_233;
      }
      WdLogSingleEntry1(2LL, v81);
      WdLogGlobalForLineNumber = 2639;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DxgkSubmitPresentToHwQueue failed, SubmitPresentHistoryTokenPreparation returned 0x%I64x",
        AllocationInfo,
        0LL,
        0LL,
        0LL,
        0LL);
      v75 = AllocationInfo;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v133);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v129);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
    if ( v107 != v108 && v107 )
      ExFreePoolWithTag(v107, 0);
    v107 = 0LL;
    v109 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v105);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v110);
    if ( v27 )
      DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v27);
    if ( P != v103 && P )
      ExFreePoolWithTag(P, 0);
    v104 = 0;
    P = 0LL;
    if ( v130 != v131 && v130 )
      ExFreePoolWithTag(v130, 0);
    v130 = 0LL;
    v132 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
    v79 = v98;
    if ( v100 )
    {
LABEL_230:
      if ( v79 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v76,
          v78,
          *v79,
          v79[14],
          *((_QWORD *)v79 + 10),
          *((_QWORD *)v79 + 11),
          v79[274],
          *v99);
LABEL_236:
      if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v77, (__int64)&EventProfilerExit, v78, v96);
      v80 = DXGGLOBAL::GetGlobal();
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v80 + 1136), v4);
      return (unsigned int)v75;
    }
LABEL_233:
    if ( v79 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v76,
        v78,
        *v79,
        *((_QWORD *)v79 + 1),
        v79[4],
        v79[21],
        v79[22],
        *v99,
        v79[5],
        v79[6]);
    goto LABEL_236;
  }
  v49 = 1;
  while ( 1 )
  {
    if ( v49 >= v132 )
      v50 = (unsigned int *)v130;
    else
      v50 = (unsigned int *)((char *)v130 + 4 * v49);
    v51 = *v50;
    v52 = (v51 >> 6) & 0xFFFFFF;
    v53 = v51 >> 30;
    if ( v52 >= *((_DWORD *)v46 + 74) )
      goto LABEL_144;
    v54 = *((_QWORD *)v46 + 35) + 16LL * v52;
    v55 = *(_DWORD *)(v54 + 8);
    if ( v53 != ((v55 >> 5) & 3) )
      goto LABEL_144;
    if ( (v55 & 0x2000) != 0 )
      goto LABEL_144;
    v56 = v55 & 0x1F;
    if ( !v56 )
      goto LABEL_144;
    if ( v56 != 15 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v47 = v119;
LABEL_144:
      v57 = 0LL;
      goto LABEL_145;
    }
    v57 = *(_QWORD *)v54;
LABEL_145:
    v58 = v49 >= v104 ? P : (char *)P + 8 * v49;
    *v58 = v57;
    v59 = (char *)P;
    v60 = v49 >= v104 ? P : (char *)P + 8 * v49;
    if ( !*v60 )
      break;
    if ( v49 < v104 )
      v59 = (char *)P + 8 * v49;
    v61 = 8LL * v49;
    *(_QWORD *)((char *)v107 + v61) = *(_QWORD *)(*(_QWORD *)v59 + 16LL);
    v62 = *(_QWORD *)((char *)v107 + v61);
    if ( !v62 || *(_QWORD *)(v62 + 16) != *(_QWORD *)(v34 + 16) )
    {
      WdLogSingleEntry4(2LL, v34, (unsigned int)v4[v48 + 24], v48, -1073741811LL);
      WdLogGlobalForLineNumber = 2531;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        v34,
        (unsigned int)v4[v48 + 24],
        v48,
        -1073741811LL,
        0LL);
      goto LABEL_163;
    }
    if ( *(_DWORD *)(v47[(unsigned __int64)v61 / 8] + 388LL) <= *(_DWORD *)(v47[v48] + 388LL) )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 2539;
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
      goto LABEL_163;
    }
    ++v48;
    ++v49;
    if ( v48 >= v4[23] )
      goto LABEL_159;
  }
  if ( v49 >= v132 )
    v64 = (unsigned int *)v130;
  else
    v64 = (unsigned int *)((char *)v130 + 4 * v49);
  v65 = v48 + 1;
  WdLogSingleEntry2(2LL, *v64, (unsigned int)v65);
  WdLogGlobalForLineNumber = 2518;
  if ( (unsigned int)v65 >= v132 )
    v66 = (unsigned int *)v130;
  else
    v66 = (unsigned int *)((char *)v130 + 4 * v65);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"DxgkSubmitPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d",
    *v66,
    (unsigned int)v65,
    0LL,
    0LL,
    0LL);
LABEL_163:
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v126);
LABEL_164:
  if ( v107 != v108 && v107 )
    ExFreePoolWithTag(v107, 0);
  v107 = 0LL;
  v109 = 0;
  if ( v105 && v106 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v105 + 136));
    KeLeaveCriticalRegion();
  }
LABEL_72:
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v110);
  if ( v27 )
LABEL_55:
    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v27);
  if ( P != v103 && P )
    ExFreePoolWithTag(P, 0);
  v104 = 0;
  P = 0LL;
  if ( v130 != v131 && v130 )
    ExFreePoolWithTag(v130, 0);
  v130 = 0LL;
  v132 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v96);
  v17 = v98;
  if ( v100 )
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
        *v99);
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
      *v99,
      v17[5],
      v17[6]);
LABEL_17:
  if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v96);
  v18 = DXGGLOBAL::GetGlobal();
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)v18 + 1136), v4);
  return 3221225485LL;
}
