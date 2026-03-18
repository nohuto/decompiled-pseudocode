/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C00B4DD0
 * Callers:
 *     AcquireCriticalSectionAndCheckState @ 0x1C00BF830 (AcquireCriticalSectionAndCheckState.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C0140470 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     ??1DirectLeaveEnterCrit@@QEAA@XZ @ 0x1C00D01E0 (--1DirectLeaveEnterCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int Count; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int v27; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+78h] [rbp+10h]
  int v29; // [rsp+80h] [rbp+18h]
  int v30; // [rsp+88h] [rbp+20h]

  v4 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, a2, a3, a4);
  gptiCurrent = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          v6 = gptiCurrent;
          if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0 && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v10 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v9 = *v10;
              v10[2] = 0LL;
              if ( !*(_DWORD *)(v9 + 8) )
              {
                v27 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
              }
              HMUnlockObject(*v10);
            }
          }
        }
      }
    }
  }
  while ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    CurrentProcess = PsGetCurrentProcess(v6, v5, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
        break;
    }
    ++gcSwitchInProgressWaiters;
    if ( qword_1C0296058 )
      qword_1C0296058();
    if ( IS_USERCRIT_OWNED_EXCLUSIVE(v13, v12, v14, v15) )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
      {
        v28 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1170LL);
      }
      if ( gphePrimaryDestroyTarget )
      {
        v29 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1178LL);
      }
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      {
        v30 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1184LL);
      }
      gcInHMDestroyUnlockedObjectWorker = 0;
      gphePrimaryDestroyTarget = 0LL;
      DestroyExclusiveUserCritDeferredUnlockList();
    }
    Count = AtomicExecutionCheck::GetCount();
    if ( Count )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    if ( gptiCurrent )
    {
      if ( W32GetCurrentThread() )
        *((_DWORD *)PtiCurrentShared() + 387) = 0;
    }
    gptiCurrent = 0LL;
    EtwTraceReleaseUserCrit(v18, v17, v19, v20);
    v25 = SGDGetUserSessionState(v22, v21, v23, v24);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v25 + 8));
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    DirectLeaveEnterCrit::~DirectLeaveEnterCrit((DirectLeaveEnterCrit *)&v27);
  }
  return 0LL;
}
