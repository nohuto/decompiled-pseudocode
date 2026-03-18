/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x140309910
 * Callers:
 *     ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402209F0 (-VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038794 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1401832BC (-VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYIN.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x14028A734 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x14028A750 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x14030A940 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(_DWORD *a1)
{
  __int64 v2; // r8
  char CurrentThreadPreviousMode; // r12
  __int64 v4; // rcx
  _QWORD *v5; // r14
  const void *v6; // rdx
  struct DXGPROCESS *Current; // rbx
  struct DXGPROCESS *Process; // r13
  struct DXGADAPTER *v9; // rdi
  int PairingAdapters; // ebx
  DXGADAPTER *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edi
  struct DXGADAPTER *v15; // rbx
  _DWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  int VideoMemoryInfo; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  DXG_GUEST_VIRTUALGPU_VMBUS *v34; // rdi
  int v35; // ebx
  int HostProcess; // eax
  int v37; // [rsp+50h] [rbp-188h] BYREF
  __int64 v38; // [rsp+58h] [rbp-180h]
  char v39; // [rsp+60h] [rbp-178h]
  struct DXGADAPTER *v40; // [rsp+68h] [rbp-170h] BYREF
  DXGADAPTER *v41; // [rsp+70h] [rbp-168h] BYREF
  struct DXGADAPTER *v42; // [rsp+80h] [rbp-158h] BYREF
  unsigned __int64 v43; // [rsp+88h] [rbp-150h] BYREF
  __int64 v44; // [rsp+90h] [rbp-148h]
  _OWORD Src[3]; // [rsp+98h] [rbp-140h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-110h]
  _BYTE v47[8]; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v48[16]; // [rsp+D8h] [rbp-100h] BYREF
  DXGADAPTER *v49; // [rsp+E8h] [rbp-F0h]
  _BYTE v50[16]; // [rsp+118h] [rbp-C0h] BYREF
  DXGADAPTER *v51; // [rsp+128h] [rbp-B0h]
  char v52; // [rsp+130h] [rbp-A8h]
  __int64 v53; // [rsp+138h] [rbp-A0h]
  _BYTE v54[80]; // [rsp+160h] [rbp-78h] BYREF

  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v37 = -1;
  v38 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2119;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(qword_14015B4C0, (__int64)&EventProfilerEnter, v2, 2119);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2119);
  memset(Src, 0, sizeof(Src));
  v46 = 0LL;
  v5 = Src;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Src, v6, 0x30uLL);
  }
  else
  {
    v5 = a1;
  }
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54, (void *)*v5, 1024);
    Process = Current;
    if ( *v5 )
    {
      v31 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v54, 1);
      v14 = v31;
      if ( v31 < 0 )
      {
        WdLogSingleEntry2(3LL, *v5, v31);
        WdLogGlobalForLineNumber = 14314;
LABEL_53:
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v37);
        return (unsigned int)v14;
      }
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v54);
    }
    v42 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v41, *((_DWORD *)v5 + 2), Current, &v42, 1);
    v9 = v42;
    if ( v42 )
    {
      v40 = 0LL;
      v43 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v42, 0, &v40, &v43, 0LL, 0LL, 0);
      if ( PairingAdapters < 0 )
      {
        WdLogSingleEntry1(3LL, v9);
        WdLogGlobalForLineNumber = 14338;
LABEL_42:
        if ( v41 )
          DXGADAPTER::ReleaseReference(v41);
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
        if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit, v28, v37);
        return (unsigned int)PairingAdapters;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v40, 0LL);
      if ( v52 )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v50, 0LL, 0LL);
        WdLogGlobalForLineNumber = 7603;
      }
      v11 = v51;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v51 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v51 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventBlockThread, v13, 72);
          KeWaitForSingleObject((char *)v51 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v51, 0LL);
        v11 = v51;
      }
      v53 = 0LL;
      v52 = 1;
      if ( *((_DWORD *)v11 + 50) == 1 )
      {
        if ( v49 == v51 || (COREACCESS::AcquireShared((COREACCESS *)v48, 0LL), *((_DWORD *)v49 + 50) == 1) )
        {
          v47[1] = 1;
          v14 = 0;
LABEL_19:
          v15 = v40;
          DXGADAPTER::ReleaseReference(v40);
          if ( v14 >= 0 )
          {
            if ( CurrentThreadPreviousMode == 1
              && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
            {
              v16 = a1 + 12;
              if ( (unsigned __int64)(a1 + 12) >= MmUserProbeAddress )
                v16 = (_DWORD *)MmUserProbeAddress;
              *((_DWORD *)v5 + 12) = *v16;
              v15 = v40;
            }
            if ( *((_BYTE *)v15 + 209) )
            {
              v34 = (struct DXGADAPTER *)((char *)v15 + 4664);
              v35 = *((_DWORD *)v15 + 1188);
              HostProcess = DXGPROCESS::GetHostProcess(Process);
              VideoMemoryInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
                                  v34,
                                  HostProcess,
                                  v35,
                                  (struct _D3DKMT_QUERYVIDEOMEMORYINFO *)v5);
            }
            else
            {
              v17 = *((_QWORD *)v15 + 391);
              v18 = *(_QWORD *)(v17 + 760);
              v19 = *((unsigned int *)v5 + 3);
              v20 = *((_DWORD *)v5 + 12);
              v44 = *(_QWORD *)(v17 + 768);
              v21 = *((_QWORD *)Process + 8);
              if ( v21 )
                v22 = *(_QWORD *)(v21 + 8LL * (unsigned int)(*(_DWORD *)v18 - 1));
              else
                v22 = 0LL;
              VideoMemoryInfo = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD *, _QWORD *))(*(_QWORD *)(v18 + 8) + 992LL))(
                                  v44,
                                  v22,
                                  v20,
                                  v19,
                                  v5 + 2,
                                  v5 + 3,
                                  v5 + 5,
                                  v5 + 4);
            }
            PairingAdapters = VideoMemoryInfo;
            if ( VideoMemoryInfo >= 0 )
            {
              if ( CurrentThreadPreviousMode == 1 )
              {
                if ( (unsigned __int64)a1 >= MmUserProbeAddress )
                  a1 = (_DWORD *)MmUserProbeAddress;
                RtlCopyVolatileMemory(a1, v5, 0x30uLL);
              }
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
              if ( v41 )
                DXGADAPTER::ReleaseReference(v41);
              DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
              if ( v39 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit, v25, v37);
              }
              return 0LL;
            }
            WdLogSingleEntry1(3LL, VideoMemoryInfo);
            WdLogGlobalForLineNumber = 14394;
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
            goto LABEL_42;
          }
          WdLogSingleEntry1(3LL, v15);
          WdLogGlobalForLineNumber = 14355;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
          if ( v41 )
            DXGADAPTER::ReleaseReference(v41);
          goto LABEL_53;
        }
        COREACCESS::Release((COREACCESS *)v48);
      }
      COREACCESS::Release((COREACCESS *)v50);
      v14 = -1073741130;
      goto LABEL_19;
    }
    WdLogSingleEntry2(2LL, Current, *((unsigned int *)v5 + 2));
    WdLogGlobalForLineNumber = 14327;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      *((unsigned int *)v5 + 2),
      0LL,
      0LL,
      0LL);
    if ( v41 )
      DXGADAPTER::ReleaseReference(v41);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 14296;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, (__int64)&EventProfilerExit, v30, v37);
  return 3221225485LL;
}
