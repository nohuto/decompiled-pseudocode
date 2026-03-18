/*
 * XREFs of DxgkPresentMultiPlaneOverlay @ 0x1401D9EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x14003729C (McTemplateK0qqqqdqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1401883A4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1401D9164 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1401D9534 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1401D9BDC (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay(struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1)
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
  __int64 v20; // r9
  __int64 v21; // rdi
  _QWORD *Pool2; // rax
  ULONG v23; // r14d
  __int64 v24; // rdi
  D3DKMT_HANDLE v25; // eax
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rax
  const struct DXGDEVICE *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // [rsp+30h] [rbp-D8h]
  int v54; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v55[2]; // [rsp+70h] [rbp-98h] BYREF
  int *v56; // [rsp+80h] [rbp-88h]
  int *v57; // [rsp+88h] [rbp-80h]
  struct D3DKMT_MULTIPLANE_OVERLAY *v58[2]; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+A0h] [rbp-68h]
  _BYTE v60[32]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v61; // [rsp+C8h] [rbp-40h]
  _BYTE v62[16]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v63[16]; // [rsp+E0h] [rbp-28h] BYREF
  struct DXGCONTEXT *v64; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v65[24]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v66[6]; // [rsp+110h] [rbp+8h] BYREF
  char v67; // [rsp+140h] [rbp+38h]
  _BYTE v68[32]; // [rsp+148h] [rbp+40h] BYREF
  D3DKMT_PRESENT_MULTIPLANE_OVERLAY v69; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v70[160]; // [rsp+298h] [rbp+190h] BYREF

  v54 = -1073741811;
  memset(&v69, 0, sizeof(v69));
  v56 = (int *)&v69;
  v55[1] = 0LL;
  LODWORD(v55[0]) = 2092;
  v57 = &v54;
  if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter, v3, 2092);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v55, 2092);
  Current = DXGPROCESS::GetCurrent();
  if ( !a1 )
  {
    v54 = -1073741811;
    CurrentProcess = PsGetCurrentProcess(v4);
    WdLogSingleEntry2(2LL, v54, CurrentProcess);
    WdLogGlobalForLineNumber = 272;
    v8 = PsGetCurrentProcess(v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Presenting multi plane overlay from unexpected process 0x%I64x 0x%I64x",
      v54,
      v8,
      0LL,
      0LL,
      0LL);
    v9 = v54;
    goto LABEL_87;
  }
  *(_OWORD *)v58 = 0LL;
  v54 = CapturePresentMultiPlaneOverlayArgs(a1, &v69, v58, (struct tagRECT **)&v58[1]);
  if ( v54 < 0 )
  {
    v11 = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(2LL, v54, v11);
    WdLogGlobalForLineNumber = 297;
    v13 = PsGetCurrentProcess(v12);
    VidPnSourceId = v54;
    v15 = L"Failed to capture multi plane overlay parameters 0x%I64x 0x%I64x";
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v15, VidPnSourceId, v13, 0LL, 0LL, 0LL);
    v9 = v54;
    goto LABEL_86;
  }
  if ( v69.VidPnSourceId >= 0x10 )
  {
    v54 = -1073741811;
    WdLogSingleEntry2(2LL, v69.VidPnSourceId, -1073741811LL);
    v13 = v54;
    v15 = L"Invalid VidPnSoureId 0x%I64x specified in DxgkPresentMultiPlaneOverlay, returning 0x%I64x";
    VidPnSourceId = v69.VidPnSourceId;
    WdLogGlobalForLineNumber = 307;
    goto LABEL_8;
  }
  v64 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v62, v69.hDevice, Current, &v64, 0, 1);
  v17 = (__int64 *)v64;
  if ( !v64 )
  {
    v54 = -1073741811;
    v18 = PsGetCurrentProcess(v16);
    WdLogSingleEntry3(3LL, v54, v18, v69.hDevice);
    WdLogGlobalForLineNumber = 320;
LABEL_84:
    v9 = v54;
    goto LABEL_85;
  }
  v19 = (struct DXGDEVICE *)*((_QWORD *)v64 + 2);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) + 2976LL) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, v69.hDevice);
    WdLogGlobalForLineNumber = 326;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Present is not supported on MCDM adapter context 0x%I64x",
      v69.hDevice,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_48:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v62);
    DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)v58);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v55);
    if ( (qword_14015B4C0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v31,
          v33,
          *v56,
          v56[66],
          v56[67],
          v56[68],
          v56[69],
          v56[70],
          v56[74],
          *v57);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v55[0]);
    }
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v64 + 98) & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 332;
    goto LABEL_48;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63, v19);
  if ( v69.BroadcastContextCount > 0x40 )
  {
    WdLogSingleEntry2(3LL, v17, -1073741811LL);
    WdLogGlobalForLineNumber = 347;
LABEL_47:
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
    goto LABEL_48;
  }
  v21 = v69.BroadcastContextCount + 1;
  P = 0LL;
  v61 = 0;
  if ( (unsigned int)v21 <= 4 )
  {
    P = v60;
    memset(v60, 0, 8LL * (unsigned int)v21);
    Pool2 = P;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v21 < 8 )
      goto LABEL_25;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v21, 1265072196LL, v20);
    P = Pool2;
  }
  v61 = v21;
  if ( !Pool2 )
  {
LABEL_25:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 354;
LABEL_55:
    if ( P != v60 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v61 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v62);
    DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)v58);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v55);
    if ( (qword_14015B4C0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v35,
          v37,
          *v56,
          v56[66],
          v56[67],
          v56[68],
          v56[69],
          v56[70],
          v56[74],
          *v57);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit, v37, v55[0]);
    }
    return 3221225495LL;
  }
  *Pool2 = v17;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v68, Current);
  v23 = 0;
  while ( v23 < v69.BroadcastContextCount )
  {
    v24 = v23;
    v25 = (v69.BroadcastContext[v23] >> 6) & 0xFFFFFF;
    if ( v25 >= *((_DWORD *)Current + 74) )
      goto LABEL_34;
    v26 = *((_QWORD *)Current + 35);
    if ( ((v69.BroadcastContext[v23] >> 25) & 0x60) != (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x60) )
      goto LABEL_34;
    if ( (*(_DWORD *)(v26 + 16LL * v25 + 8) & 0x2000) != 0 )
      goto LABEL_34;
    v27 = *(_DWORD *)(v26 + 16LL * v25 + 8) & 0x1F;
    if ( !v27 )
      goto LABEL_34;
    if ( v27 != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_34:
      v28 = 0LL;
      goto LABEL_35;
    }
    v28 = *(_QWORD *)(v26 + 16LL * v25);
LABEL_35:
    *((_QWORD *)P + ++v23) = v28;
    v29 = *((_QWORD *)P + v23);
    if ( !v29 || (*(_DWORD *)(v29 + 392) & 8) != 0 || *(_QWORD *)(v29 + 16) != v17[2] )
    {
      WdLogSingleEntry4(2LL, v17, v69.BroadcastContext[v24], v24, -1073741811LL);
      v53 = v69.BroadcastContext[v24];
      WdLogGlobalForLineNumber = 390;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v17,
        v53,
        v24,
        -1073741811LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68);
LABEL_43:
      if ( P != v60 && P )
        ExFreePoolWithTag(P, 0);
      v61 = 0;
      P = 0LL;
      goto LABEL_47;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v68);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v66,
    P,
    v61,
    v30,
    1);
  if ( v67 )
  {
    if ( !v66[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 405;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v66);
      goto LABEL_55;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 410;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v66);
    goto LABEL_43;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v65,
    *(struct DXGADAPTER **)(*(_QWORD *)(v17[2] + 16) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, v17[2], 1, v38, 0);
  v54 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v70, 0LL);
  if ( v54 >= 0 )
  {
    v41 = (const struct DXGDEVICE *)v17[2];
    v42 = *((_QWORD *)v41 + 235);
    if ( !v42 )
    {
      v54 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 437;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"PresentMultiPlaneOverlay called on a render only adapter, returning 0x%I64x",
        v54,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_66;
    }
    if ( (*((_DWORD *)Current + 102) & 4) == 0
      && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v42 + 3120), v41, v69.VidPnSourceId) )
    {
      v54 = -1073741790;
      v44 = PsGetCurrentProcess(v43);
      WdLogSingleEntry2(2LL, v54, v44);
      WdLogGlobalForLineNumber = 452;
      v46 = PsGetCurrentProcess(v45);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Presenting multi plane overlay is only supported from the DWM process 0x%I64x 0x%I64x",
        v54,
        v46,
        0LL,
        0LL,
        0LL);
      goto LABEL_66;
    }
    v47 = v17[2];
    v48 = *(_QWORD *)(*(_QWORD *)(v47 + 16) + 16LL);
    if ( *(_QWORD *)(v47 + 1880) == v48 )
    {
      v54 = DXGCONTEXT::PresentMultiPlaneOverlay(
              (DXGCONTEXT *)v17,
              &v69,
              (struct COREDEVICEACCESS *)v70,
              (struct DXGCONTEXT **)P);
      if ( v54 == -1071775482 )
        DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v17[2], (struct COREDEVICEACCESS *)v70);
    }
    else
    {
      v49 = PsGetCurrentProcess(v48);
      WdLogSingleEntry2(3LL, -1073741811LL, v49);
      WdLogGlobalForLineNumber = 468;
      v54 = -1073741811;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v66);
    if ( P != v60 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v61 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
    goto LABEL_84;
  }
  v40 = PsGetCurrentProcess(v39);
  WdLogSingleEntry2(3LL, v54, v40);
  WdLogGlobalForLineNumber = 429;
LABEL_66:
  v9 = v54;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v70);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v66);
  if ( P != v60 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v61 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v63);
LABEL_85:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v62);
LABEL_86:
  DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)v58);
LABEL_87:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v55);
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v50,
        v52,
        *v56,
        v56[66],
        v56[67],
        v56[68],
        v56[69],
        v56[70],
        v56[74],
        *v57);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v51, (__int64)&EventProfilerExit, v52, v55[0]);
  }
  return v9;
}
