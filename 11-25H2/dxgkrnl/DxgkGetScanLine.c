/*
 * XREFs of DxgkGetScanLine @ 0x140342C80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1401969D0 (-DodGetScanLine@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1401EE130 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x14028D460 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x14034373C (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // r14
  struct DXGPROCESS *v9; // rsi
  const void *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rsi
  int PairingAdapters; // eax
  unsigned int v15; // r14d
  struct DXGADAPTER *v16; // rsi
  DXGADAPTER *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGADAPTER *v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // r12
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // r8d
  BOOLEAN InVerticalBlank; // al
  bool v29; // cc
  UINT v30; // ecx
  int ScanLine; // ebx
  int v32; // eax
  void *v33; // rcx
  void *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  char v38; // cl
  ADAPTER_DISPLAY *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGGLOBAL *v51; // rax
  DXGGLOBAL *v52; // rax
  BLTQUEUE **v53; // rcx
  unsigned __int64 v54; // rdx
  int v55; // [rsp+50h] [rbp-128h] BYREF
  __int64 v56; // [rsp+58h] [rbp-120h]
  char v57; // [rsp+60h] [rbp-118h]
  struct DXGADAPTER *v58; // [rsp+68h] [rbp-110h] BYREF
  DXGADAPTER *v59[2]; // [rsp+70h] [rbp-108h] BYREF
  struct DXGADAPTER *v60; // [rsp+80h] [rbp-F8h] BYREF
  unsigned __int64 v61; // [rsp+88h] [rbp-F0h] BYREF
  unsigned int v62[4]; // [rsp+90h] [rbp-E8h] BYREF
  struct _DXGKARG_GETSCANLINE Src; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v64[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v65[16]; // [rsp+B8h] [rbp-C0h] BYREF
  DXGADAPTER *v66; // [rsp+C8h] [rbp-B0h]
  _BYTE v67[16]; // [rsp+F8h] [rbp-80h] BYREF
  DXGADAPTER *v68; // [rsp+108h] [rbp-70h]
  char v69; // [rsp+110h] [rbp-68h]
  __int64 v70; // [rsp+118h] [rbp-60h]

  v55 = -1;
  LOBYTE(v4) = 0;
  v56 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 2034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2034);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v55, 2034);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v9 )
      goto LABEL_6;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2925;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v9 = v8;
    goto LABEL_6;
  }
  v9 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v9 )
    goto LABEL_5;
LABEL_6:
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 8379;
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
LABEL_55:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, (__int64)&EventProfilerExit, v41, v55);
    return 3221225485LL;
  }
  *(_OWORD *)v62 = 0LL;
  v10 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v62, v10, 0x10uLL);
  *(_QWORD *)&Src.VidPnTargetId = 0LL;
  Src.ScanLine = 0;
  if ( !v62[0] && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v11) )
  {
    v51 = DXGGLOBAL::GetGlobal();
    ScanLine = REMOTE_VSYNC::GetScanLine((BLTQUEUE **)v51 + 124, &Src);
    goto LABEL_38;
  }
  v60 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v59, v62[0], v9, &v60, 1);
  v13 = v60;
  if ( !v60 )
  {
    WdLogSingleEntry2(3LL, v62[0], -1073741811LL);
    WdLogGlobalForLineNumber = 8415;
    if ( v59[0] )
      DXGADAPTER::ReleaseReference(v59[0]);
    goto LABEL_55;
  }
  if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v12) )
  {
    if ( *((_BYTE *)v13 + 209) && (v52 = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(v52) + 4742)) )
      v53 = (BLTQUEUE **)((char *)DXGGLOBAL::GetGlobal() + 1048);
    else
      v53 = (BLTQUEUE **)((char *)DXGGLOBAL::GetGlobal() + 992);
    ScanLine = REMOTE_VSYNC::GetScanLine(v53, &Src);
LABEL_36:
    if ( v59[0] )
      DXGADAPTER::ReleaseReference(v59[0]);
LABEL_38:
    if ( ScanLine >= 0 )
    {
      v33 = (void *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v33 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v33, &Src.InVerticalBlank, 1uLL);
      v34 = (void *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v34 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v34, &Src.ScanLine, 4uLL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
      if ( v57 != (_BYTE)v4 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit, v36, v55);
      return 0LL;
    }
    goto LABEL_59;
  }
  v58 = 0LL;
  v61 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v13, v62[1], 0LL, 0LL, &v58, &v61, 0);
  v15 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v16 = v58;
    if ( !v58 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8456;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 8456LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v64, v16, 0LL);
    DXGADAPTER::ReleaseReference(v16);
    if ( v69 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v67, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7603;
    }
    v17 = v68;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v68 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v68 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventBlockThread, v19, 72);
        KeWaitForSingleObject((char *)v68 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v68, 0LL);
      v17 = v68;
    }
    v70 = 0LL;
    v69 = 1;
    if ( *((_DWORD *)v17 + 50) != 1 )
      goto LABEL_71;
    if ( v66 != v68 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v65, 0LL);
      if ( *((_DWORD *)v66 + 50) != 1 )
      {
        COREACCESS::Release((COREACCESS *)v65);
LABEL_71:
        COREACCESS::Release((COREACCESS *)v67);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
        if ( v59[0] )
          DXGADAPTER::ReleaseReference(v59[0]);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
        if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v46, (__int64)&EventProfilerExit, v47, v55);
        return 3221226166LL;
      }
    }
    v64[1] = 1;
    v20 = v58;
    if ( !*((_QWORD *)v58 + 390) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8470;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDisplayAdapter->IsDisplayAdapter()",
        8470LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v21 = *((_QWORD *)v20 + 390);
    v22 = v62[1];
    if ( v62[1] < *(_DWORD *)(v21 + 96) )
    {
      v23 = v62[1];
      if ( !v21 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10513;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDisplayAdapter()", 10513LL, 0LL, 0LL, 0LL, 0LL);
        v22 = v62[1];
      }
      v4 = *((_QWORD *)v20 + 390);
      if ( !v4 )
        goto LABEL_28;
      if ( (unsigned int)v23 >= *(_DWORD *)(v4 + 96) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6425;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"VidPnSourceId < m_NumVidPnSources",
          6425LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v22 = v62[1];
      }
      v38 = *(_BYTE *)(3984 * v23 + *(_QWORD *)(v4 + 128) + 760);
      LODWORD(v4) = 0;
      if ( v38 )
      {
        Src.VidPnTargetId = *(_DWORD *)(3984LL * v22 + *(_QWORD *)(*((_QWORD *)v20 + 390) + 128LL) + 1072);
        if ( Src.VidPnTargetId == -1 )
        {
          ScanLine = -1071774912;
          WdLogSingleEntry3(4LL, v22, v62[0], -1071774912LL);
          WdLogGlobalForLineNumber = 8501;
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
          if ( v59[0] )
            DXGADAPTER::ReleaseReference(v59[0]);
LABEL_59:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
          if ( v57 != (_BYTE)v4 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v42, (__int64)&EventProfilerExit, v43, v55);
          return (unsigned int)ScanLine;
        }
        v39 = (ADAPTER_DISPLAY *)*((_QWORD *)v20 + 390);
        if ( *((_QWORD *)v20 + 391) )
          v32 = ADAPTER_DISPLAY::DdiGetScanLine(v39, &Src);
        else
          v32 = ADAPTER_DISPLAY::DodGetScanLine(v39, v22, &Src);
        ScanLine = v32;
      }
      else
      {
LABEL_28:
        v24 = *((_QWORD *)v20 + 390);
        v25 = 3984LL * v22;
        v26 = *(_QWORD *)(v24 + 128);
        v27 = *(_DWORD *)(v25 + v26 + 1080) + 20;
        InVerticalBlank = Src.InVerticalBlank;
        v29 = v27 <= *(_DWORD *)(v25 + v26 + 996);
        if ( v27 > *(_DWORD *)(v25 + v26 + 996) )
          InVerticalBlank = 1;
        Src.InVerticalBlank = InVerticalBlank;
        v30 = v4;
        if ( v29 )
          v30 = v27;
        *(_DWORD *)(v25 + *(_QWORD *)(v24 + 128) + 1080) = v30;
        Src.ScanLine = v30;
        ScanLine = v4;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      goto LABEL_36;
    }
    WdLogSingleEntry2(3LL, v62[1], -1073741811LL);
    WdLogGlobalForLineNumber = 8476;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v59, v54);
    goto LABEL_55;
  }
  WdLogSingleEntry3(4LL, v13, v62[1], PairingAdapters);
  WdLogGlobalForLineNumber = 8452;
  if ( v59[0] )
    DXGADAPTER::ReleaseReference(v59[0]);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, (__int64)&EventProfilerExit, v45, v55);
  return v15;
}
