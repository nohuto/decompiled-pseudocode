/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1402997B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038420 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1400415B0 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140047050 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z @ 0x14006A8A4 (-AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x140296CF8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x140296D14 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x140298BC0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // r14
  const void *v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r13
  struct DXGGLOBAL *Global; // rax
  int v9; // eax
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-F0h]
  char v20; // [rsp+60h] [rbp-E8h]
  struct DXGPROCESS *Process; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-D8h]
  int v23; // [rsp+78h] [rbp-D0h] BYREF
  __int64 Src; // [rsp+7Ch] [rbp-CCh] BYREF
  int v25; // [rsp+84h] [rbp-C4h] BYREF
  _BYTE v26[8]; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+90h] [rbp-B8h]
  char v28; // [rsp+98h] [rbp-B0h]
  void *v29[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-98h]
  __int128 v31; // [rsp+C0h] [rbp-88h] BYREF
  _BYTE v32[80]; // [rsp+D0h] [rbp-78h] BYREF

  v18 = -1;
  v19 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2126);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 2126);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    *(_OWORD *)v29 = 0LL;
    v30 = 0LL;
    v5 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v5 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v29, v5, 0x20uLL);
    v22 = 0LL;
    Src = 0LL;
    v25 = 0;
    v23 = -1;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32, v29[0], 4096);
    LODWORD(v6) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v32, 1);
    if ( (_DWORD)v6 == -1073741790 )
    {
      DXGPROCESSMUTEXBYHANDLE::AdjustRequiredPermission((DXGPROCESSMUTEXBYHANDLE *)v32);
      LODWORD(v6) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v32, 1);
    }
    if ( (int)v6 < 0 )
    {
      WdLogSingleEntry1(2LL, v29[0]);
      WdLogGlobalForLineNumber = 11114;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to find DxgProcess for process handle 0x%I64x",
        (__int64)v29[0],
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v32);
      v7 = *((_QWORD *)Current + 11);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v26, Current);
      if ( v28 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v26, 0LL, 0LL);
        WdLogGlobalForLineNumber = 1902;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v27 + 88) + 32LL))(1LL);
      v28 = 1;
      v31 = 0LL;
      if ( (*(unsigned int (__fastcall **)(void *, __int128 *))(v7 + 376))(v29[1], &v31) )
      {
        LODWORD(v22) = (DWORD2(v31) + (int)v31) / 2;
        HIDWORD(v22) = (DWORD1(v31) + HIDWORD(v31)) / 2;
        Global = DXGGLOBAL::GetGlobal();
        v9 = DXGGLOBAL::IterateAdaptersWithCallback(Global, QueryVidPnExclusiveOwnershipCallBack, &Process, 4LL);
        v6 = v9;
        if ( v9 < 0 )
        {
          if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 412) & 2) != 0 )
          {
            WdLogSingleEntry5(0LL, 275LL, 33LL, v6, 0LL, 0LL);
            WdLogGlobalForLineNumber = 11160;
          }
        }
        else
        {
          v10 = (void *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v10 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v10, &Src, 8uLL);
          v11 = (void *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v11 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v11, &v23, 4uLL);
          v12 = (void *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v12 = (void *)MmUserProbeAddress;
          RtlCopyVolatileMemory(v12, &v25, 4uLL);
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11128;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"pfnDxgkEngGetWindowRect failed to get window rect from a window handle",
          11128LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v26);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v18);
    }
    return (unsigned int)v6;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 11084;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid process context", 11084LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
    if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v18);
    return 3221225485LL;
  }
}
