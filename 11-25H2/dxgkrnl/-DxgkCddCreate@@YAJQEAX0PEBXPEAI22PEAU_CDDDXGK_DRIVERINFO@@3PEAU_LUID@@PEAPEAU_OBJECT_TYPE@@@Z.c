/*
 * XREFs of ?DxgkCddCreate@@YAJQEAX0PEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAU_LUID@@PEAPEAU_OBJECT_TYPE@@@Z @ 0x1402DD520
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1402DC858 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1402DE034 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1402DE3B0 (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403345B4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033599C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkCddCreate(
        char *a1,
        void *const a2,
        const struct _DXGKWIN32KENG_INTERFACE *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct _CDDDXGK_DRIVERINFO *a7,
        struct _CDDDXGK_DRIVERINFO *a8,
        struct _LUID *a9,
        struct _OBJECT_TYPE **a10)
{
  __int64 v13; // rcx
  struct DXGPROCESS *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 CurrentProcess; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  const wchar_t *v24; // r9
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // r8
  bool v29; // zf
  struct DXGDEVICE *v30; // r13
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rsi
  struct DXGDEVICE *v35; // rbx
  __int64 v36; // r9
  const char *v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // r9
  const char *v40; // rdx
  struct DXGCONTEXT *v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // r9
  const char *v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+58h] [rbp-A8h]
  char v53; // [rsp+60h] [rbp-A0h]
  struct _OBJECT_TYPE **v54; // [rsp+68h] [rbp-98h]
  struct DXGCONTEXT *v55; // [rsp+70h] [rbp-90h] BYREF
  struct DXGHWQUEUE *v56; // [rsp+78h] [rbp-88h] BYREF
  struct DXGDEVICE *v57; // [rsp+80h] [rbp-80h] BYREF
  struct DXGPROCESS *Current; // [rsp+88h] [rbp-78h] BYREF
  void *v59; // [rsp+90h] [rbp-70h]
  _QWORD v60[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v61[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v62[2]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v63[24]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v64[24]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v65[24]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v66[160]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v67[160]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v68[160]; // [rsp+250h] [rbp+150h] BYREF

  v51 = -1;
  v62[0] = a6;
  v54 = a10;
  v59 = a2;
  v61[0] = a5;
  v60[0] = a9;
  v57 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 3000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(0LL, (__int64)&EventProfilerEnter, (__int64)a3, 3000);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v51, 3000);
  if ( !a4 || !a5 || !a7 || !a8 || !a9 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 164;
    v24 = L"Invalid paramters, returning 0x%I64x.";
LABEL_62:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v24, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v49, (__int64)&EventProfilerExit, v50, v51);
    return 3221225485LL;
  }
  *a4 = 0;
  *(_OWORD *)a7 = 0LL;
  *((_QWORD *)a7 + 2) = 0LL;
  *(_OWORD *)a8 = 0LL;
  *((_QWORD *)a8 + 2) = 0LL;
  Current = DXGPROCESS::GetCurrent(v13);
  v14 = Current;
  if ( !Current )
  {
    v15 = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL, 0, 0LL);
    v17 = v15;
    if ( v15 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v16);
      WdLogSingleEntry3(2LL, v17, a1, CurrentProcess);
      WdLogGlobalForLineNumber = 203;
      v20 = PsGetCurrentProcess(v19);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x DXGPROCESS::CreateDxgProcess() failed 0x%I64x 0x%I64x",
        v17,
        (__int64)a1,
        v20,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
      if ( v53 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit, v22, v51);
      }
      return (unsigned int)v17;
    }
    v14 = Current;
  }
  DXGPROCESS::SetWin32kInterface(v14, a3);
  *((_DWORD *)v14 + 102) |= 1u;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v24 = L"No pAdapter specified, returning 0x%I64x";
    WdLogGlobalForLineNumber = 219;
    goto LABEL_62;
  }
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(a1 + 412),
                                           &v57,
                                           &v55,
                                           &v56,
                                           0);
  v26 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession < 0 )
  {
    WdLogSingleEntry1(2LL, CddDeviceAndContextForCurrentSession);
    WdLogGlobalForLineNumber = 234;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get CDD device and context for current session (Status = 0x%I64x).",
      v26,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    v29 = v53 == 0;
LABEL_21:
    if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v51);
    return (unsigned int)v26;
  }
  v30 = v57;
  v31 = *(_QWORD *)(*((_QWORD *)v57 + 2) + 16LL);
  if ( !*(_QWORD *)(v31 + 3128) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 239;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pRenderAdapter->IsRenderAdapter()",
      239LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v32 = *((_QWORD *)v30 + 235);
  if ( v32 && !*(_QWORD *)(v32 + 3120) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 241;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
      241LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v59 == (void *)v31 )
  {
    *(_DWORD *)a8 = *(_DWORD *)(v31 + 420);
    *((_DWORD *)a8 + 1) = *(_DWORD *)(v31 + 424);
    *((_DWORD *)a8 + 2) = *(_DWORD *)(v31 + 428);
    *((_DWORD *)a8 + 3) = *(_DWORD *)(v31 + 432);
    *((_DWORD *)a8 + 4) = *(_DWORD *)(v31 + 436);
    *((_DWORD *)a8 + 5) = *(_DWORD *)(v31 + 3004);
    if ( v32 )
    {
      *(_DWORD *)a7 = *(_DWORD *)(v32 + 420);
      *((_DWORD *)a7 + 1) = *(_DWORD *)(v32 + 424);
      *((_DWORD *)a7 + 2) = *(_DWORD *)(v32 + 428);
      *((_DWORD *)a7 + 3) = *(_DWORD *)(v32 + 432);
      *((_DWORD *)a7 + 4) = *(_DWORD *)(v32 + 436);
      *((_DWORD *)a7 + 5) = *(_DWORD *)(v32 + 3004);
      if ( (*(_DWORD *)(v32 + 444) & 0x100) == 0 )
        v31 = v32;
    }
    else
    {
      *(_OWORD *)a7 = *(_OWORD *)a8;
      *((_QWORD *)a7 + 2) = *((_QWORD *)a8 + 2);
    }
    *(_QWORD *)v60[0] = *(_QWORD *)(v31 + 412);
    *a4 = *((_DWORD *)v30 + 117);
    *(_DWORD *)v61[0] = *((_DWORD *)v55 + 6);
    v48 = (int)v56;
    if ( v56 )
      v48 = *((_DWORD *)v56 + 6);
    *(_DWORD *)v62[0] = v48;
    *v54 = g_pDxgkSharedAllocationObjectType;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    v29 = v53 == 0;
    goto LABEL_21;
  }
  if ( v56 )
  {
    v33 = _InterlockedDecrement64((volatile signed __int64 *)v56 + 13);
    if ( v33 >= 0 )
    {
      if ( !v33 )
      {
        v34 = *((_QWORD *)v56 + 2);
        v35 = *(struct DXGDEVICE **)(v34 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62, v35);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v63,
          *(struct DXGADAPTER **)(*((_QWORD *)v35 + 2) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, (__int64)v35, 2, v36, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v66, v37);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v34, v56, (struct COREDEVICEACCESS *)v66);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v66);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v62);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v38 = *(_QWORD *)(v34 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v61,
            (struct DXGDEVICE *)v38);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v64,
            *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 16LL) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, v38, 2, v39, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v67, v40);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v38, (struct DXGCONTEXT *)v34, (struct COREDEVICEACCESS *)v67);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v67);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v38 + 16), (struct DXGDEVICE *)v38);
        }
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 141;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NewReferenceCount >= 0", 141LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v41 = v55;
    v42 = *((_QWORD *)v55 + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v60,
      (struct DXGDEVICE *)v42);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v65,
      *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v41 + 2) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, v42, 2, v43, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v68, v44);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v42, v55, (struct COREDEVICEACCESS *)v68);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v68);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v42 + 16), (struct DXGDEVICE *)v42);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
  v45 = (__int64)v59;
  WdLogSingleEntry3(2LL, v59, v31, -1073741130LL);
  WdLogGlobalForLineNumber = 260;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Paired Render adapter has been changed from 0x%I64x to 0x%I64x for current session (Status = 0x%I64x).",
    v45,
    v31,
    -1073741130LL,
    0LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v46, (__int64)&EventProfilerExit, v47, v51);
  return 3221226166LL;
}
