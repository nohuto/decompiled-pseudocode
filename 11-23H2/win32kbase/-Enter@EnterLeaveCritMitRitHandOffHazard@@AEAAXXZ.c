/*
 * XREFs of ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0146100 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0146840 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0146E30 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C0147210 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0147B60 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0148320 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0148CC0 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0149F40 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C014AEF0 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall EnterLeaveCritMitRitHandOffHazard::Enter(Enter *this)
{
  Enter *v1; // rsi
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rax
  struct tagKERNELHANDLETABLEENTRY *v6; // rbx
  unsigned int Count; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  NTSTATUS v13; // edi
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  struct tagKERNELHANDLETABLEENTRY *v18; // rbx

  v1 = this;
  LOBYTE(this) = 1;
  v2 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(this);
  gptiCurrent = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v6 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v5 = *(_QWORD *)v6;
          *((_QWORD *)v6 + 2) = 0LL;
          if ( !*(_DWORD *)(v5 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*(_QWORD *)v6);
        }
      }
    }
  }
  while ( gbInMitRitHandOff )
  {
    ++EnterLeaveCritMitRitHandOffHazard::_slSemWaiters;
    if ( qword_1C0296058 )
      qword_1C0296058();
    if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
    {
      if ( gcInHMDestroyUnlockedObjectWorker )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1170LL);
      if ( gphePrimaryDestroyTarget )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1178LL);
      if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1184LL);
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
    if ( gptiCurrent && W32GetCurrentThread() )
      *((_DWORD *)PtiCurrentShared() + 387) = 0;
    gptiCurrent = 0LL;
    EtwTraceReleaseUserCrit();
    v12 = SGDGetUserSessionState(v9, v8, v10, v11);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v12 + 8));
    v13 = KeWaitForSingleObject(WPP_MAIN_CB.Dpc.DpcListEntry.Next, UserRequest, 1, 0, 0LL);
    v14 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
    gptiCurrent = v14;
    if ( v14 )
    {
      *((_DWORD *)v14 + 387) = 1;
      v16 = PsGetCurrentProcessWin32Process(v15);
      if ( v16 )
      {
        if ( *(_QWORD *)v16
          && (*(_DWORD *)(v16 + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v18 = gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                         + 2);
            v17 = *(_QWORD *)v18;
            *((_QWORD *)v18 + 2) = 0LL;
            if ( !*(_DWORD *)(v17 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            HMUnlockObject(*(_QWORD *)v18);
          }
        }
      }
    }
    if ( v13 == 192 )
    {
      --EnterLeaveCritMitRitHandOffHazard::_slSemWaiters;
      *(_BYTE *)v1 = 1;
      return;
    }
  }
}
