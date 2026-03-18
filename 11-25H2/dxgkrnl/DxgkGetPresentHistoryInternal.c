/*
 * XREFs of DxgkGetPresentHistoryInternal @ 0x1402871A0
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     DxgkGetPresentHistory @ 0x1401E6040 (DxgkGetPresentHistory.c)
 *     DxgkCleanupPresentHistoryInternal @ 0x1403F2D10 (DxgkCleanupPresentHistoryInternal.c)
 * Callees:
 *     ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x14000AFA8 (--0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x14001597C (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x1400161C0 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x14002F360 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPR.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400322F0 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1400329A0 (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ??0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x14003B108 (--0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14028943C (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028FF40 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentHistoryInternal(ULONG64 a1, int a2, __int64 a3)
{
  unsigned int v5; // r15d
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v9; // rsi
  struct DXGPROCESS *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  struct DXGADAPTER *v15; // rbx
  int PairingAdapters; // eax
  __int64 v17; // rdi
  struct DXGADAPTER *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGADAPTER *v21; // rdi
  __int64 v22; // rdi
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int ProcessSessionId; // eax
  unsigned __int64 v29; // r13
  DXGGLOBAL *v30; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct DXGSESSIONDATA *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct PRESENTHISTORYBUFFERENTRY *v37; // r14
  struct PRESENTHISTORYBITS *v38; // rbx
  char *v39; // rsi
  unsigned int v40; // edi
  unsigned int v41; // eax
  int v42; // edx
  int v43; // eax
  LONG v44; // r14d
  __int64 v45; // rsi
  struct PRESENTHISTORYBITS *v46; // r12
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v47; // rbx
  char v48; // r15
  void (__fastcall *v49)(__int128 *, _QWORD); // rdi
  int v50; // eax
  D3DKMT_PRESENT_MODEL Model; // edx
  __int64 TokenSize; // r8
  __int64 hLogicalSurface; // rcx
  ULONG Value; // r10d
  FLOAT v55; // r9d
  D3DKMT_PRESENT_MODEL v56; // eax
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v61; // r14
  unsigned int PlaneIndex; // eax
  int v63; // eax
  unsigned int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rdx
  char v67; // al
  UINT64 CompositionBindingId; // rsi
  __int64 v69; // rdi
  unsigned int v70; // ebx
  __int64 v71; // rax
  int v72; // r9d
  unsigned int NumRects; // eax
  __int64 v74; // rcx
  __int64 v75; // r8
  bool v76; // zf
  unsigned int VidPnSourceId; // eax
  unsigned int CurrentProcessSessionId; // eax
  unsigned __int64 v79; // rdx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  void *v83; // rcx
  void *v84; // rcx
  void *v85; // rcx
  struct DXGADAPTER *v86; // rbx
  unsigned __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  const void *v90; // rdx
  void *v91; // rcx
  void *v92; // rcx
  size_t v93; // r8
  ULONG64 v94; // rax
  unsigned __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  unsigned __int64 *v98; // [rsp+28h] [rbp-1C0h]
  unsigned __int8 v99[8]; // [rsp+30h] [rbp-1B8h]
  __int64 v100; // [rsp+40h] [rbp-1A8h]
  __int64 v101; // [rsp+48h] [rbp-1A0h]
  size_t Size; // [rsp+60h] [rbp-188h] BYREF
  int v103; // [rsp+68h] [rbp-180h] BYREF
  __int64 v104; // [rsp+70h] [rbp-178h]
  char v105; // [rsp+78h] [rbp-170h]
  int v106; // [rsp+80h] [rbp-168h]
  __int128 v107; // [rsp+88h] [rbp-160h] BYREF
  int Src; // [rsp+98h] [rbp-150h] BYREF
  int v109; // [rsp+9Ch] [rbp-14Ch]
  __int64 v110; // [rsp+A0h] [rbp-148h] BYREF
  char v111; // [rsp+A8h] [rbp-140h]
  int v112; // [rsp+B0h] [rbp-138h] BYREF
  unsigned int v113; // [rsp+B4h] [rbp-134h] BYREF
  unsigned int v114; // [rsp+B8h] [rbp-130h]
  int v115; // [rsp+BCh] [rbp-12Ch]
  struct DXGPROCESS *v116; // [rsp+C0h] [rbp-128h]
  struct DXGADAPTER *v117; // [rsp+C8h] [rbp-120h] BYREF
  __int128 v118; // [rsp+D0h] [rbp-118h] BYREF
  DXGADAPTER *v119; // [rsp+E0h] [rbp-108h] BYREF
  unsigned int v120; // [rsp+F0h] [rbp-F8h]
  __int64 v121; // [rsp+F8h] [rbp-F0h] BYREF
  char v122; // [rsp+100h] [rbp-E8h]
  struct DXGADAPTER *v123; // [rsp+108h] [rbp-E0h] BYREF
  char *v124; // [rsp+110h] [rbp-D8h]
  struct PRESENTHISTORYBITS *v125; // [rsp+118h] [rbp-D0h]
  struct PRESENTHISTORYBUFFERENTRY *v126; // [rsp+120h] [rbp-C8h]
  char v127[8]; // [rsp+128h] [rbp-C0h] BYREF
  DXGPUSHLOCK *v128; // [rsp+130h] [rbp-B8h]
  int v129; // [rsp+138h] [rbp-B0h]
  unsigned int v130[4]; // [rsp+140h] [rbp-A8h] BYREF
  void *v131[2]; // [rsp+150h] [rbp-98h]
  unsigned __int64 v132[2]; // [rsp+160h] [rbp-88h] BYREF
  _BYTE v133[16]; // [rsp+170h] [rbp-78h] BYREF
  DXGADAPTER *v134; // [rsp+180h] [rbp-68h]
  char v135; // [rsp+188h] [rbp-60h]
  __int64 v136; // [rsp+190h] [rbp-58h]

  v115 = a2;
  v103 = -1;
  v5 = 0;
  v104 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v105 = 1;
    v103 = 2060;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 2060);
  }
  else
  {
    v105 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v103, 2060);
  CurrentProcess = PsGetCurrentProcess(v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v10 )
      goto LABEL_5;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
      v10 = v9;
    }
  }
  v116 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 189;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
    v76 = v105 == 0;
    goto LABEL_131;
  }
  if ( (*((_DWORD *)v10 + 102) & 4) == 0 )
  {
    WdLogSingleEntry2(3LL, v10, -1073741790LL);
    WdLogGlobalForLineNumber = 201;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
    if ( v105 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v88, (__int64)&EventProfilerExit, v89, v103);
    return 3221225506LL;
  }
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v110, v10);
  if ( v111 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v110, 0LL, 0LL);
    WdLogGlobalForLineNumber = 682;
  }
  v11 = v110;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v11 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v11 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 521;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 521LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v11 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v14 = *(_DWORD *)(v11 + 36);
        if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventBlockThread, v13, v14);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 16));
      ExAcquirePushLockExclusiveEx(v11 + 8, 0LL);
    }
    if ( *(_QWORD *)(v11 + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 547;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 547LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v11 + 32) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 548;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 548LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v11 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v11 + 32) = 1;
  }
  v111 = 1;
  *(_OWORD *)v130 = 0LL;
  *(_OWORD *)v131 = 0LL;
  if ( a2 )
  {
    v112 = 0;
    v90 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v90 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v130, v90, 0x20uLL);
    v91 = (void *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v91 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v91, &v112, 4uLL);
    v92 = (void *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v92 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v92, &v112, 4uLL);
  }
  else
  {
    *(_OWORD *)v130 = *(_OWORD *)a1;
    *(_OWORD *)v131 = *(_OWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !v131[0] )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 249;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"NULL present history pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_130:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
    v76 = v105 == 0;
LABEL_131:
    if ( v76 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
    goto LABEL_152;
  }
  v123 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v119, v130[0], v10, &v123, 1);
  v15 = v123;
  if ( !v123 )
  {
    WdLogSingleEntry2(2LL, v130[0], -1073741811LL);
    WdLogGlobalForLineNumber = 263;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
      v130[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_128;
  }
  v117 = 0LL;
  v132[0] = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v123, 0, &v117, v132, 0LL, 0LL, 0);
  v17 = PairingAdapters;
  v109 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry2(2LL, v15, PairingAdapters);
    WdLogGlobalForLineNumber = 282;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter 0x%I64x for DxgkGetPresentHistory (Status = 0x%I64x)!",
      (__int64)v15,
      v17,
      0LL,
      0LL,
      0LL);
    if ( v119 )
      DXGADAPTER::ReleaseReference(v119);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
    if ( v105 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      goto LABEL_137;
    return (unsigned int)v17;
  }
  v18 = v117;
  if ( !v117 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 287;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pRenderAdapter != NULL", 287LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREACCESS::COREACCESS((COREACCESS *)v133, v18);
  if ( v135 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v133, 0LL, 0LL);
    WdLogGlobalForLineNumber = 7603;
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v134 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v134 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventBlockThread, v20, 72);
      KeWaitForSingleObject((char *)v134 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v134, 0LL);
  }
  v136 = 0LL;
  v135 = 1;
  v21 = v117;
  DXGADAPTER::ReleaseReference(v117);
  if ( !*((_QWORD *)v21 + 391) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 299;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pRenderAdapter->IsRenderAdapter()",
      299LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Src = 0;
  Size = 0LL;
  v22 = *((_QWORD *)v21 + 391);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v127, (struct _KTHREAD **)(v22 + 976), 0);
  v23 = (volatile signed __int32 *)v128;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v23, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v23, v24, v26);
    ExAcquirePushLockSharedEx(v23, 0LL);
  }
  _InterlockedIncrement(v23 + 4);
  v129 = 1;
  v27 = PsGetCurrentProcess(v25);
  ProcessSessionId = PsGetProcessSessionId(v27);
  if ( ProcessSessionId >= *(_DWORD *)(v22 + 1008)
    || !*(_QWORD *)(*(_QWORD *)(v22 + 1016) + 8LL * ProcessSessionId)
    || (_mm_lfence(), v29 = *(_QWORD *)(*(_QWORD *)(v22 + 1016) + 8LL * ProcessSessionId), (v132[1] = v29) == 0) )
  {
    v86 = v117;
    WdLogSingleEntry1(4LL, v117);
    WdLogGlobalForLineNumber = 322;
    if ( *((_DWORD *)v86 + 50) != 1 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v127);
      COREACCESS::~COREACCESS((COREACCESS *)v133, v95);
      if ( v119 )
        DXGADAPTER::ReleaseReference(v119);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v110);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
      if ( v105 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v96, (__int64)&EventProfilerExit, v97, v103);
      return 0LL;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v127);
    COREACCESS::~COREACCESS((COREACCESS *)v133, v87);
    if ( v119 )
      DXGADAPTER::ReleaseReference(v119);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
    if ( !v105 || (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return 3221225485LL;
LABEL_152:
    McTemplateK0q_EtwWriteTransfer(v74, (__int64)&EventProfilerExit, v75, v103);
    return 3221225485LL;
  }
  v30 = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(v30);
  v32 = SessionData;
  if ( !SessionData )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry1(4LL, CurrentProcessSessionId);
    WdLogGlobalForLineNumber = 343;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v127);
    COREACCESS::~COREACCESS((COREACCESS *)v133, v79);
LABEL_128:
    if ( v119 )
      DXGADAPTER::ReleaseReference(v119);
    goto LABEL_130;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v121, (struct DXGSESSIONDATA *)((char *)SessionData + 16), 0);
  if ( v122 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v121, 0LL, 0LL);
    WdLogGlobalForLineNumber = 682;
  }
  v33 = v121;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v33 + 24) == KeGetCurrentThread() )
  {
    if ( *(int *)(v33 + 32) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 521;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_OwnerAcquireCount > 0", 521LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*(_DWORD *)(v33 + 32);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v33 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v72 = *(_DWORD *)(v33 + 36);
        if ( v72 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventBlockThread, v36, v72);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v33 + 16));
      ExAcquirePushLockExclusiveEx(v33 + 8, 0LL);
    }
    if ( *(_QWORD *)(v33 + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 547;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NULL == m_OwningThread", 547LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v33 + 32) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 548;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0 == m_OwnerAcquireCount", 548LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v33 + 24) = KeGetCurrentThread();
    *(_DWORD *)(v33 + 32) = 1;
  }
  v122 = 1;
  v37 = (struct DXGSESSIONDATA *)((char *)v32 + 64);
  v126 = v37;
  v38 = (struct DXGSESSIONDATA *)((char *)v32 + 16448);
  v125 = v38;
  v39 = (char *)v131[0];
  v124 = (char *)v131[0];
  v40 = v130[1];
  v114 = v130[1];
  v113 = 2048;
  if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory((KSPIN_LOCK *)v29, v34, &v113, v37, v38) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 367;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 367LL, 0LL, 0LL, 0LL, 0LL);
  }
  v106 = 0;
  v109 = 0;
  v41 = v113;
  v120 = v113;
  while ( 1 )
  {
    if ( v5 >= v41 )
    {
      LODWORD(v17) = v106;
      goto LABEL_56;
    }
    v61 = (const struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)v37 + v5);
    if ( v61->Model != D3DKMT_PM_REDIRECTED_FLIP )
    {
      switch ( v61->Model )
      {
        case D3DKMT_PM_REDIRECTED_GDI:
          NumRects = v61->Token.Gdi.DirtyRegions.NumRects;
          if ( NumRects <= 0x10 )
          {
            v63 = 16 * NumRects + 67;
            goto LABEL_92;
          }
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 53;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"FALSE", 53LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_163;
        case D3DKMT_PM_REDIRECTED_BLT:
          VidPnSourceId = v61->Token.Flip.VidPnSourceId;
          if ( VidPnSourceId <= 0x10 )
          {
            v63 = 16 * VidPnSourceId + 51;
            goto LABEL_92;
          }
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 73;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"FALSE", 73LL, 0LL, 0LL, 0LL, 0LL);
          break;
        case D3DKMT_PM_REDIRECTED_VISTABLT:
        case D3DKMT_PM_SCREENCAPTUREFENCE:
        case D3DKMT_PM_REDIRECTED_COMPOSITION:
        case D3DKMT_PM_SURFACECOMPLETE:
          v63 = 31;
          goto LABEL_92;
        case D3DKMT_PM_FLIPMANAGER:
          v63 = 47;
          goto LABEL_92;
        default:
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 96;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"Unknown type for present history token is found in queue.",
            96LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v63 = 7;
          goto LABEL_92;
      }
      goto LABEL_163;
    }
    PlaneIndex = v61->Token.Flip.PlaneIndex;
    if ( PlaneIndex > 0x10 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 63;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"FALSE", 63LL, 0LL, 0LL, 0LL, 0LL);
LABEL_163:
      v64 = 0;
      goto LABEL_93;
    }
    v63 = 16 * PlaneIndex + 823;
LABEL_92:
    v64 = v63 & 0xFFFFFFF8;
LABEL_93:
    LODWORD(Size) = v64;
    if ( !v64 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 377;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"TokenSize > 0", 377LL, 0LL, 0LL, 0LL, 0LL);
      v64 = 0;
    }
    if ( v64 > v40 )
      break;
    v61->TokenSize = v64;
    if ( CIFlipPresentHistoryToken::IsIFlipSupported(v61) )
    {
      v107 = 0LL;
      if ( v61->Model == D3DKMT_PM_REDIRECTED_FLIP )
      {
        CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
          (CIFlipPresentHistoryTokenRedirectedFlip *)&v107,
          &v61->Token.Flip);
      }
      else if ( v61->Model == D3DKMT_PM_FLIPMANAGER )
      {
        CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
          (CIFlipPresentHistoryTokenFlipManager *)&v107,
          (const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *)&v61->Token);
      }
      v65 = *((unsigned __int8 *)v38 + v5);
      if ( (v65 & 1) != 0 )
      {
        LOBYTE(v65) = 1;
        (*(void (__fastcall **)(__int128 *, __int64))(v107 + 272))(&v107, v65);
        (*(void (__fastcall **)(__int128 *, bool))(v107 + 280))(&v107, (*((_BYTE *)v38 + v5) & 2) != 0);
      }
      else
      {
        LOBYTE(v65) = (v65 & 4) != 0;
        (*(void (__fastcall **)(__int128 *, __int64))(v107 + 288))(&v107, v65);
        if ( (*((_BYTE *)v38 + v5) & 8) != 0 )
        {
          LOBYTE(v66) = 1;
          (*(void (__fastcall **)(__int128 *, __int64))(v107 + 232))(&v107, v66);
        }
      }
      v67 = *((_BYTE *)v38 + v5);
      if ( (v67 & 0x20) == 0 && (v67 & 0x40) != 0 )
        LOBYTE(v66) = 1;
      else
        v66 = 0LL;
      (*(void (__fastcall **)(__int128 *, __int64))(v107 + 312))(&v107, v66);
      CompositionBindingId = v61->CompositionBindingId;
      v69 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v107 + 16))(&v107);
      v70 = (*(__int64 (__fastcall **)(__int128 *))(v107 + 336))(&v107);
      v71 = (*(__int64 (__fastcall **)(__int128 *))(v107 + 104))(&v107);
      WdLogSingleEntry5(8LL, v61, v71, v70, v69, CompositionBindingId);
      WdLogGlobalForLineNumber = 417;
      (*(void (__fastcall **)(__int128 *, __int64))v107)(&v107, 1LL);
      v38 = v125;
      v40 = v114;
      v39 = v124;
    }
    if ( v61->Model == D3DKMT_PM_FLIPMANAGER )
      v61->Token.Gdi.ScrollRect.left ^= ((unsigned __int8)v61->Token.Gdi.ScrollRect.left ^ (*((_BYTE *)v38 + v5) >> 4)) & 1;
    if ( v115 )
    {
      v93 = (unsigned int)Size;
      v94 = (ULONG64)&v39[(unsigned int)Size];
      if ( v94 <= (unsigned __int64)v39 || v94 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v39, v61, v93);
    }
    else
    {
      memmove(v39, v61, (unsigned int)Size);
    }
    if ( (*((_BYTE *)v38 + v5) & 1) != 0 && v61->Model == D3DKMT_PM_REDIRECTED_FLIP )
    {
      if ( (v61->Token.Flip.Flags.Value & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 451;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pToken->Token.Flip.Flags.IndependentFlip",
          451LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (unsigned int)((int)(v61->Token.Flip.Flags.Value << 16) >> 30) > 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 452;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pToken->Token.Flip.Flags.IndependentFlipStage == D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_SUBMITTED || pTo"
           "ken->Token.Flip.Flags.IndependentFlipStage == D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_COMPLETE",
          452LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v61->Token.Flip.Flags.Value = ((*((__int16 *)&v61->Token.SurfaceComplete + 22) & 0xFFFFC000) + 0x4000) ^ (v61->Token.Flip.Flags.Value ^ ((*((__int16 *)&v61->Token.SurfaceComplete + 22) & 0xFFFFC000) + 0x4000)) & 0xFFFF3FFF;
    }
    v39 += (unsigned int)Size;
    v124 = v39;
    Src += Size;
    v40 -= Size;
    v114 = v40;
    ++v5;
    v41 = v120;
    v37 = v126;
  }
  LODWORD(v17) = 261;
  v106 = 261;
  v109 = 261;
LABEL_56:
  HIDWORD(Size) = v5;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v29, 0);
  if ( v115 )
  {
    v83 = (void *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v83 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v83, (char *)&Size + 4, 4uLL);
    if ( HIDWORD(Size) || !(_DWORD)Size )
    {
      v85 = (void *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v85 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v85, &Src, 4uLL);
    }
    else
    {
      v84 = (void *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v84 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v84, &Size, 4uLL);
      LODWORD(v17) = -1073741789;
      v106 = -1073741789;
      v109 = -1073741789;
    }
    v42 = HIDWORD(Size);
  }
  else
  {
    v42 = HIDWORD(Size);
    *(_DWORD *)(a1 + 24) = HIDWORD(Size);
    if ( v42 || (v43 = Size) == 0 )
    {
      v43 = Src;
    }
    else
    {
      LODWORD(v17) = -1073741789;
      v106 = -1073741789;
    }
    *(_DWORD *)(a1 + 8) = v43;
  }
  v44 = v42;
  v45 = 0LL;
  if ( v42 )
  {
    v46 = v125;
    do
    {
      v47 = (const struct _D3DKMT_PRESENTHISTORYTOKEN *)*((_QWORD *)v126 + v45);
      v48 = 1;
      if ( CIFlipPresentHistoryToken::IsIFlipSupported(v47) && (*((_BYTE *)v46 + v45) & 1) != 0 )
      {
        v118 = 0LL;
        if ( v47->Model == D3DKMT_PM_REDIRECTED_FLIP )
        {
          CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
            (CIFlipPresentHistoryTokenRedirectedFlip *)&v118,
            &v47->Token.Flip);
        }
        else if ( v47->Model == D3DKMT_PM_FLIPMANAGER )
        {
          CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
            (CIFlipPresentHistoryTokenFlipManager *)&v118,
            (const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *)&v47->Token);
        }
        v49 = *(void (__fastcall **)(__int128 *, _QWORD))(v118 + 304);
        v50 = (*(__int64 (__fastcall **)(__int128 *))(v118 + 296))(&v118);
        v49(&v118, (unsigned int)(v50 + 1));
        if ( (*(unsigned int (__fastcall **)(__int128 *))(v118 + 296))(&v118) < 2 )
        {
          v48 = 0;
          (*(void (__fastcall **)(__int128 *))(v118 + 368))(&v118);
        }
        (*(void (__fastcall **)(__int128 *, __int64))v118)(&v118, 1LL);
      }
      if ( v48 )
      {
        if ( bTracingEnabled )
        {
          Model = D3DKMT_PM_UNINITIALIZED;
          TokenSize = 0LL;
          hLogicalSurface = 0LL;
          Value = 0;
          v55 = 0.0;
          if ( v47 )
          {
            Model = v47->Model;
            TokenSize = v47->TokenSize;
            v56 = v47->Model;
            if ( v47->Model == D3DKMT_PM_REDIRECTED_FLIP )
            {
              hLogicalSurface = v47->Token.Flip.hLogicalSurface;
            }
            else if ( v56 == D3DKMT_PM_REDIRECTED_BLT )
            {
LABEL_140:
              hLogicalSurface = v47->Token.Flip.FenceValue;
            }
            else
            {
              switch ( v56 )
              {
                case D3DKMT_PM_REDIRECTED_GDI:
                case D3DKMT_PM_REDIRECTED_VISTABLT:
                case D3DKMT_PM_SCREENCAPTUREFENCE:
                case D3DKMT_PM_REDIRECTED_GDI_SYSMEM:
                case D3DKMT_PM_REDIRECTED_COMPOSITION:
                case D3DKMT_PM_SURFACECOMPLETE:
                  goto LABEL_140;
                default:
                  hLogicalSurface = 0LL;
                  break;
              }
            }
            switch ( Model )
            {
              case D3DKMT_PM_REDIRECTED_FLIP:
                Value = v47->Token.Flip.Flags.Value;
                break;
              case D3DKMT_PM_REDIRECTED_GDI_SYSMEM:
                Value = v47->Token.GdiSysMem.dwDirtyFlags;
                break;
              case D3DKMT_PM_FLIPMANAGER:
                Value = v47->Token.FlipManager.Flags.Value;
                break;
            }
            if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
              v55 = v47->Token.Flip.Transform[4];
            else
              v55 = 0.0;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            *(FLOAT *)&v101 = v55;
            LODWORD(v100) = Value;
            *(_DWORD *)v99 = TokenSize;
            LODWORD(v98) = Model;
            McTemplateK0ppqqxdqp_EtwWriteTransfer(
              hLogicalSurface,
              &EventRetirePresentHistory,
              TokenSize,
              v117,
              v47,
              v98,
              *(_QWORD *)v99,
              hLogicalSurface,
              v100,
              v101,
              0LL);
          }
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v29 + 48), (PSLIST_ENTRY)(&v47[-1].Token.SurfaceComplete + 131));
      }
      else
      {
        --v44;
      }
      v45 = (unsigned int)(v45 + 1);
      v42 = HIDWORD(Size);
    }
    while ( (unsigned int)v45 < HIDWORD(Size) );
    LODWORD(v17) = v106;
  }
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v29, v42);
  if ( v44 )
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v29 + 64), 0, v44, 0);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v121);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v127);
  COREACCESS::~COREACCESS((COREACCESS *)v133, v57);
  if ( v119 )
    DXGADAPTER::ReleaseReference(v119);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v110);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v103);
  if ( v105 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
LABEL_137:
    McTemplateK0q_EtwWriteTransfer(v58, (__int64)&EventProfilerExit, v59, v103);
  return (unsigned int)v17;
}
