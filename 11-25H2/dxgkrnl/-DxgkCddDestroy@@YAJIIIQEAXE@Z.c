/*
 * XREFs of ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x140332940
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
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
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1401F6478 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1402BC5C0 (DxgkShutdownBootGraphics.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403345B4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14033599C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, __int64 a3, char *a4, char a5)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // r15
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // r8d
  __int64 v21; // r14
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // edx
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // r9
  const char *v29; // rdx
  __int64 v31; // rax
  __int64 v32; // r15
  struct DXGDEVICE *v33; // rbx
  __int64 v34; // r9
  const char *v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // r9
  const char *v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // r9
  const char *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h]
  char v48; // [rsp+68h] [rbp-98h]
  unsigned int v49; // [rsp+70h] [rbp-90h]
  _BYTE v50[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v51[16]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v52[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v53[16]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v54[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v55[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v56[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v57[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v58[160]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v59[160]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v60[160]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v61[160]; // [rsp+300h] [rbp+200h] BYREF

  v46 = -1;
  v6 = (unsigned int)a3;
  v49 = a2;
  v7 = (unsigned int)a1;
  v47 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v48 = 1;
    v46 = 3001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 3001);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v46, 3001);
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 336;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_50:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    v16 = v48 == 0;
    goto LABEL_51;
  }
  Current = DXGPROCESS::GetCurrent(v8);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 342;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL != pProcess", 342LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v10 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)Current + 74)
    && (v11 = *((_QWORD *)Current + 35), (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60))
    && (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) == 0
    && (v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F) != 0 )
  {
    if ( v12 == 3 )
    {
      v13 = *(_QWORD *)(v11 + 16LL * v10);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v13 = 0LL;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v13 = 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v13 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v7, Current);
    WdLogGlobalForLineNumber = 348;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v7,
      (__int64)Current,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    v16 = v48 == 0;
LABEL_51:
    if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v46);
    return 3221225485LL;
  }
  DxgkShutdownBootGraphics((struct DXGDEVICE *)v13, 0);
  if ( a5 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(a4 + 412), (struct DXGDEVICE *)v13);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v17 = v49;
  v18 = (v49 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 < *((_DWORD *)Current + 74)
    && (v19 = *((_QWORD *)Current + 35),
        v20 = *(_DWORD *)(v19 + 16 * v18 + 8),
        ((v49 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60))
    && (v20 & 0x2000) == 0
    && (v20 & 0x1F) != 0 )
  {
    if ( (*(_BYTE *)(v19 + 16 * (((unsigned __int64)v49 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 7 )
    {
      v21 = *(_QWORD *)(v19 + 16 * (((unsigned __int64)v49 >> 6) & 0xFFFFFF));
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v21 = 0LL;
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v17 = v49;
    }
  }
  else
  {
    v21 = 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  v22 = v17;
  v45 = v17;
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v21 )
  {
    WdLogSingleEntry3(2LL, -1073741811LL, v22, Current);
    WdLogGlobalForLineNumber = 375;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x Invalid hContext=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v45,
      (__int64)Current,
      0LL,
      0LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
    goto LABEL_50;
  }
  if ( (_DWORD)v6 )
  {
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v23 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v23 < *((_DWORD *)Current + 74)
      && (v24 = *((_QWORD *)Current + 35),
          v25 = *(_DWORD *)(v24 + 16 * v23 + 8),
          (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60))
      && (v25 & 0x2000) == 0
      && (v25 & 0x1F) != 0 )
    {
      if ( (*(_BYTE *)(v24 + 16 * (((unsigned __int64)(unsigned int)v6 >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xF )
      {
        v26 = *(_QWORD *)(v24 + 16 * (((unsigned __int64)(unsigned int)v6 >> 6) & 0xFFFFFF));
      }
      else
      {
        WdLogSingleEntry0(2LL);
        v26 = 0LL;
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v26 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)Current + 66);
    ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( !v26 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, v6, Current);
      WdLogGlobalForLineNumber = 390;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x Invalid hHwQueue=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v6,
        (__int64)Current,
        0LL,
        0LL);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v27 = *(_QWORD *)(v21 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v50,
          (struct DXGDEVICE *)v27);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v54,
          *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v58, v27, 2, v28, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v58, v29);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 200LL) != 4 )
          DXGDEVICE::DestroyContext((DXGDEVICE *)v27, (struct DXGCONTEXT *)v21, (struct COREDEVICEACCESS *)v58);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v58);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v27 + 16), (struct DXGDEVICE *)v27);
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
      goto LABEL_50;
    }
    v31 = _InterlockedDecrement64((volatile signed __int64 *)(v26 + 104));
    if ( v31 >= 0 )
    {
      if ( !v31 )
      {
        v32 = *(_QWORD *)(v26 + 16);
        v33 = *(struct DXGDEVICE **)(v32 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51, v33);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v55,
          *(struct DXGADAPTER **)(*((_QWORD *)v33 + 2) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v59, (__int64)v33, 2, v34, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v59, v35);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 2) + 16LL) + 200LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v32, (struct DXGHWQUEUE *)v26, (struct COREDEVICEACCESS *)v59);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v59);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v55);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v36 = *(_QWORD *)(v32 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v52,
            (struct DXGDEVICE *)v36);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v56,
            *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v60, v36, 2, v37, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v60, v38);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 16LL) + 200LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v36, (struct DXGCONTEXT *)v32, (struct COREDEVICEACCESS *)v60);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v60);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v56);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v52);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v36 + 16), (struct DXGDEVICE *)v36);
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
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v39 = *(_QWORD *)(v21 + 16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v53,
      (struct DXGDEVICE *)v39);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v57,
      *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, v39, 2, v40, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v61, v41);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v39, (struct DXGCONTEXT *)v21, (struct COREDEVICEACCESS *)v61);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v57);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v53);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v39 + 16), (struct DXGDEVICE *)v39);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v46);
  return 0LL;
}
