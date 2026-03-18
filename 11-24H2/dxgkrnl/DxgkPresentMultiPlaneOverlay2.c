/*
 * XREFs of DxgkPresentMultiPlaneOverlay2 @ 0x1401DFCB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033C28 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x140036DB0 (McTemplateK0qqqqdqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x14018A6B4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1401DE3F4 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1401DE41C (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1401DEB6C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay2(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 VidPnSourceId; // rcx
  const wchar_t *v15; // r9
  __int64 v16; // rcx
  __int64 *v17; // rbx
  __int64 v18; // rax
  struct DXGDEVICE *v19; // rdx
  __int64 v20; // rdi
  _QWORD *Pool2; // rax
  ULONG v22; // r14d
  __int64 v23; // rdi
  D3DKMT_HANDLE v24; // eax
  __int64 v25; // r9
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  const struct DXGDEVICE *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // [rsp+30h] [rbp-D8h]
  int v53; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v54[2]; // [rsp+70h] [rbp-98h] BYREF
  int *v55; // [rsp+80h] [rbp-88h]
  int *v56; // [rsp+88h] [rbp-80h]
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v57[2]; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+A0h] [rbp-68h]
  _BYTE v59[32]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v60; // [rsp+C8h] [rbp-40h]
  _BYTE v61[16]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v62[16]; // [rsp+E0h] [rbp-28h] BYREF
  struct DXGCONTEXT *v63; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v64[24]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v65[6]; // [rsp+110h] [rbp+8h] BYREF
  char v66; // [rsp+140h] [rbp+38h]
  _BYTE v67[32]; // [rsp+148h] [rbp+40h] BYREF
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 v68; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v69[160]; // [rsp+298h] [rbp+190h] BYREF

  v53 = -1073741811;
  memset(&v68, 0, sizeof(v68));
  v55 = (int *)&v68;
  v54[1] = 0LL;
  LODWORD(v54[0]) = 2163;
  v56 = &v53;
  if ( (qword_14015E4B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2163);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v54, 2163);
  Current = DXGPROCESS::GetCurrent();
  if ( !a1 )
  {
    v53 = -1073741811;
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, v53, CurrentProcess);
    WdLogGlobalForLineNumber = 933;
    v8 = PsGetCurrentProcess(v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting multi plane overlay from unexpected process 0x%I64x 0x%I64x",
      v53,
      v8,
      0LL,
      0LL,
      0LL);
    v9 = v53;
    goto LABEL_87;
  }
  *(_OWORD *)v57 = 0LL;
  v53 = CapturePresentMultiPlaneOverlayArgs2(a1, &v68, v57, (struct tagRECT **)&v57[1]);
  if ( v53 < 0 )
  {
    v11 = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(2LL, v53, v11);
    WdLogGlobalForLineNumber = 958;
    v13 = PsGetCurrentProcess(v12);
    VidPnSourceId = v53;
    v15 = L"Failed to capture multi plane overlay parameters 0x%I64x 0x%I64x";
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v15, VidPnSourceId, v13, 0LL, 0LL, 0LL);
    v9 = v53;
    goto LABEL_86;
  }
  if ( v68.VidPnSourceId >= 0x10 )
  {
    v53 = -1073741811;
    WdLogSingleEntry2(2LL, v68.VidPnSourceId, -1073741811LL);
    v13 = v53;
    v15 = L"Invalid VidPnSoureId 0x%I64x specified in DxgkPresentMultiPlaneOverlay2, returning 0x%I64x";
    VidPnSourceId = v68.VidPnSourceId;
    WdLogGlobalForLineNumber = 968;
    goto LABEL_8;
  }
  v63 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v61,
    v68.hDevice,
    (struct _KTHREAD **)Current,
    &v63,
    0,
    1);
  v17 = (__int64 *)v63;
  if ( !v63 )
  {
    v53 = -1073741811;
    v18 = PsGetCurrentProcess(v16);
    WdLogSingleEntry3(3LL, v53, v18, v68.hDevice);
    WdLogGlobalForLineNumber = 981;
LABEL_84:
    v9 = v53;
    goto LABEL_85;
  }
  v19 = (struct DXGDEVICE *)*((_QWORD *)v63 + 2);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 2976LL) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, v68.hDevice);
    WdLogGlobalForLineNumber = 987;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Present is not supported on MCDM adapter context 0x%I64x",
      v68.hDevice,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_48:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61);
    DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)v57);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v54);
    if ( (qword_14015E4B0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v30,
          v32,
          v55[1],
          v55[67],
          v55[68],
          v55[69],
          v55[70],
          v55[71],
          v55[74],
          *v56);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, (__int64)&EventProfilerExit, v32, v54[0]);
    }
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v63 + 98) & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 993;
    goto LABEL_48;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62, v19);
  if ( v68.BroadcastContextCount > 0x40 )
  {
    WdLogSingleEntry2(3LL, v17, -1073741811LL);
    WdLogGlobalForLineNumber = 1008;
LABEL_47:
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62);
    goto LABEL_48;
  }
  v20 = v68.BroadcastContextCount + 1;
  P = 0LL;
  v60 = 0;
  if ( (unsigned int)v20 <= 4 )
  {
    P = v59;
    memset(v59, 0, 8LL * (unsigned int)v20);
    Pool2 = P;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v20 < 8 )
      goto LABEL_25;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v20, 1265072196LL);
    P = Pool2;
  }
  v60 = v20;
  if ( !Pool2 )
  {
LABEL_25:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1015;
LABEL_55:
    if ( P != v59 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v60 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61);
    DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)v57);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v54);
    if ( (qword_14015E4B0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v34,
          v36,
          v55[1],
          v55[67],
          v55[68],
          v55[69],
          v55[70],
          v55[71],
          v55[74],
          *v56);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v54[0]);
    }
    return 3221225495LL;
  }
  *Pool2 = v17;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v67, Current);
  v22 = 0;
  while ( v22 < v68.BroadcastContextCount )
  {
    v23 = v22;
    v24 = (v68.BroadcastContext[v22] >> 6) & 0xFFFFFF;
    if ( v24 >= *((_DWORD *)Current + 74) )
      goto LABEL_34;
    v25 = *((_QWORD *)Current + 35);
    if ( ((v68.BroadcastContext[v22] >> 25) & 0x60) != (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60) )
      goto LABEL_34;
    if ( (*(_DWORD *)(v25 + 16LL * v24 + 8) & 0x2000) != 0 )
      goto LABEL_34;
    v26 = *(_DWORD *)(v25 + 16LL * v24 + 8) & 0x1F;
    if ( !v26 )
      goto LABEL_34;
    if ( v26 != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_34:
      v27 = 0LL;
      goto LABEL_35;
    }
    v27 = *(_QWORD *)(v25 + 16LL * v24);
LABEL_35:
    *((_QWORD *)P + ++v22) = v27;
    v28 = *((_QWORD *)P + v22);
    if ( !v28 || (*(_DWORD *)(v28 + 392) & 8) != 0 || *(_QWORD *)(v28 + 16) != v17[2] )
    {
      WdLogSingleEntry4(2LL, v17, v68.BroadcastContext[v23], v23, -1073741811LL);
      v52 = v68.BroadcastContext[v23];
      WdLogGlobalForLineNumber = 1051;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v17,
        v52,
        v23,
        -1073741811LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v67);
LABEL_43:
      if ( P != v59 && P )
        ExFreePoolWithTag(P, 0);
      v60 = 0;
      P = 0LL;
      goto LABEL_47;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v67);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v65,
    P,
    v60,
    v29,
    1);
  if ( v66 )
  {
    if ( !v65[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1066;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v65);
      goto LABEL_55;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1071;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v65);
    goto LABEL_43;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v64,
    *(struct DXGADAPTER **)(*(_QWORD *)(v17[2] + 16) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, v17[2], 1, v37, 0);
  v53 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v69, 0LL);
  if ( v53 >= 0 )
  {
    v40 = (const struct DXGDEVICE *)v17[2];
    v41 = *((_QWORD *)v40 + 237);
    if ( !v41 )
    {
      v53 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 1098;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"PresentMultiPlaneOverlay called on a render only adapter, returning 0x%I64x",
        v53,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_66;
    }
    if ( (*((_DWORD *)Current + 102) & 4) == 0
      && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v41 + 3120), v40, v68.VidPnSourceId) )
    {
      v53 = -1073741790;
      v43 = PsGetCurrentProcess(v42);
      WdLogSingleEntry2(2LL, v53, v43);
      WdLogGlobalForLineNumber = 1113;
      v45 = PsGetCurrentProcess(v44);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Presenting multi plane overlay is only supported from the DWM process 0x%I64x 0x%I64x",
        v53,
        v45,
        0LL,
        0LL,
        0LL);
      goto LABEL_66;
    }
    v46 = v17[2];
    v47 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 16LL);
    if ( *(_QWORD *)(v46 + 1896) == v47 )
    {
      v53 = DXGCONTEXT::PresentMultiPlaneOverlay2(
              (DXGCONTEXT *)v17,
              &v68,
              (struct COREDEVICEACCESS *)v69,
              (struct DXGCONTEXT **)P);
      if ( v53 == -1071775482 )
        DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v17[2], (struct COREDEVICEACCESS *)v69);
    }
    else
    {
      v48 = PsGetCurrentProcess(v47);
      WdLogSingleEntry2(3LL, -1073741811LL, v48);
      WdLogGlobalForLineNumber = 1130;
      v53 = -1073741811;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v65);
    if ( P != v59 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v60 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62);
    goto LABEL_84;
  }
  v39 = PsGetCurrentProcess(v38);
  WdLogSingleEntry2(3LL, v53, v39);
  WdLogGlobalForLineNumber = 1090;
LABEL_66:
  v9 = v53;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v69);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v65);
  if ( P != v59 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v60 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62);
LABEL_85:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61);
LABEL_86:
  DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)v57);
LABEL_87:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v54);
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v49,
        v51,
        v55[1],
        v55[67],
        v55[68],
        v55[69],
        v55[70],
        v55[71],
        v55[74],
        *v56);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v50, (__int64)&EventProfilerExit, v51, v54[0]);
  }
  return v9;
}
