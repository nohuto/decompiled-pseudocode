/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403BD4AC
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1403BD190 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400738A8 (-Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x140257F5C (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403B074C (-MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     DpiPollDisplayChildren @ 0x1403BE03C (DpiPollDisplayChildren.c)
 *     ?MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403C30A8 (-MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL **this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  ULONG v5; // esi
  unsigned int v6; // edi
  DXGGLOBAL *v7; // rcx
  DXGGLOBAL *v8; // rax
  PVOID v9; // rcx
  PVOID *QuadPart; // r13
  struct _MONITOR_PENDING_EVENT **v11; // r14
  DXGGLOBAL *v12; // rcx
  DXGGLOBAL *v13; // rax
  volatile signed __int64 *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  struct _MONITOR_PENDING_EVENT *v17; // rsi
  void *v18; // rcx
  unsigned int v19; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v20; // r13
  __int64 v21; // rbx
  PVOID *v22; // rsi
  int v23; // eax
  _DWORD *v24; // rcx
  int v26; // eax
  __int64 v27; // r12
  const wchar_t *v28; // r9
  int v29; // eax
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  KPROCESSOR_MODE WaitMode; // al
  NTSTATUS v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  signed __int64 v40; // r13
  __int64 v41; // rbx
  _QWORD *v42; // rsi
  _QWORD *v43; // rdi
  _QWORD *v44; // rbx
  signed __int64 v45; // rax
  signed __int64 v46; // rtt
  ULONG i; // ecx
  int v48; // eax
  __int64 v49; // rbx
  unsigned int v50; // [rsp+50h] [rbp-B0h]
  ULONG v51; // [rsp+54h] [rbp-ACh]
  DXGGLOBAL *v52; // [rsp+58h] [rbp-A8h]
  _QWORD *v54; // [rsp+68h] [rbp-98h]
  struct _MONITOR_PENDING_EVENT *v56; // [rsp+78h] [rbp-88h] BYREF
  DXGGLOBAL *v57; // [rsp+80h] [rbp-80h]
  _QWORD *v58; // [rsp+88h] [rbp-78h]
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp-70h] BYREF
  DXGADAPTERLISTLOCK *v60[2]; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v61; // [rsp+A8h] [rbp-58h]
  struct _MONITOR_PENDING_EVENT **v62; // [rsp+B0h] [rbp-50h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+B8h] [rbp-48h]
  DXGGLOBAL *v64; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+D0h] [rbp-30h]
  _BYTE v66[64]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v67; // [rsp+118h] [rbp+18h]
  PVOID v68; // [rsp+120h] [rbp+20h]
  _BYTE v69[64]; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v70; // [rsp+168h] [rbp+68h]
  PVOID v71; // [rsp+170h] [rbp+70h]
  _BYTE v72[64]; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v73; // [rsp+1B8h] [rbp+B8h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+1C0h] [rbp+C0h]
  _BYTE v75[64]; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v76; // [rsp+208h] [rbp+108h]
  PVOID Pool2; // [rsp+210h] [rbp+110h]
  _BYTE v78[384]; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v79; // [rsp+398h] [rbp+298h]
  _BYTE v80[144]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE v81[144]; // [rsp+430h] [rbp+330h] BYREF

  v64 = (DXGGLOBAL *)this;
  v61 = a4;
  v50 = 0;
  v5 = 0;
  v51 = 0;
  v6 = 0;
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
    (DXGAUTOADAPTERLISTLOCK *)v60,
    (struct DXGADAPTERLISTLOCK *)(this + 84));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v60);
  v7 = this[100];
  while ( v7 != (DXGGLOBAL *)(this + 100) && v7 )
  {
    v8 = v7;
    v7 = *(DXGGLOBAL **)v7;
    if ( *((_QWORD *)v8 + 390) )
      ++v6;
  }
  if ( !v6 )
  {
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v60);
    return 0LL;
  }
  Object = 0LL;
  v76 = 0;
  if ( v6 <= 8 )
  {
    Object = (PVOID *)v75;
    memset(v75, 0, 8LL * v6);
LABEL_9:
    v76 = v6;
    goto LABEL_10;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 8 )
  {
    Object = (PVOID *)ExAllocatePool2(64LL, 8LL * v6, 1265072196LL);
    goto LABEL_9;
  }
LABEL_10:
  Pool2 = 0LL;
  v79 = 0;
  if ( v6 <= 8 )
  {
    Pool2 = v78;
    memset(v78, 0, 48LL * v6);
LABEL_12:
    v79 = v6;
    goto LABEL_13;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 0x30 )
  {
    Pool2 = (PVOID)ExAllocatePool2(64LL, 48LL * v6, 1265072196LL);
    goto LABEL_12;
  }
LABEL_13:
  v71 = 0LL;
  v73 = 0;
  if ( v6 <= 8 )
  {
    v71 = v72;
    memset(v72, 0, 8LL * v6);
LABEL_15:
    v73 = v6;
    goto LABEL_16;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 8 )
  {
    v71 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL);
    goto LABEL_15;
  }
LABEL_16:
  v68 = 0LL;
  v70 = 0;
  if ( v6 <= 8 )
  {
    v68 = v69;
    memset(v69, 0, 8LL * v6);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_18;
    v68 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL);
  }
  v70 = v6;
LABEL_18:
  v67 = 0;
  v9 = 0LL;
  v54 = 0LL;
  P = 0LL;
  if ( v6 <= 8 )
  {
    P = v66;
    memset(v66, 0, 8LL * v6);
    v9 = P;
    goto LABEL_81;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 8 )
  {
    v9 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL);
    P = v9;
LABEL_81:
    v54 = v9;
    v67 = v6;
  }
  QuadPart = Object;
  v11 = (struct _MONITOR_PENDING_EVENT **)v68;
  Timeout.QuadPart = (LONGLONG)Object;
  WaitBlockArray = (PKWAIT_BLOCK)Pool2;
  v58 = v71;
  v62 = (struct _MONITOR_PENDING_EVENT **)v68;
  if ( v71 && v68 && Object && Pool2 && v9 )
  {
    v12 = (DXGGLOBAL *)(this + 100);
    v13 = this[100];
    v52 = v13;
    v57 = (DXGGLOBAL *)(this + 100);
    while ( v13 != v12 && v13 )
    {
      if ( v5 >= v6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4094;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"NumAdapters < MaxNumAdapters",
          4094LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v13 = v52;
      }
      v14 = (volatile signed __int64 *)v13;
      v52 = *(DXGGLOBAL **)v13;
      _m_prefetchw((char *)v13 + 24);
      v15 = *((_QWORD *)v13 + 3);
      while ( v15 )
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange64(v14 + 3, v15 + 1, v15);
        if ( v16 == v15 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v80, (struct DXGADAPTER *const)v14, 0LL);
          v17 = 0LL;
          v56 = 0LL;
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
          if ( *((_QWORD *)v14 + 390) && (int)COREADAPTERACCESS::AcquireExclusive((__int64)v80, 1u, 0) >= 0 )
          {
            v18 = (void *)*((_QWORD *)v14 + 27);
            v58[v51] = v18;
            ObfReferenceObject(v18);
            if ( (*((_DWORD *)a2 + 1) & 2) == 0 )
              goto LABEL_36;
            v26 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v14, &v56);
            v17 = v56;
            v27 = v26;
            if ( v26 < 0 )
            {
              if ( v56 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4151;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"pMonitorPendingEvent == NULL",
                  4151LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              WdLogSingleEntry1(2LL, v27);
              v28 = L"Failed in acquiring monitor pending event (Status == 0x%I64x)!";
              WdLogGlobalForLineNumber = 4153;
            }
            else
            {
              v11[v51] = v56;
              QuadPart[v51] = (char *)v17 + 24;
LABEL_36:
              if ( (*((_DWORD *)a2 + 1) & 4) == 0 )
              {
LABEL_37:
                ++v51;
                goto LABEL_38;
              }
              v29 = DmmEnableModeResetOnMonitorEvent((PERESOURCE *)v14, 0);
              v27 = v29;
              if ( v29 >= 0 )
              {
                v54[v51] = v14;
                goto LABEL_37;
              }
              WdLogSingleEntry1(2LL, v29);
              v28 = L"Failed in disabling mode reset on monitor event (Status == 0x%I64x)!";
              WdLogGlobalForLineNumber = 4173;
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v28, v27, 0LL, 0LL, 0LL, 0LL);
            v30 = v58;
            v50 = v27;
            ObfDereferenceObject((PVOID)v58[v51]);
            v30[v51] = 0LL;
            if ( v17 )
            {
              MonitorReleaseMonitorPendingEvent(v17, v31, v32, v33);
              v11[v51] = 0LL;
              QuadPart[v51] = 0LL;
            }
LABEL_38:
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v80);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80);
          v5 = v51;
          break;
        }
      }
      v13 = v52;
      v12 = v57;
    }
    DXGAUTOADAPTERLISTLOCK::Release((DXGAUTOADAPTERLISTLOCK *)v60);
    v19 = v50;
    if ( v5 )
    {
      v20 = v61;
      v21 = v5;
      v22 = (PVOID *)v58;
      do
      {
        v23 = DpiPollDisplayChildren(*v22, a3, v20);
        if ( v23 < 0 )
          v19 = v23;
        ObfDereferenceObject(*v22);
        *v22++ = 0LL;
        --v21;
      }
      while ( v21 );
      v11 = v62;
      QuadPart = (PVOID *)Timeout.QuadPart;
      v5 = v51;
      v50 = v19;
    }
    v24 = (_DWORD *)a2 + 1;
    if ( (*((_DWORD *)a2 + 1) & 2) != 0 && v5 )
    {
      Timeout.QuadPart = -10000000LL;
      WaitMode = ExGetPreviousMode();
      v35 = KeWaitForMultipleObjects(v5, QuadPart, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
      v50 = 258;
      if ( v35 == 258 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4240;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Monitor pending event wait has been timeouted!",
          4240LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else if ( v35 < 0 )
      {
        v50 = v35;
        v39 = v35;
        WdLogSingleEntry1(2LL, v35);
        WdLogGlobalForLineNumber = 4246;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
          v39,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v50 = v19;
      }
      v40 = (char *)QuadPart - (char *)v11;
      v41 = v5;
      do
      {
        MonitorReleaseMonitorPendingEvent(*v11, v36, v37, v38);
        *v11 = 0LL;
        *(struct _MONITOR_PENDING_EVENT **)((char *)v11++ + v40) = 0LL;
        --v41;
      }
      while ( v41 );
      v24 = (_DWORD *)a2 + 1;
    }
    if ( (*v24 & 4) != 0 && v5 )
    {
      DXGAUTOADAPTERLISTLOCK::AcquireShared(v60);
      v42 = (_QWORD *)((char *)v64 + 800);
      v43 = (_QWORD *)*((_QWORD *)v64 + 100);
LABEL_103:
      while ( v43 != v42 && v43 )
      {
        v44 = v43;
        v43 = (_QWORD *)*v43;
        _m_prefetchw(v44 + 3);
        v45 = v44[3];
        while ( v45 )
        {
          v46 = v45;
          v45 = _InterlockedCompareExchange64(v44 + 3, v45 + 1, v45);
          if ( v46 == v45 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v81, (struct DXGADAPTER *const)v44, 0LL);
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v44);
            for ( i = 0; i < v51; ++i )
            {
              if ( (_QWORD *)v54[i] == v44 )
              {
                if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v81, 1u, 0) >= 0 )
                {
                  v48 = DmmEnableModeResetOnMonitorEvent((PERESOURCE *)v44, 1);
                  if ( v48 < 0 )
                  {
                    v49 = v48;
                    WdLogSingleEntry1(2LL, v48);
                    WdLogGlobalForLineNumber = 4319;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000LL,
                      0xFFFFFFFFLL,
                      L"Failed to re-eanble mode reset on monitor event (Status == 0x%I64x)!",
                      v49,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v81);
                }
                break;
              }
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
            goto LABEL_103;
          }
        }
      }
    }
    if ( P != v66 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v67 = 0;
    if ( v68 != v69 && v68 )
      ExFreePoolWithTag(v68, 0);
    v68 = 0LL;
    v70 = 0;
    if ( v71 != v72 && v71 )
      ExFreePoolWithTag(v71, 0);
    v71 = 0LL;
    v73 = 0;
    if ( Pool2 != v78 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v79 = 0;
    if ( Object != (PVOID *)v75 && Object )
      ExFreePoolWithTag(Object, 0);
    Object = 0LL;
    v76 = 0;
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v60);
    return v50;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4083;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate per-adapter array memory in PollDisplayChildrenAll",
      4083LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v66 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v67 = 0;
    if ( v68 != v69 && v68 )
      ExFreePoolWithTag(v68, 0);
    v68 = 0LL;
    v70 = 0;
    if ( v71 != v72 && v71 )
      ExFreePoolWithTag(v71, 0);
    v71 = 0LL;
    v73 = 0;
    if ( Pool2 != v78 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v79 = 0;
    if ( Object != (PVOID *)v75 && Object )
      ExFreePoolWithTag(Object, 0);
    Object = 0LL;
    v76 = 0;
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v60);
    return 3221225495LL;
  }
}
