/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403CA6BC
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1403CA3A0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x140251124 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x14028382C (-MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     DpiPollDisplayChildren @ 0x1403CB24C (DpiPollDisplayChildren.c)
 *     ?MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403D01A8 (-MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL **this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  ULONG v5; // esi
  unsigned int v6; // edi
  __int64 v7; // r9
  DXGGLOBAL *v8; // rcx
  DXGGLOBAL *v9; // rax
  PVOID v10; // rcx
  PVOID *QuadPart; // r13
  struct _MONITOR_PENDING_EVENT **v12; // r14
  DXGGLOBAL *v13; // rcx
  DXGGLOBAL *v14; // rax
  volatile signed __int64 *v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  struct _MONITOR_PENDING_EVENT *v18; // rsi
  void *v19; // rcx
  unsigned int v20; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v21; // r13
  __int64 v22; // rbx
  PVOID *v23; // rsi
  int v24; // eax
  _DWORD *v25; // rcx
  int v27; // eax
  __int64 v28; // r12
  const wchar_t *v29; // r9
  int v30; // eax
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  KPROCESSOR_MODE WaitMode; // al
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  signed __int64 v41; // r13
  __int64 v42; // rbx
  _QWORD *v43; // rsi
  _QWORD *v44; // rdi
  _QWORD *v45; // rbx
  signed __int64 v46; // rax
  signed __int64 v47; // rtt
  ULONG i; // ecx
  int v49; // eax
  __int64 v50; // rbx
  unsigned int v51; // [rsp+50h] [rbp-B0h]
  ULONG v52; // [rsp+54h] [rbp-ACh]
  DXGGLOBAL *v53; // [rsp+58h] [rbp-A8h]
  _QWORD *v55; // [rsp+68h] [rbp-98h]
  struct _MONITOR_PENDING_EVENT *v57; // [rsp+78h] [rbp-88h] BYREF
  DXGGLOBAL *v58; // [rsp+80h] [rbp-80h]
  _QWORD *v59; // [rsp+88h] [rbp-78h]
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v61[16]; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v62; // [rsp+A8h] [rbp-58h]
  struct _MONITOR_PENDING_EVENT **v63; // [rsp+B0h] [rbp-50h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+B8h] [rbp-48h]
  DXGGLOBAL *v65; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+D0h] [rbp-30h]
  _BYTE v67[64]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v68; // [rsp+118h] [rbp+18h]
  PVOID v69; // [rsp+120h] [rbp+20h]
  _BYTE v70[64]; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v71; // [rsp+168h] [rbp+68h]
  PVOID v72; // [rsp+170h] [rbp+70h]
  _BYTE v73[64]; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v74; // [rsp+1B8h] [rbp+B8h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+1C0h] [rbp+C0h]
  _BYTE v76[64]; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v77; // [rsp+208h] [rbp+108h]
  PVOID Pool2; // [rsp+210h] [rbp+110h]
  _BYTE v79[384]; // [rsp+218h] [rbp+118h] BYREF
  unsigned int v80; // [rsp+398h] [rbp+298h]
  _BYTE v81[144]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE v82[144]; // [rsp+430h] [rbp+330h] BYREF

  v65 = (DXGGLOBAL *)this;
  v62 = a4;
  v51 = 0;
  v5 = 0;
  v52 = 0;
  v6 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v61, (struct DXGFASTMUTEX *const)(this + 84), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
  v8 = this[96];
  while ( v8 != (DXGGLOBAL *)(this + 96) && v8 )
  {
    v9 = v8;
    v8 = *(DXGGLOBAL **)v8;
    if ( *((_QWORD *)v9 + 390) )
      ++v6;
  }
  if ( !v6 )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
    return 0LL;
  }
  Object = 0LL;
  v77 = 0;
  if ( v6 <= 8 )
  {
    Object = (PVOID *)v76;
    memset(v76, 0, 8LL * v6);
LABEL_9:
    v77 = v6;
    goto LABEL_10;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 8 )
  {
    Object = (PVOID *)ExAllocatePool2(64LL, 8LL * v6, 1265072196LL, v7);
    goto LABEL_9;
  }
LABEL_10:
  Pool2 = 0LL;
  v80 = 0;
  if ( v6 <= 8 )
  {
    Pool2 = v79;
    memset(v79, 0, 48LL * v6);
LABEL_12:
    v80 = v6;
    goto LABEL_13;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 0x30 )
  {
    Pool2 = (PVOID)ExAllocatePool2(64LL, 48LL * v6, 1265072196LL, v7);
    goto LABEL_12;
  }
LABEL_13:
  v72 = 0LL;
  v74 = 0;
  if ( v6 <= 8 )
  {
    v72 = v73;
    memset(v73, 0, 8LL * v6);
LABEL_15:
    v74 = v6;
    goto LABEL_16;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 8 )
  {
    v72 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL, v7);
    goto LABEL_15;
  }
LABEL_16:
  v69 = 0LL;
  v71 = 0;
  if ( v6 <= 8 )
  {
    v69 = v70;
    memset(v70, 0, 8LL * v6);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_18;
    v69 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL, v7);
  }
  v71 = v6;
LABEL_18:
  v68 = 0;
  v10 = 0LL;
  v55 = 0LL;
  P = 0LL;
  if ( v6 <= 8 )
  {
    P = v67;
    memset(v67, 0, 8LL * v6);
    v10 = P;
    goto LABEL_81;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 8 )
  {
    v10 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL, v7);
    P = v10;
LABEL_81:
    v55 = v10;
    v68 = v6;
  }
  QuadPart = Object;
  v12 = (struct _MONITOR_PENDING_EVENT **)v69;
  Timeout.QuadPart = (LONGLONG)Object;
  WaitBlockArray = (PKWAIT_BLOCK)Pool2;
  v59 = v72;
  v63 = (struct _MONITOR_PENDING_EVENT **)v69;
  if ( v72 && v69 && Object && Pool2 && v10 )
  {
    v13 = (DXGGLOBAL *)(this + 96);
    v14 = this[96];
    v53 = v14;
    v58 = (DXGGLOBAL *)(this + 96);
    while ( v14 != v13 && v14 )
    {
      if ( v5 >= v6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4094;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"NumAdapters < MaxNumAdapters",
          4094LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v14 = v53;
      }
      v15 = (volatile signed __int64 *)v14;
      v53 = *(DXGGLOBAL **)v14;
      _m_prefetchw((char *)v14 + 24);
      v16 = *((_QWORD *)v14 + 3);
      while ( v16 )
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange64(v15 + 3, v16 + 1, v16);
        if ( v17 == v16 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v81, (struct DXGADAPTER *const)v15, 0LL);
          v18 = 0LL;
          v57 = 0LL;
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
          if ( *((_QWORD *)v15 + 390) && (int)COREADAPTERACCESS::AcquireExclusive((__int64)v81, 1u, 0) >= 0 )
          {
            v19 = (void *)*((_QWORD *)v15 + 27);
            v59[v52] = v19;
            ObfReferenceObject(v19);
            if ( (*((_DWORD *)a2 + 1) & 2) == 0 )
              goto LABEL_36;
            v27 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v15, &v57);
            v18 = v57;
            v28 = v27;
            if ( v27 < 0 )
            {
              if ( v57 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 4151;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"pMonitorPendingEvent == NULL",
                  4151LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              WdLogSingleEntry1(2LL, v28);
              v29 = L"Failed in acquiring monitor pending event (Status == 0x%I64x)!";
              WdLogGlobalForLineNumber = 4153;
            }
            else
            {
              v12[v52] = v57;
              QuadPart[v52] = (char *)v18 + 24;
LABEL_36:
              if ( (*((_DWORD *)a2 + 1) & 4) == 0 )
              {
LABEL_37:
                ++v52;
                goto LABEL_38;
              }
              v30 = DmmEnableModeResetOnMonitorEvent((PERESOURCE *)v15, 0);
              v28 = v30;
              if ( v30 >= 0 )
              {
                v55[v52] = v15;
                goto LABEL_37;
              }
              WdLogSingleEntry1(2LL, v30);
              v29 = L"Failed in disabling mode reset on monitor event (Status == 0x%I64x)!";
              WdLogGlobalForLineNumber = 4173;
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v29, v28, 0LL, 0LL, 0LL, 0LL);
            v31 = v59;
            v51 = v28;
            ObfDereferenceObject((PVOID)v59[v52]);
            v31[v52] = 0LL;
            if ( v18 )
            {
              MonitorReleaseMonitorPendingEvent(v18, v32, v33, v34);
              v12[v52] = 0LL;
              QuadPart[v52] = 0LL;
            }
LABEL_38:
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)v81);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v81);
          v5 = v52;
          break;
        }
      }
      v14 = v53;
      v13 = v58;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v61);
    v20 = v51;
    if ( v5 )
    {
      v21 = v62;
      v22 = v5;
      v23 = (PVOID *)v59;
      do
      {
        v24 = DpiPollDisplayChildren(*v23, a3, v21);
        if ( v24 < 0 )
          v20 = v24;
        ObfDereferenceObject(*v23);
        *v23++ = 0LL;
        --v22;
      }
      while ( v22 );
      v12 = v63;
      QuadPart = (PVOID *)Timeout.QuadPart;
      v5 = v52;
      v51 = v20;
    }
    v25 = (_DWORD *)a2 + 1;
    if ( (*((_DWORD *)a2 + 1) & 2) != 0 && v5 )
    {
      Timeout.QuadPart = -10000000LL;
      WaitMode = ExGetPreviousMode();
      v36 = KeWaitForMultipleObjects(v5, QuadPart, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
      v51 = 258;
      if ( v36 == 258 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4240;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Monitor pending event wait has been timeouted!",
          4240LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else if ( v36 < 0 )
      {
        v51 = v36;
        v40 = v36;
        WdLogSingleEntry1(2LL, v36);
        WdLogGlobalForLineNumber = 4246;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
          v40,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v51 = v20;
      }
      v41 = (char *)QuadPart - (char *)v12;
      v42 = v5;
      do
      {
        MonitorReleaseMonitorPendingEvent(*v12, v37, v38, v39);
        *v12 = 0LL;
        *(struct _MONITOR_PENDING_EVENT **)((char *)v12++ + v41) = 0LL;
        --v42;
      }
      while ( v42 );
      v25 = (_DWORD *)a2 + 1;
    }
    if ( (*v25 & 4) != 0 && v5 )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
      v43 = (_QWORD *)((char *)v65 + 768);
      v44 = (_QWORD *)*((_QWORD *)v65 + 96);
LABEL_103:
      while ( v44 != v43 && v44 )
      {
        v45 = v44;
        v44 = (_QWORD *)*v44;
        _m_prefetchw(v45 + 3);
        v46 = v45[3];
        while ( v46 )
        {
          v47 = v46;
          v46 = _InterlockedCompareExchange64(v45 + 3, v46 + 1, v46);
          if ( v47 == v46 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v82, (struct DXGADAPTER *const)v45, 0LL);
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v45);
            for ( i = 0; i < v52; ++i )
            {
              if ( (_QWORD *)v55[i] == v45 )
              {
                if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v82, 1u, 0) >= 0 )
                {
                  v49 = DmmEnableModeResetOnMonitorEvent((PERESOURCE *)v45, 1);
                  if ( v49 < 0 )
                  {
                    v50 = v49;
                    WdLogSingleEntry1(2LL, v49);
                    WdLogGlobalForLineNumber = 4319;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      0xFFFFFFFFLL,
                      L"Failed to re-eanble mode reset on monitor event (Status == 0x%I64x)!",
                      v50,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v82);
                }
                break;
              }
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
            goto LABEL_103;
          }
        }
      }
    }
    if ( P != v67 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v68 = 0;
    if ( v69 != v70 && v69 )
      ExFreePoolWithTag(v69, 0);
    v69 = 0LL;
    v71 = 0;
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    if ( Pool2 != v79 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v80 = 0;
    if ( Object != (PVOID *)v76 && Object )
      ExFreePoolWithTag(Object, 0);
    Object = 0LL;
    v77 = 0;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
    return v51;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4083;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to allocate per-adapter array memory in PollDisplayChildrenAll",
      4083LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v67 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v68 = 0;
    if ( v69 != v70 && v69 )
      ExFreePoolWithTag(v69, 0);
    v69 = 0LL;
    v71 = 0;
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    if ( Pool2 != v79 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v80 = 0;
    if ( Object != (PVOID *)v76 && Object )
      ExFreePoolWithTag(Object, 0);
    Object = 0LL;
    v77 = 0;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
    return 3221225495LL;
  }
}
