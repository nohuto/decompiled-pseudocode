/*
 * XREFs of DxgkPresentRedirected @ 0x140316770
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x140013214 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x140014670 (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x14002B2E0 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400339D0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1TOKEN_BINDING_GUARD@@QEAA@XZ @ 0x140316718 (--1TOKEN_BINDING_GUARD@@QEAA@XZ.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x140317908 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 */

__int64 __fastcall DxgkPresentRedirected(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v4; // r8
  struct _D3DKMT_PRESENTHISTORYTOKEN *v5; // r12
  __int64 v6; // r13
  __int64 v7; // r15
  struct DXGGLOBAL *Global; // rax
  char *v9; // r14
  __int64 v10; // rbx
  DXGPUSHLOCK *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rbx
  __int64 v16; // r9
  struct DXGDEVICE *v17; // rbx
  int v18; // eax
  int v19; // r14d
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v25; // r14
  unsigned __int64 v26; // rcx
  unsigned int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // rbx
  struct DXGDEVICE *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 CurrentProcess; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  const wchar_t *v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  struct DXGDEVICE *v49; // [rsp+60h] [rbp-608h] BYREF
  int v50; // [rsp+68h] [rbp-600h] BYREF
  __int64 v51; // [rsp+70h] [rbp-5F8h]
  __int64 v52; // [rsp+78h] [rbp-5F0h]
  int *v53; // [rsp+80h] [rbp-5E8h]
  char v54; // [rsp+88h] [rbp-5E0h]
  int v55; // [rsp+90h] [rbp-5D8h] BYREF
  struct DXGDEVICE *v56; // [rsp+98h] [rbp-5D0h] BYREF
  struct DXGDEVICE *v57; // [rsp+A0h] [rbp-5C8h] BYREF
  char v58[8]; // [rsp+A8h] [rbp-5C0h] BYREF
  char v59; // [rsp+B0h] [rbp-5B8h]
  char v60[8]; // [rsp+C0h] [rbp-5A8h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-5A0h]
  char v62; // [rsp+D0h] [rbp-598h]
  unsigned __int64 v63; // [rsp+D8h] [rbp-590h]
  PVOID Entry[2]; // [rsp+E0h] [rbp-588h] BYREF
  int v65; // [rsp+F0h] [rbp-578h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v66; // [rsp+F8h] [rbp-570h]
  char *v67; // [rsp+100h] [rbp-568h]
  _BYTE *v68; // [rsp+108h] [rbp-560h]
  unsigned __int64 v69; // [rsp+110h] [rbp-558h] BYREF
  int v70; // [rsp+118h] [rbp-550h]
  int v71; // [rsp+11Ch] [rbp-54Ch]
  __int64 v72; // [rsp+120h] [rbp-548h]
  struct DXGDEVICE *v73; // [rsp+128h] [rbp-540h]
  _BYTE v74[160]; // [rsp+130h] [rbp-538h] BYREF
  _BYTE v75[1120]; // [rsp+1D0h] [rbp-498h] BYREF

  v1 = a1;
  v55 = -1073741823;
  Current = DXGPROCESS::GetCurrent(a1);
  v57 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 1073;
    v41 = PsGetCurrentProcess(v40);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v41,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v19;
  }
  memset(v75, 0, sizeof(v75));
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( v1 >= MmUserProbeAddress )
      v1 = MmUserProbeAddress;
    RtlCopyVolatileMemory(v75, (const void *)v1, 0x460uLL);
    v1 = (unsigned __int64)v75;
  }
  v63 = v1;
  v51 = 0LL;
  v50 = 2147;
  v53 = &v55;
  v54 = 1;
  v52 = v1 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v1 & -(__int64)(bTracingEnabled != 0), (__int64)&EventProfilerEnter, v4, 2147);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v50, 2147);
  v5 = (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v1 + 16);
  if ( *(_DWORD *)(v1 + 16) != 9 )
  {
    v19 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1105;
    v42 = L"Invalid PresentHistoryToken Mode, returning 0x%I64x";
LABEL_84:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v42, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_30;
  }
  if ( *(_DWORD *)(v1 + 1096) )
  {
    v19 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1112;
    v42 = L"Reserved bits should not be set, returning 0x%I64x";
    goto LABEL_84;
  }
  v6 = *(unsigned int *)v1;
  v56 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v49, *(_DWORD *)(v1 + 4), Current, &v56);
  if ( !v56 )
  {
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)(v1 + 4), -1073741811LL);
    WdLogGlobalForLineNumber = 1129;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *(unsigned int *)(v1 + 4),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v35 = v49;
    if ( v49 )
    {
LABEL_63:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
    }
LABEL_30:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v54 )
    {
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v21,
          v23,
          *(_DWORD *)v52,
          *(_DWORD *)(v52 + 56),
          *(_QWORD *)(v52 + 80),
          *(_QWORD *)(v52 + 88),
          *(_DWORD *)(v52 + 1096),
          *v53);
    }
    else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v21,
        v23,
        *(_DWORD *)v52,
        *(_QWORD *)(v52 + 8),
        *(_DWORD *)(v52 + 16),
        *(_DWORD *)(v52 + 84),
        *(_DWORD *)(v52 + 88),
        *v53,
        *(_DWORD *)(v52 + 20),
        *(_DWORD *)(v52 + 24));
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v50);
    return (unsigned int)v19;
  }
  v7 = *(_QWORD *)(*((_QWORD *)v56 + 2) + 16LL);
  if ( (*(_DWORD *)(v7 + 2976) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v1 + 4));
    WdLogGlobalForLineNumber = 1137;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Present is not supported on MCDM adapter device 0x%I64x",
      *(unsigned int *)(v1 + 4),
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v54 )
    {
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v36,
          v38,
          *(_DWORD *)v52,
          *(_DWORD *)(v52 + 56),
          *(_QWORD *)(v52 + 80),
          *(_QWORD *)(v52 + 88),
          *(_DWORD *)(v52 + 1096),
          *v53);
    }
    else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v36,
        v38,
        *(_DWORD *)v52,
        *(_QWORD *)(v52 + 8),
        *(_DWORD *)(v52 + 16),
        *(_DWORD *)(v52 + 84),
        *(_DWORD *)(v52 + 88),
        *v53,
        *(_DWORD *)(v52 + 20),
        *(_DWORD *)(v52 + 24));
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, (__int64)&EventProfilerExit, v38, v50);
    return (unsigned int)-1073741811;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v58, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v58);
  v9 = (char *)Current + 248;
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  v11 = (struct DXGPROCESS *)((char *)Current + 248);
  if ( *(int *)(v7 + 3004) >= 2000 )
  {
    DXGPUSHLOCK::AcquireShared(v11);
    if ( (unsigned int)v10 < *((_DWORD *)Current + 74)
      && (v12 = 2 * v10,
          v13 = *((_QWORD *)Current + 35),
          (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v13 + 8 * v12 + 8) & 0x60))
      && (*(_DWORD *)(v13 + 8 * v12 + 8) & 0x2000) == 0
      && (v14 = *(_DWORD *)(v13 + 8 * v12 + 8) & 0x1F) != 0 )
    {
      if ( v14 == 11 )
      {
        v15 = *(_QWORD *)(v13 + 8 * v12);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        v15 = 0LL;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v15 = 0LL;
    }
    _InterlockedAdd((volatile signed __int32 *)Current + 66, 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v9, 0LL);
    KeLeaveCriticalRegion();
    if ( v15 )
      goto LABEL_19;
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, v6, -1073741811LL);
    WdLogGlobalForLineNumber = 1156;
    goto LABEL_60;
  }
  DXGPUSHLOCK::AcquireShared(v11);
  if ( (unsigned int)v10 < *((_DWORD *)Current + 74)
    && (v31 = 2 * v10,
        v32 = *((_QWORD *)Current + 35),
        (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v32 + 8 * v31 + 8) & 0x60))
    && (*(_DWORD *)(v32 + 8 * v31 + 8) & 0x2000) == 0
    && (v33 = *(_DWORD *)(v32 + 8 * v31 + 8) & 0x1F) != 0 )
  {
    if ( v33 == 8 )
    {
      v34 = *(_QWORD *)(v32 + 8 * v31);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      v34 = 0LL;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v34 = 0LL;
  }
  _InterlockedAdd((volatile signed __int32 *)Current + 66, 0xFFFFFFFF);
  ExReleasePushLockSharedEx(v9, 0LL);
  KeLeaveCriticalRegion();
  if ( !v34 )
  {
    v19 = -1073741811;
    WdLogSingleEntry2(2LL, v6, -1073741811LL);
    WdLogGlobalForLineNumber = 1166;
LABEL_60:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hSyncObj (0x%I64x) specified, returning 0x%I64x",
      v6,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v59 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
    v35 = v49;
    if ( !v49 )
      goto LABEL_30;
    goto LABEL_63;
  }
LABEL_19:
  _InterlockedIncrement64((volatile signed __int64 *)v56 + 8);
  v57 = v56;
  DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
  v61 = v7;
  v62 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
  if ( *(_DWORD *)(v7 + 200) == 1 )
  {
    v17 = v56;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, (__int64)v56, 2, v16, 0);
    v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v74, 0LL);
    v55 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry1(2LL, v18);
      WdLogGlobalForLineNumber = 1194;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to acquire CoreDeviceAccess, returning 0x%I64x",
        v55,
        0LL,
        0LL,
        0LL,
        0LL);
      v19 = v55;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
      v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
      goto LABEL_23;
    }
    v19 = SubmitPresentHistoryTokenPreparation(
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v60,
            (struct COREDEVICEACCESS *)v74,
            (struct DXGADAPTER *)v7,
            v5,
            0LL,
            0);
    v55 = v19;
    if ( v19 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
      v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_23:
      if ( v20 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
      if ( v59 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
      if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
      goto LABEL_30;
    }
    v65 = -1073741823;
    v66 = v5;
    v67 = v60;
    v68 = v74;
    if ( !v5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 122;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pToken", 122LL, 0LL, 0LL, 0LL, 0LL);
    }
    CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)Entry, *(struct ADAPTER_RENDER **)(v7 + 3128), 1);
    v25 = (struct VIDSCH_SUBMIT_DATA_BASE *)Entry[0];
    if ( Entry[0] )
    {
      *(_DWORD *)Entry[0] = *(_DWORD *)Entry[0] & 0xFFFCFEDF | 0x10120;
      v26 = v63;
      *((_QWORD *)v25 + 59) = *(_QWORD *)(v63 + 8);
      v71 = 0;
      v69 = v26;
      v70 = v6;
      v72 = v7;
      v73 = v17;
      v27 = SubmitPresentHistoryToken(
              v5,
              (struct COREDEVICEACCESS *)v74,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v60,
              0LL,
              1,
              0LL,
              0LL,
              v25,
              0LL,
              (struct _PRESENT_REDIRECTED_PARAMS *)&v69,
              0LL);
      v55 = v27;
      v65 = v27;
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Entry[1] + 1424), v25);
      TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v65);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v56 + 2), v56);
      if ( v59 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v58);
      if ( v49 && _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
      if ( v54 )
      {
        if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            v28,
            v30,
            *(_DWORD *)v52,
            *(_DWORD *)(v52 + 56),
            *(_QWORD *)(v52 + 80),
            *(_QWORD *)(v52 + 88),
            *(_DWORD *)(v52 + 1096),
            *v53);
      }
      else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v28,
          v30,
          *(_DWORD *)v52,
          *(_QWORD *)(v52 + 8),
          *(_DWORD *)(v52 + 16),
          *(_DWORD *)(v52 + 84),
          *(_DWORD *)(v52 + 88),
          *v53,
          *(_DWORD *)(v52 + 20),
          *(_DWORD *)(v52 + 24));
      }
      if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v50);
      return v27;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1218;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate VidSchSubmitData",
        1218LL,
        0LL,
        0LL,
        0LL,
        0LL);
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)Entry);
      TOKEN_BINDING_GUARD::~TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v65);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v57);
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v58);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v49);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
      if ( v54 )
      {
        if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            v46,
            v48,
            *(_DWORD *)v52,
            *(_DWORD *)(v52 + 56),
            *(_QWORD *)(v52 + 80),
            *(_QWORD *)(v52 + 88),
            *(_DWORD *)(v52 + 1096),
            *v53);
      }
      else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        McTemplateK0qpqqqqpp_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v46,
          v48,
          *(_DWORD *)v52,
          *(_QWORD *)(v52 + 8),
          *(_DWORD *)(v52 + 16),
          *(_DWORD *)(v52 + 84),
          *(_DWORD *)(v52 + 88),
          *v53,
          *(_DWORD *)(v52 + 20),
          *(_DWORD *)(v52 + 24));
      }
      if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v47, (__int64)&EventProfilerExit, v48, v50);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, v7, -1073741823LL);
    WdLogGlobalForLineNumber = 1186;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DXGADAPTER: 0x%I64x stopped, returning 0x%I64x",
      v7,
      -1073741823LL,
      0LL,
      0LL,
      0LL);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v60);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v57);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v58);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v49);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
    if ( v54 )
    {
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          v43,
          v45,
          *(_DWORD *)v52,
          *(_DWORD *)(v52 + 56),
          *(_QWORD *)(v52 + 80),
          *(_QWORD *)(v52 + 88),
          *(_DWORD *)(v52 + 1096),
          *v53);
    }
    else if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        v43,
        v45,
        *(_DWORD *)v52,
        *(_QWORD *)(v52 + 8),
        *(_DWORD *)(v52 + 16),
        *(_DWORD *)(v52 + 84),
        *(_DWORD *)(v52 + 88),
        *v53,
        *(_DWORD *)(v52 + 20),
        *(_DWORD *)(v52 + 24));
    }
    if ( (qword_14015B4C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, (__int64)&EventProfilerExit, v45, v50);
    return 3221225473LL;
  }
}
