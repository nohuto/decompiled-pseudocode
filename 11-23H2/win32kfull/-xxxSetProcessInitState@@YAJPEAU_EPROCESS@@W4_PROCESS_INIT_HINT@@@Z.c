/*
 * XREFs of ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C004340C
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0043124 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z @ 0x1C0043364 (-xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C001B458 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     AllocateW32Process @ 0x1C0043600 (AllocateW32Process.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     zzzCalcStartCursorHide @ 0x1C00EF950 (zzzCalcStartCursorHide.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetProcessInitState(AtomicExecutionCheck *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  int W32Process; // edi
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KEVENT *v18; // rcx
  __int64 v19; // rax
  int v21; // eax
  int v22; // [rsp+90h] [rbp+18h] BYREF
  int v23; // [rsp+98h] [rbp+20h]

  AtomicExecutionCheck::EnforceConsistency(a1);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v5, v4, v6);
  LOBYTE(v22) = 1;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( gdwDeferWinEvent && !(unsigned int)AtomicExecutionCheck::GetCount() )
  {
    v23 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 861LL);
  }
  ++gdwDeferWinEvent;
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  v12 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    if ( a2 )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 824) & 0x10000000) == 0 )
      {
        v22 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 174LL);
      }
      goto LABEL_5;
    }
LABEL_21:
    if ( (*(_DWORD *)(v12 + 824) & 0x10000000) != 0 )
    {
      v22 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 191LL);
    }
    v21 = *(_DWORD *)(v12 + 12);
    if ( (v21 & 4) != 0 )
    {
      if ( (v21 & 0x20) == 0 )
      {
        v22 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 197LL);
      }
      *(_DWORD *)(v12 + 12) &= ~4u;
      zzzCalcStartCursorHide(0LL, 0LL);
    }
    *(_DWORD *)(v12 + 12) |= 1u;
    v18 = *(struct _KEVENT **)(v12 + 16);
    if ( v18 )
    {
      if ( v18 == (struct _KEVENT *)-1LL )
        goto LABEL_20;
      KeSetEvent(v18, 1, 0);
      ObfDereferenceObject(*(PVOID *)(v12 + 16));
    }
    *(_QWORD *)(v12 + 16) = -1LL;
LABEL_20:
    --gdwDeferWinEvent;
    v19 = PsGetCurrentThreadWin32Thread(v18, v9, v11);
    --*(_DWORD *)(v19 + 48);
    return 0LL;
  }
  W32Process = AllocateW32Process(a1);
  if ( W32Process >= 0 )
  {
    v12 = PsGetProcessWin32Process(a1);
    if ( a2 )
    {
LABEL_5:
      if ( PsGetCurrentProcess(v10, v9, v11) != gpepCSRSS )
      {
        v22 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 208LL);
      }
      if ( (*(_DWORD *)(v12 + 12) & 0x20) != 0 )
      {
        v22 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 209LL);
      }
      *(_DWORD *)(v12 + 12) |= 0x20u;
      gdwPUDFlags |= 0x8000000u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          10,
          4,
          2,
          10,
          (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids,
          v12);
      }
      if ( a1 == (AtomicExecutionCheck *)gpepCSRSS )
      {
        v22 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 221LL);
      }
      if ( a2 == 2 )
      {
        *(_DWORD *)(v12 + 12) |= 2u;
        v16 = 0LL;
        v17 = 0LL;
      }
      else
      {
        if ( a2 != 1 )
        {
          v22 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 232LL);
        }
        v16 = 2000LL;
        v17 = v12;
      }
      zzzCalcStartCursorHide(v17, v16);
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  --gdwDeferWinEvent;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v22);
  return (unsigned int)W32Process;
}
