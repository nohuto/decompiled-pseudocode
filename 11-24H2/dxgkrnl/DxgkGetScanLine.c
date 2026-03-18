/*
 * XREFs of DxgkGetScanLine @ 0x1402D3070
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x140198D5C (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1401F3AD4 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A4390 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1402D3C94 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v8; // r14
  struct _KTHREAD **v9; // rsi
  const void *v10; // rdx
  struct DXGADAPTER *v11; // rsi
  int PairingAdapters; // eax
  unsigned int v13; // r14d
  struct DXGADAPTER *v14; // rsi
  DXGADAPTER *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGADAPTER *v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // r12
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // r8d
  BOOLEAN InVerticalBlank; // al
  bool v27; // cc
  UINT v28; // ecx
  int ScanLine; // ebx
  int v30; // eax
  void *v31; // rcx
  void *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  char v36; // cl
  ADAPTER_DISPLAY *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGGLOBAL *v49; // rax
  DXGGLOBAL *v50; // rax
  BLTQUEUE **v51; // rcx
  unsigned __int64 v52; // rdx
  int v53; // [rsp+50h] [rbp-128h] BYREF
  __int64 v54; // [rsp+58h] [rbp-120h]
  char v55; // [rsp+60h] [rbp-118h]
  struct DXGADAPTER *v56; // [rsp+68h] [rbp-110h] BYREF
  DXGADAPTER *v57[2]; // [rsp+70h] [rbp-108h] BYREF
  struct DXGADAPTER *v58; // [rsp+80h] [rbp-F8h] BYREF
  unsigned __int64 v59; // [rsp+88h] [rbp-F0h] BYREF
  unsigned int v60[4]; // [rsp+90h] [rbp-E8h] BYREF
  struct _DXGKARG_GETSCANLINE Src; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v62[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v63[16]; // [rsp+B8h] [rbp-C0h] BYREF
  DXGADAPTER *v64; // [rsp+C8h] [rbp-B0h]
  _BYTE v65[16]; // [rsp+F8h] [rbp-80h] BYREF
  DXGADAPTER *v66; // [rsp+108h] [rbp-70h]
  char v67; // [rsp+110h] [rbp-68h]
  __int64 v68; // [rsp+118h] [rbp-60h]

  v53 = -1;
  LOBYTE(v4) = 0;
  v54 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v55 = 1;
    v53 = 2034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2034);
  }
  else
  {
    v55 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v53, 2034);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v9 = (struct _KTHREAD **)DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v9 )
      goto LABEL_6;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2926;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v9 = v8;
    goto LABEL_6;
  }
  v9 = (struct _KTHREAD **)*((_QWORD *)Current + 3);
  if ( !v9 )
    goto LABEL_5;
LABEL_6:
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 8440;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_55:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
    if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, (__int64)&EventProfilerExit, v39, v53);
    return 3221225485LL;
  }
  *(_OWORD *)v60 = 0LL;
  v10 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v60, v10, 0x10uLL);
  *(_QWORD *)&Src.VidPnTargetId = 0LL;
  Src.ScanLine = 0;
  if ( !v60[0] && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    v49 = DXGGLOBAL::GetGlobal();
    ScanLine = REMOTE_VSYNC::GetScanLine((BLTQUEUE **)v49 + 128, &Src);
    goto LABEL_38;
  }
  v58 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v57, v60[0], v9, &v58, 1);
  v11 = v58;
  if ( !v58 )
  {
    WdLogSingleEntry2(3LL, v60[0], -1073741811LL);
    WdLogGlobalForLineNumber = 8476;
    if ( v57[0] )
      DXGADAPTER::ReleaseReference(v57[0]);
    goto LABEL_55;
  }
  if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    if ( *((_BYTE *)v11 + 209) && (v50 = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(v50) + 4742)) )
      v51 = (BLTQUEUE **)((char *)DXGGLOBAL::GetGlobal() + 1080);
    else
      v51 = (BLTQUEUE **)((char *)DXGGLOBAL::GetGlobal() + 1024);
    ScanLine = REMOTE_VSYNC::GetScanLine(v51, &Src);
LABEL_36:
    if ( v57[0] )
      DXGADAPTER::ReleaseReference(v57[0]);
LABEL_38:
    if ( ScanLine >= 0 )
    {
      v31 = (void *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v31 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v31, &Src.InVerticalBlank, 1uLL);
      v32 = (void *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v32 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v32, &Src.ScanLine, 4uLL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
      if ( v55 != (_BYTE)v4 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v53);
      return 0LL;
    }
    goto LABEL_59;
  }
  v56 = 0LL;
  v59 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v11, v60[1], 0LL, 0LL, &v56, &v59, 0);
  v13 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v14 = v56;
    if ( !v56 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8517;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 8517LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, v14, 0LL);
    DXGADAPTER::ReleaseReference(v14);
    if ( v67 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v65, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7628;
    }
    v15 = v66;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v66 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v66 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventBlockThread, v17, 72);
        KeWaitForSingleObject((char *)v66 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v66, 0LL);
      v15 = v66;
    }
    v68 = 0LL;
    v67 = 1;
    if ( *((_DWORD *)v15 + 50) != 1 )
      goto LABEL_71;
    if ( v64 != v66 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v63, 0LL);
      if ( *((_DWORD *)v64 + 50) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v63);
LABEL_71:
        COREACCESS::Release((COREACCESS *)v65);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
        if ( v57[0] )
          DXGADAPTER::ReleaseReference(v57[0]);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
        if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v44, (__int64)&EventProfilerExit, v45, v53);
        return 3221226166LL;
      }
    }
    v62[1] = 1;
    v18 = v56;
    if ( !*((_QWORD *)v56 + 390) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8531;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDisplayAdapter->IsDisplayAdapter()",
        8531LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = *((_QWORD *)v18 + 390);
    v20 = v60[1];
    if ( v60[1] < *(_DWORD *)(v19 + 96) )
    {
      v21 = v60[1];
      if ( !v19 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10618;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDisplayAdapter()", 10618LL, 0LL, 0LL, 0LL, 0LL);
        v20 = v60[1];
      }
      v4 = *((_QWORD *)v18 + 390);
      if ( !v4 )
        goto LABEL_28;
      if ( (unsigned int)v21 >= *(_DWORD *)(v4 + 96) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6448;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"VidPnSourceId < m_NumVidPnSources",
          6448LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v20 = v60[1];
      }
      v36 = *(_BYTE *)(4024 * v21 + *(_QWORD *)(v4 + 128) + 760);
      LODWORD(v4) = 0;
      if ( v36 )
      {
        Src.VidPnTargetId = *(_DWORD *)(4024LL * v20 + *(_QWORD *)(*((_QWORD *)v18 + 390) + 128LL) + 1072);
        if ( Src.VidPnTargetId == -1 )
        {
          ScanLine = -1071774912;
          WdLogSingleEntry3(4LL, v20, v60[0], -1071774912LL);
          WdLogGlobalForLineNumber = 8562;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
          if ( v57[0] )
            DXGADAPTER::ReleaseReference(v57[0]);
LABEL_59:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
          if ( v55 != (_BYTE)v4 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v53);
          return (unsigned int)ScanLine;
        }
        v37 = (ADAPTER_DISPLAY *)*((_QWORD *)v18 + 390);
        if ( *((_QWORD *)v18 + 391) )
          v30 = ADAPTER_DISPLAY::DdiGetScanLine(v37, &Src);
        else
          v30 = ADAPTER_DISPLAY::DodGetScanLine(v37, v20, &Src);
        ScanLine = v30;
      }
      else
      {
LABEL_28:
        v22 = *((_QWORD *)v18 + 390);
        v23 = 4024LL * v20;
        v24 = *(_QWORD *)(v22 + 128);
        v25 = *(_DWORD *)(v23 + v24 + 1080) + 20;
        InVerticalBlank = Src.InVerticalBlank;
        v27 = v25 <= *(_DWORD *)(v23 + v24 + 996);
        if ( v25 > *(_DWORD *)(v23 + v24 + 996) )
          InVerticalBlank = 1;
        Src.InVerticalBlank = InVerticalBlank;
        v28 = v4;
        if ( v27 )
          v28 = v25;
        *(_DWORD *)(v23 + *(_QWORD *)(v22 + 128) + 1080) = v28;
        Src.ScanLine = v28;
        ScanLine = v4;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
      goto LABEL_36;
    }
    WdLogSingleEntry2(3LL, v60[1], -1073741811LL);
    WdLogGlobalForLineNumber = 8537;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v57, v52);
    goto LABEL_55;
  }
  WdLogSingleEntry3(4LL, v11, v60[1], PairingAdapters);
  WdLogGlobalForLineNumber = 8513;
  if ( v57[0] )
    DXGADAPTER::ReleaseReference(v57[0]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v53);
  if ( v55 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v53);
  return v13;
}
