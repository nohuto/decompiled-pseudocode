/*
 * XREFs of ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEBD@Z @ 0x140366670
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
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 */

__int64 __fastcall DxgkCddSubmitPresentHistory(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2, char *a3)
{
  __int64 v3; // r13
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rsi
  __int64 CurrentProcess; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // zf
  volatile signed __int32 *v15; // rdi
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // r8
  unsigned int v21; // ecx
  int v22; // ecx
  struct DXGDEVICE **v23; // rbx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v31; // r9
  char *v32; // r14
  int v33; // eax
  unsigned int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h]
  char v39; // [rsp+70h] [rbp-90h]
  struct DXGDEVICE **v40; // [rsp+78h] [rbp-88h] BYREF
  char v41; // [rsp+80h] [rbp-80h]
  char *v42; // [rsp+88h] [rbp-78h]
  union _LARGE_INTEGER v43; // [rsp+90h] [rbp-70h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v44; // [rsp+98h] [rbp-68h]
  _BYTE v45[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v46[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+C0h] [rbp-40h]
  _BYTE v49[24]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v50[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v51[160]; // [rsp+100h] [rbp+0h] BYREF

  v37 = -1;
  v42 = a3;
  v44 = a2;
  v3 = (unsigned int)a1;
  v38 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 3036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 3036);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 3036);
  Current = DXGPROCESS::GetCurrent(v4);
  v7 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 3098;
    v11 = PsGetCurrentProcess(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v11,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v14 = v39 == 0;
LABEL_31:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v37);
    return v9;
  }
  v15 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v16 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  v17 = (unsigned int)v3 >> 30;
  if ( v16 < *((_DWORD *)v7 + 74) )
  {
    v18 = *((_QWORD *)v7 + 35);
    v19 = *(_DWORD *)(v18 + 16LL * v16 + 8);
    if ( v17 == ((v19 >> 5) & 3)
      && (v19 & 0x2000) == 0
      && (v19 & 0x1F) != 0
      && (*(_BYTE *)(v18 + 16 * (((unsigned __int64)(unsigned int)v3 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  _InterlockedDecrement(v15 + 4);
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  v48 = 0;
  v47 = v15;
  if ( v15 && *((struct _KTHREAD **)v15 + 1) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v46);
  if ( v16 >= *((_DWORD *)v7 + 74) )
    goto LABEL_22;
  v20 = *((_QWORD *)v7 + 35);
  v21 = *(_DWORD *)(v20 + 16LL * v16 + 8);
  if ( v17 != ((v21 >> 5) & 3) )
    goto LABEL_22;
  if ( (v21 & 0x2000) != 0 )
    goto LABEL_22;
  v22 = v21 & 0x1F;
  if ( !v22 )
    goto LABEL_22;
  if ( v22 != 7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
    v23 = 0LL;
    goto LABEL_23;
  }
  v23 = *(struct DXGDEVICE ***)(v20 + 16LL * v16);
LABEL_23:
  v40 = v23;
  v41 = 0;
  if ( v23 )
  {
    _m_prefetchw(v23 + 4);
    v24 = (signed __int64)v23[4];
    do
    {
      if ( !v24 )
      {
        v23 = 0LL;
        v40 = 0LL;
        goto LABEL_29;
      }
      v25 = v24;
      v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v23 + 4, v24 + 1, v24);
    }
    while ( v25 != v24 );
    v23 = v40;
  }
LABEL_29:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v46);
  if ( !v23 )
  {
    v27 = PsGetCurrentProcess(v26);
    v9 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v27, v3);
    WdLogGlobalForLineNumber = 3111;
    v29 = PsGetCurrentProcess(v28);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid context handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v29,
      v3,
      0LL,
      0LL);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v40);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v14 = v39 == 0;
    goto LABEL_31;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v45, v23[2]);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v50, v23 + 55);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v49,
    *(struct DXGADAPTER **)(*((_QWORD *)v23[2] + 2) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, (__int64)v23[2], 0, v31, 0);
  v32 = v42;
  v33 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v51, v42);
  v9 = v33;
  if ( v33 < 0 )
  {
    WdLogSingleEntry3(4LL, v33, v23, v7);
    WdLogGlobalForLineNumber = 3126;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v45);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v40);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    v14 = v39 == 0;
    goto LABEL_31;
  }
  v43.QuadPart = -100000LL;
  v34 = SubmitPresentHistoryToken(
          v44,
          (struct COREDEVICEACCESS *)v51,
          (struct DXGADAPTERSTOPRESETLOCKSHARED *)v49,
          0LL,
          0,
          &v43,
          0LL,
          0LL,
          (struct DXGCONTEXT *)v23,
          0LL,
          v32);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v49);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v50);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v45);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v37);
  return v34;
}
