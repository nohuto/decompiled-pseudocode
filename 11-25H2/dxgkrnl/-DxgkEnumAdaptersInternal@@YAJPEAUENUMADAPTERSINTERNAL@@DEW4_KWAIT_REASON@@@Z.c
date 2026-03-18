/*
 * XREFs of ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x14031D170
 * Callers:
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x14031C638 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x14031CA60 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x14031EA60 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x140041038 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x140055474 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x140298BFC (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x14031DC34 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x14031E194 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x14031E4F8 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031E518 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersInternal(struct ENUMADAPTERSINTERNAL *a1, char a2, __int64 a3, unsigned int a4)
{
  char v5; // bl
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGGLOBAL *v10; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  int v12; // r14d
  DXGGLOBAL *v13; // rax
  DXGSESSIONDATA *SessionData; // r12
  _QWORD *v15; // r13
  _QWORD *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  struct DXGPROCESS *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rsi
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  struct DXGGLOBAL *v26; // rbx
  struct _KTHREAD *v27; // rcx
  DXGGLOBAL *v28; // rax
  DXGSESSIONDATA *v29; // r15
  _QWORD *v30; // r12
  _QWORD *v31; // rsi
  _QWORD *v32; // rbx
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  __int64 v35; // rcx
  struct DXGPROCESS *v36; // rbx
  __int64 v37; // rdx
  unsigned int v38; // ecx
  unsigned int ProcessSessionId; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v41; // r8
  int v42; // eax
  struct DXGGLOBAL *v43; // rbx
  struct _KTHREAD *v44; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  PEPROCESS v46; // rcx
  DXGGLOBAL *v47; // rax
  struct DXGSESSIONDATA *v48; // r12
  _QWORD *v49; // r15
  _QWORD *v50; // rsi
  _QWORD *v51; // rbx
  signed __int64 v52; // rax
  signed __int64 v53; // rtt
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rbx
  __int64 v60; // [rsp+58h] [rbp-29h] BYREF
  struct DXGPROCESS *v61; // [rsp+60h] [rbp-21h]
  __int64 v62; // [rsp+68h] [rbp-19h]
  struct _KTHREAD **v63; // [rsp+70h] [rbp-11h] BYREF
  char v64; // [rsp+78h] [rbp-9h]
  struct _KTHREAD **v65; // [rsp+80h] [rbp-1h] BYREF
  char v66; // [rsp+88h] [rbp+7h]
  struct _KTHREAD **v67; // [rsp+90h] [rbp+Fh] BYREF
  char v68; // [rsp+98h] [rbp+17h]
  int v69; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v70; // [rsp+A8h] [rbp+27h]
  char v71; // [rsp+B0h] [rbp+2Fh]
  char v72; // [rsp+E8h] [rbp+67h]

  v69 = -1;
  v5 = a3;
  v70 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v71 = 1;
    v69 = 2078;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2078);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v69, 2078);
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1604;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pEnumAdapters != NULL", 1604LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent(v8);
  v61 = Current;
  if ( Current )
  {
    if ( v5 )
    {
      ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)Current + 7));
      Global = DXGGLOBAL::GetGlobal();
      LOBYTE(v41) = a2;
      v42 = DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 118), a4, v41, ProcessSessionId, 0);
      if ( v42 < 0 )
      {
        v59 = v42;
        WdLogSingleEntry1(2LL, v42);
        WdLogGlobalForLineNumber = 1627;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed to wait for PnP notification on current session (ntStatus = 0x%I64x).",
          v59,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      Current = v61;
    }
    v72 = 0;
    if ( a2 == 1 )
    {
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)Current + 11) + 32LL))(0LL);
      v72 = 1;
    }
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 2) = 0;
    v10 = DXGGLOBAL::GetGlobal();
    v64 = 0;
    v63 = (struct _KTHREAD **)((char *)v10 + 672);
    if ( v10 == (struct DXGGLOBAL *)-672LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    CurrentThread = KeGetCurrentThread();
    if ( v63[3] == CurrentThread )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    v12 = 0;
    if ( (PEPROCESS)PsGetCurrentProcess(CurrentThread) == PsInitialSystemProcess )
    {
      SessionData = 0LL;
    }
    else
    {
      v13 = DXGGLOBAL::GetGlobal();
      SessionData = DXGGLOBAL::GetSessionData(v13);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v63);
    v15 = (_QWORD *)((char *)v10 + 768);
    v16 = (_QWORD *)*((_QWORD *)v10 + 96);
LABEL_24:
    while ( v16 != v15 && v16 && !v12 )
    {
      v23 = v16;
      v16 = (_QWORD *)*v16;
      _m_prefetchw(v23 + 3);
      v24 = v23[3];
      v18 = 0LL;
      while ( v24 )
      {
        v17 = v24 + 1;
        v25 = v24;
        v24 = _InterlockedCompareExchange64(v23 + 3, v24 + 1, v24);
        if ( v25 == v24 )
        {
          if ( !v23[391]
            || v23[390] && (!SessionData || DXGSESSIONDATA::CanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v23)) )
          {
            v19 = *(_QWORD *)((char *)v23 + 4828);
            v62 = v19;
            v60 = v18;
            v20 = DXGPROCESS::GetCurrent(v17);
            if ( v20 && (v21 = *((_QWORD *)v20 + 11)) != 0 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(v21 + 240))(0LL, &v60, 0LL);
              v22 = v60;
            }
            else
            {
              v22 = 0LL;
              v60 = 0LL;
            }
            if ( v22 == __PAIR64__(HIDWORD(v62), v19) )
              v12 = EnumAdaptersCallback((struct DXGADAPTER *)v23, a1);
          }
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v23);
          goto LABEL_24;
        }
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v63);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1662;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1662LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1663;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1663LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v12 < 0 )
      goto LABEL_61;
    v26 = DXGGLOBAL::GetGlobal();
    v66 = 0;
    v65 = (struct _KTHREAD **)((char *)v26 + 672);
    if ( v26 == (struct DXGGLOBAL *)-672LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    v27 = KeGetCurrentThread();
    if ( v65[3] == v27 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    v12 = 0;
    if ( (PEPROCESS)PsGetCurrentProcess(v27) == PsInitialSystemProcess )
    {
      v29 = 0LL;
    }
    else
    {
      v28 = DXGGLOBAL::GetGlobal();
      v29 = DXGGLOBAL::GetSessionData(v28);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v65);
    v30 = (_QWORD *)((char *)v26 + 768);
    v31 = (_QWORD *)*((_QWORD *)v26 + 96);
LABEL_45:
    while ( v31 != v30 && v31 && !v12 )
    {
      v32 = v31;
      v31 = (_QWORD *)*v31;
      _m_prefetchw(v32 + 3);
      v33 = v32[3];
      while ( v33 )
      {
        v34 = v33;
        v33 = _InterlockedCompareExchange64(v32 + 3, v33 + 1, v33);
        if ( v34 == v33 )
        {
          if ( !v32[390] && (!v29 || DXGSESSIONDATA::CanEnumerateAdapter(v29, (struct DXGADAPTER *)v32)) )
            v12 = EnumAdaptersCallback((struct DXGADAPTER *)v32, a1);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v32);
          goto LABEL_45;
        }
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v65);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1675;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1675LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1676;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1676LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v12 < 0 )
      goto LABEL_61;
    v43 = DXGGLOBAL::GetGlobal();
    v68 = 0;
    v67 = (struct _KTHREAD **)((char *)v43 + 672);
    if ( v43 == (struct DXGGLOBAL *)-672LL )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 638;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
    }
    v44 = KeGetCurrentThread();
    if ( v67[3] == v44 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 645;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
    }
    v12 = 0;
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v44);
    v46 = PsInitialSystemProcess;
    if ( CurrentProcess == PsInitialSystemProcess )
    {
      v48 = 0LL;
    }
    else
    {
      v47 = DXGGLOBAL::GetGlobal();
      v48 = DXGGLOBAL::GetSessionData(v47);
    }
    if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors((__int64)v46) )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v67);
      v49 = (_QWORD *)((char *)v43 + 768);
      v50 = (_QWORD *)*((_QWORD *)v43 + 96);
LABEL_77:
      while ( v50 != v49 && v50 && !v12 )
      {
        v51 = v50;
        v50 = (_QWORD *)*v50;
        _m_prefetchw(v51 + 3);
        v52 = v51[3];
        while ( v52 )
        {
          v53 = v52;
          v52 = _InterlockedCompareExchange64(v51 + 3, v52 + 1, v52);
          if ( v53 == v52 )
          {
            if ( (DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)v51) || !v51[391] && !*(_QWORD *)((char *)v51 + 4828))
              && DxgkpCanEnumerateAdapter(v48, (struct DXGADAPTER *)v51) )
            {
              v12 = EnumAdaptersCallback((struct DXGADAPTER *)v51, a1);
            }
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v51);
            goto LABEL_77;
          }
        }
      }
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v67);
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1689;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->AdaptersBufferCount",
        1689LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_DWORD *)a1 > *((_DWORD *)a1 + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1690;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pEnumAdapters->NumAdapters <= pEnumAdapters->RequiredAdaptersBufferCount",
        1690LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v12 < 0 )
    {
LABEL_61:
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 1696;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to iterate all the adapters (ntStatus = 0x%I64x).",
        v12,
        0LL,
        0LL,
        0LL,
        0LL);
      v36 = DXGPROCESS::GetCurrent(v35);
      while ( *(_DWORD *)a1 )
      {
        v37 = *((_QWORD *)a1 + 2);
        v38 = *(_DWORD *)a1 - 1;
        *(_DWORD *)a1 = v38;
        DXGADAPTER::DestroyHandle(v36, *(_DWORD *)(v37 + 20LL * v38));
      }
    }
    if ( v72 )
      (*(void (**)(void))(*((_QWORD *)v61 + 11) + 40LL))();
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
    if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v54, (__int64)&EventProfilerExit, v55, v69);
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1610;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
    if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v57, (__int64)&EventProfilerExit, v58, v69);
    return 3221225485LL;
  }
}
