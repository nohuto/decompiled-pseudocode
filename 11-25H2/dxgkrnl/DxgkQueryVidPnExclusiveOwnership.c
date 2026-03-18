/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x14030A210
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038794 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400419B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140047630 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z @ 0x14006AC78 (-AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x14028A734 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x14028A750 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x14030A940 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  const void *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r13
  struct DXGGLOBAL *Global; // rax
  int v10; // eax
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-F0h]
  char v21; // [rsp+60h] [rbp-E8h]
  struct DXGPROCESS *Process; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-D8h]
  int v24; // [rsp+78h] [rbp-D0h] BYREF
  __int64 Src; // [rsp+7Ch] [rbp-CCh] BYREF
  int v26; // [rsp+84h] [rbp-C4h] BYREF
  _BYTE v27[8]; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+90h] [rbp-B8h]
  char v29; // [rsp+98h] [rbp-B0h]
  void *v30[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-98h]
  __int128 v32; // [rsp+C0h] [rbp-88h] BYREF
  _BYTE v33[80]; // [rsp+D0h] [rbp-78h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2126);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2126);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    *(_OWORD *)v30 = 0LL;
    v31 = 0LL;
    v6 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v30, v6, 0x20uLL);
    v23 = 0LL;
    Src = 0LL;
    v26 = 0;
    v24 = -1;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v33, v30[0], 4096);
    LODWORD(v7) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v33, 1);
    if ( (_DWORD)v7 == -1073741790 )
    {
      DXGPROCESSMUTEXBYHANDLE::AdjustRequiredPermission((DXGPROCESSMUTEXBYHANDLE *)v33);
      LODWORD(v7) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v33, 1);
    }
    if ( (int)v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v30[0]);
      WdLogGlobalForLineNumber = 11053;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to find DxgProcess for process handle 0x%I64x",
        (__int64)v30[0],
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v33);
      v8 = *((_QWORD *)Current + 11);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v27, Current);
      if ( v29 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v27, 0LL, 0LL);
        WdLogGlobalForLineNumber = 1924;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v28 + 88) + 32LL))(1LL);
      v29 = 1;
      v32 = 0LL;
      if ( (*(unsigned int (__fastcall **)(void *, __int128 *))(v8 + 376))(v30[1], &v32) )
      {
        LODWORD(v23) = (DWORD2(v32) + (int)v32) / 2;
        HIDWORD(v23) = (DWORD1(v32) + HIDWORD(v32)) / 2;
        Global = DXGGLOBAL::GetGlobal();
        v10 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)&Process,
                4);
        v7 = v10;
        if ( v10 < 0 )
        {
          if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 404) & 2) != 0 )
          {
            WdLogSingleEntry5(0LL, 275LL, 33LL, v7, 0LL, 0LL);
            WdLogGlobalForLineNumber = 11099;
          }
        }
        else
        {
          v11 = (void *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v11 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v11, &Src, 8uLL);
          v12 = (void *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v12 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v12, &v24, 4uLL);
          v13 = (void *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v13 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v13, &v26, 4uLL);
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11067;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"pfnDxgkEngGetWindowRect failed to get window rect from a window handle",
          11067LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v27);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v33);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v19);
    }
    return (unsigned int)v7;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11023;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid process context", 11023LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v19);
    return 3221225485LL;
  }
}
