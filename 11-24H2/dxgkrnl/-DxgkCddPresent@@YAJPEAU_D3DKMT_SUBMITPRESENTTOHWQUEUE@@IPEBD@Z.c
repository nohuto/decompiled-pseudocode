/*
 * XREFs of ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z @ 0x1401B3D50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x140374788 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 */

__int64 __fastcall DxgkCddPresent(struct _D3DKMT_SUBMITPRESENTTOHWQUEUE *a1, unsigned int a2, char *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // r14
  __int64 CurrentProcess; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // zf
  D3DKMT_HANDLE hDevice; // edx
  struct DXGCONTEXT *v13; // rsi
  D3DKMT_HANDLE v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r9
  ULONG BroadcastContextCount; // ebx
  __int64 v20; // rbx
  _QWORD *Pool2; // rax
  ULONG v22; // edi
  PVOID v23; // rdx
  __int64 v24; // r12
  D3DKMT_HANDLE v25; // ebx
  unsigned int v26; // eax
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // rbx
  __int64 v30; // r8
  struct DXGCONTEXT *v31; // rbx
  __int64 *v33; // rsi
  __int64 v34; // r9
  int v35; // eax
  unsigned int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h]
  char v45; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h]
  _BYTE v47[32]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v48; // [rsp+90h] [rbp-70h]
  struct DXGCONTEXT *v49; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v50; // [rsp+A0h] [rbp-60h]
  _BYTE v51[16]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v52[16]; // [rsp+B8h] [rbp-48h] BYREF
  char *v53; // [rsp+C8h] [rbp-38h]
  _BYTE v54[24]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v55[7]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v56[160]; // [rsp+120h] [rbp+20h] BYREF

  v53 = a3;
  v50 = a2;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 3008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, (__int64)a3, 3008);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 3008);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v5 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess();
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 2245;
    v8 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v8,
      0LL,
      0LL,
      0LL);
    goto LABEL_7;
  }
  hDevice = a1->PrivatePresentData.hDevice;
  v49 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v51, hDevice, Current, &v49, 0, 1);
  v13 = v49;
  if ( !v49 )
  {
    v14 = a1->PrivatePresentData.hDevice;
    v15 = PsGetCurrentProcess();
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v15, v14);
    v16 = a1->PrivatePresentData.hDevice;
    WdLogGlobalForLineNumber = 2258;
    v17 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v17,
      v16,
      0LL,
      0LL);
    goto LABEL_11;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v52,
    *((struct DXGDEVICE **)v49 + 2));
  BroadcastContextCount = a1->PrivatePresentData.BroadcastContextCount;
  if ( BroadcastContextCount > 0x40 )
  {
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(3LL, v13, -1073741811LL);
    WdLogGlobalForLineNumber = 2272;
    goto LABEL_14;
  }
  v20 = BroadcastContextCount + 1;
  P = 0LL;
  v48 = 0;
  if ( (unsigned int)v20 <= 4 )
  {
    Pool2 = v47;
    P = v47;
    if ( (_DWORD)v20 )
    {
      memset(v47, 0, 8LL * (unsigned int)v20);
      Pool2 = P;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v20 < 8 )
      goto LABEL_21;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v20, 1265072196LL);
    P = Pool2;
  }
  v48 = v20;
  if ( !Pool2 )
  {
LABEL_21:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2279;
LABEL_61:
    if ( P != v47 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v48 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v52);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v43);
    return 3221225495LL;
  }
  *Pool2 = v13;
  v22 = 0;
  v23 = P;
  while ( v22 < a1->PrivatePresentData.BroadcastContextCount )
  {
    v24 = v22;
    v25 = a1->PrivatePresentData.BroadcastContext[v22];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v5 + 248));
    v26 = (v25 >> 6) & 0xFFFFFF;
    if ( v26 >= *(_DWORD *)(v5 + 296) )
      goto LABEL_30;
    v27 = *(_QWORD *)(v5 + 280);
    if ( ((v25 >> 25) & 0x60) != (*(_BYTE *)(v27 + 16LL * v26 + 8) & 0x60) )
      goto LABEL_30;
    if ( (*(_DWORD *)(v27 + 16LL * v26 + 8) & 0x2000) != 0 )
      goto LABEL_30;
    v28 = *(_DWORD *)(v27 + 16LL * v26 + 8) & 0x1F;
    if ( !v28 )
      goto LABEL_30;
    if ( v28 != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_30:
      v29 = 0LL;
      goto LABEL_31;
    }
    v29 = *(_QWORD *)(v27 + 16LL * v26);
LABEL_31:
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 264));
    ExReleasePushLockSharedEx(v5 + 248, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)P + ++v22) = v29;
    v23 = P;
    v30 = *((_QWORD *)P + v22);
    if ( !v30 || *(_QWORD *)(v30 + 16) != *((_QWORD *)v13 + 2) )
    {
      v31 = v49;
      LODWORD(v7) = -1073741811;
      WdLogSingleEntry4(2LL, v49, a1->PrivatePresentData.BroadcastContext[v24], v24, -1073741811LL);
      v42 = a1->PrivatePresentData.BroadcastContext[v24];
      WdLogGlobalForLineNumber = 2306;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v31,
        v42,
        v24,
        -1073741811LL,
        0LL);
      if ( P != v47 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v48 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v52);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v51);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
      if ( v45 )
      {
        v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
        goto LABEL_38;
      }
      return (unsigned int)v7;
    }
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v55,
    v23,
    v48,
    v18,
    1);
  if ( !v55[0] )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2318;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v55);
    goto LABEL_61;
  }
  v33 = (__int64 *)v49;
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v54,
    *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v49 + 2) + 16LL) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v56, v33[2], 2, v34, 0);
  v35 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v56, v53);
  v36 = v35;
  if ( v35 < 0 )
  {
    WdLogSingleEntry3(4LL, v35, v33, v5);
    WdLogGlobalForLineNumber = 2331;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v55);
    if ( P != v47 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v48 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v52);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit, v38, v43);
    return v36;
  }
  v39 = DXGCONTEXT::PresentFromCdd(
          (DXGCONTEXT *)v33,
          a1,
          v50,
          (struct COREDEVICEACCESS *)v56,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v54,
          (struct DXGCONTEXT **)P);
  v7 = v39;
  if ( v39 < 0 )
  {
    if ( v39 == -1071775482 )
    {
      WdLogSingleEntry3(4LL, -1071775482LL, v33, v5);
      WdLogGlobalForLineNumber = 2343;
    }
    else if ( v39 != -1071774910 )
    {
      WdLogSingleEntry3(2LL, v39, v33, v5);
      WdLogGlobalForLineNumber = 2348;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x PresentFromCdd failed 0x%I64x 0x%I64x",
        v7,
        (__int64)v33,
        v5,
        0LL,
        0LL);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v56);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v55);
  if ( P != v47 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v48 = 0;
LABEL_14:
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v52);
LABEL_11:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v51);
LABEL_7:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 )
  {
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_38:
    if ( !v11 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v43);
  }
  return (unsigned int)v7;
}
