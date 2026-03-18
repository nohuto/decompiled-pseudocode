/*
 * XREFs of ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403CB400
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1403CA3A0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14001BF28 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023190 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x140251124 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x14028382C (-MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DpiPollDisplayChildren @ 0x1403CB24C (DpiPollDisplayChildren.c)
 *     ?MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403D01A8 (-MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 */

__int64 __fastcall PollDisplayChildrenForAdapter(
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a1,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  struct _MONITOR_PENDING_EVENT *v6; // rsi
  struct DXGPROCESS *v7; // rbx
  __int64 CurrentProcess; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  D3DKMT_HANDLE hAdapter; // edx
  struct DXGADAPTER *v13; // r13
  struct DXGPROCESS *v14; // r8
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rdi
  PVOID v18; // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v28; // eax
  int v29; // eax
  __int64 v30; // rsi
  int v31; // eax
  struct _MONITOR_PENDING_EVENT *v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v36; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h]
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v38; // [rsp+78h] [rbp-88h]
  DXGADAPTER *v39[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v40[144]; // [rsp+90h] [rbp-70h] BYREF

  Timeout.QuadPart = (LONGLONG)a3;
  v34 = a2;
  v38 = a1;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v6 = 0LL;
  v7 = Current;
  if ( Current )
  {
    hAdapter = a1->hAdapter;
    v36 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v39, hAdapter, Current, &v36, 1);
    v13 = v36;
    if ( v36 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, v36, 0LL);
      LODWORD(v17) = COREADAPTERACCESS::AcquireExclusive((__int64)v40, v16 + 1, v16);
      if ( (int)v17 >= 0 )
      {
        v18 = (PVOID)*((_QWORD *)v13 + 27);
        v33 = 0LL;
        Object = v18;
        ObfReferenceObject(v18);
        if ( (*((_DWORD *)a1 + 1) & 2) != 0
          && (v19 = MonitorAcquireMonitorPendingEvent(v13, &v33), v6 = v33, v17 = v19, v19 < 0) )
        {
          if ( v33 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1977;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"pMonitorPendingEvent == NULL",
              1977LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          WdLogSingleEntry1(2LL, v17);
          WdLogGlobalForLineNumber = 1979;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed in acquiring monitor pending event (Status == 0x%I64x)!",
            v17,
            0LL,
            0LL,
            0LL,
            0LL);
          v18 = Object;
        }
        else if ( (*((_DWORD *)v38 + 1) & 4) != 0 )
        {
          v20 = DmmEnableModeResetOnMonitorEvent((PERESOURCE *)v13, 0);
          v17 = v20;
          if ( v20 < 0 )
          {
            WdLogSingleEntry1(2LL, v20);
            WdLogGlobalForLineNumber = 1995;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Failed in disabling mode reset on monitor event (Status == 0x%I64x)!",
              v17,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v40);
        if ( (int)v17 >= 0 )
        {
          LODWORD(v17) = DpiPollDisplayChildren((__int64)v18, v34, (__int128 *)Timeout.QuadPart);
          ObfDereferenceObject(v18);
          if ( v6 )
          {
            if ( (int)v17 >= 0 )
            {
              Timeout.QuadPart = -10000000LL;
              PreviousMode = ExGetPreviousMode();
              v28 = KeWaitForSingleObject((char *)v6 + 24, UserRequest, PreviousMode, 0, &Timeout);
              v17 = v28;
              if ( v28 == 258 )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 2042;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Monitor pending event wait has been timeouted!",
                  2042LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              else if ( v28 < 0 )
              {
                WdLogSingleEntry1(2LL, v28);
                WdLogGlobalForLineNumber = 2047;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
                  v17,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            MonitorReleaseMonitorPendingEvent(v6, v24, v25, v26);
            v33 = 0LL;
          }
          if ( (*((_DWORD *)v38 + 1) & 4) != 0 )
          {
            v29 = COREADAPTERACCESS::AcquireExclusive((__int64)v40, 1u, 0);
            v30 = v29;
            if ( v29 < 0 )
            {
              WdLogSingleEntry1(2LL, v29);
              WdLogGlobalForLineNumber = 2090;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"Failed in acquiring adapter core access lock, (Status == 0x%I64x)!",
                v30,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            else
            {
              v31 = DmmEnableModeResetOnMonitorEvent((PERESOURCE *)v13, 1);
              v30 = v31;
              if ( v31 < 0 )
              {
                WdLogSingleEntry1(2LL, v31);
                WdLogGlobalForLineNumber = 2082;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  0xFFFFFFFFLL,
                  L"Failed in re-enabling mode reset on monitor event (Status == 0x%I64x)!",
                  v30,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v40);
            }
            if ( !(_DWORD)v17 )
              LODWORD(v17) = v30;
          }
        }
        else
        {
          ObfDereferenceObject(v18);
          if ( v6 )
            MonitorReleaseMonitorPendingEvent(v6, v21, v22, v23);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
      v9 = v17;
    }
    else
    {
      v14 = v7;
      v9 = -1073741811;
      WdLogSingleEntry3(3LL, -1073741811LL, v14, a1->hAdapter);
      WdLogGlobalForLineNumber = 1943;
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v39, v15);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 1931;
    v11 = PsGetCurrentProcess(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v11,
      0LL,
      0LL,
      0LL);
  }
  return v9;
}
