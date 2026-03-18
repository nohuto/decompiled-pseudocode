/*
 * XREFs of ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1403B0334
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x14040E300 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403B074C (-MonitorReleaseMonitorPendingEvent@@YAJPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForMonitorEventDoneInternal(struct DXGADAPTER *a1)
{
  int v2; // eax
  void *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  KPROCESSOR_MODE PreviousMode; // al
  NTSTATUS v13; // eax
  __int64 result; // rax
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v16[144]; // [rsp+60h] [rbp-B8h] BYREF

  if ( a1 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, a1, 0LL);
    if ( *((_QWORD *)a1 + 390) )
    {
      v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
      if ( v2 < 0 )
      {
        LODWORD(v10) = v2;
      }
      else
      {
        v3 = (void *)*((_QWORD *)a1 + 27);
        ObfReferenceObject(v3);
        v8 = 0LL;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = a1;
        WdLogGlobalForLineNumber = 4824;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4847;
        }
        v9 = *((_QWORD *)a1 + 390);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 112);
          if ( v10 )
          {
            if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(v10 + 24)) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 839;
            }
            v11 = *(_QWORD *)(v10 + 688);
            if ( v11 )
            {
              if ( *(int *)(v11 + 16) <= 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 848;
              }
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 688) + 16LL));
            }
            v8 = *(_QWORD *)(v10 + 688);
            LODWORD(v10) = 0;
            if ( !v8 )
              LODWORD(v10) = -1073741823;
          }
          else
          {
            WdLogSingleEntry1(2LL, a1);
            WdLogGlobalForLineNumber = 4864;
            LODWORD(v10) = -1073741811;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, a1);
          WdLogGlobalForLineNumber = 4851;
          LODWORD(v10) = -1073741637;
        }
        ObfDereferenceObject(v3);
        if ( (int)v10 < 0 )
        {
          if ( v8 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2200;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pMonitorPendingEvent == NULL",
              2200LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          WdLogSingleEntry1(2LL, (int)v10);
          WdLogGlobalForLineNumber = 2202;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed in acquiring monitor pending event (Status == 0x%I64x)!",
            (int)v10,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v16);
          Timeout.QuadPart = -1000000LL;
          PreviousMode = ExGetPreviousMode();
          v13 = KeWaitForSingleObject((PVOID)(v8 + 24), UserRequest, PreviousMode, 0, &Timeout);
          v10 = v13;
          if ( v13 == 258 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 2229;
          }
          else if ( v13 < 0 )
          {
            WdLogSingleEntry1(2LL, v13);
            WdLogGlobalForLineNumber = 2234;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed in waiting for pending monitor event (Status == 0x%I64x)!",
              v10,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          MonitorReleaseMonitorPendingEvent((struct _MONITOR_PENDING_EVENT *)v8);
        }
      }
    }
    else
    {
      LODWORD(v10) = -1073741637;
      WdLogSingleEntry2(2LL, a1, -1073741637LL);
      WdLogGlobalForLineNumber = 2163;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DxgkWaitForMonitorEventDoneInternal is called on a render only adapter 0x%I64x, returning 0x%I64x!",
        (__int64)a1,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry2(3LL, -1073741811LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 2148;
  }
  return result;
}
