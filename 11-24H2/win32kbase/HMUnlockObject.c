/*
 * XREFs of HMUnlockObject @ 0x14005F160
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14005E1E8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14005F94C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     DCompHitTest @ 0x14005FA00 (DCompHitTest.c)
 *     DestroyThreadsObjects @ 0x14005FF70 (DestroyThreadsObjects.c)
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14009702C (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMAssignmentLock @ 0x1400F47B0 (HMAssignmentLock.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x14011EF48 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     VideoPortCallout @ 0x1401237F0 (VideoPortCallout.c)
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x14013C794 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140146F90 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1401475B0 (HMUnlockDestroyObject.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014835C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140152C40 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x14016A8FC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x14016AAC8 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     HMRemoveHandleForObject @ 0x14016AC70 (HMRemoveHandleForObject.c)
 *     NtUserInitializeGenericHidInjection @ 0x14016DC10 (NtUserInitializeGenericHidInjection.c)
 *     UserProcessTimerDelayCallout @ 0x1401A406C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1401A41E0 (UserProcessTimerStatisticsCallout.c)
 *     NtMapVisualRelativePoints @ 0x1401AB4D0 (NtMapVisualRelativePoints.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401B0EB0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     NtMITAccessibilityTimerNotification @ 0x1401B7CE0 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1401B7DD0 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1401B7FF0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1401B80D0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1401B81D0 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1401B82F0 (NtMITInitMinuserThread.c)
 *     NtMITMinuserWindowDestroyed @ 0x1401B8530 (NtMITMinuserWindowDestroyed.c)
 *     NtMITPostMouseInputMessage @ 0x1401B8660 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1401B87E0 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1401B8950 (NtMITPostWindowEventMessage.c)
 *     NtMITSynthesizeMouseInput @ 0x1401B8CC0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401B8EC0 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1401B9070 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1401B91E0 (NtSetCursorInputSpace.c)
 *     NtSetPointerDeviceInputSpace @ 0x1401B9390 (NtSetPointerDeviceInputSpace.c)
 *     NtUserCreateBaseWindow @ 0x1401B9670 (NtUserCreateBaseWindow.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1401B97B0 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1401BA760 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1401BA850 (NtUserEnableTouchPad.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1401BB2D0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserPostKeyboardInputMessage @ 0x1401BCB10 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1401BD2E0 (NtUserSetForegroundRedirectionForActivationObject.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1401BDA80 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1401BDF90 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1401BE090 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1401BE190 (NtUserUnregisterSessionPort.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1401D4930 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1401D4B40 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1401D50F0 (NtRIMUnregisterForInput.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x14020D6F4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x140217380 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 *     IVWorkerThread @ 0x140217C48 (IVWorkerThread.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140045260 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400477C0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x140060CE0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x14016AD70 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1401B6588 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

int *__fastcall HMUnlockObject(int *a1)
{
  int v2; // edi
  __int64 UserSessionState; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  PERESOURCE *v11; // [rsp+20h] [rbp-48h] BYREF
  char v12; // [rsp+48h] [rbp-20h]

  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) != 1 )
    return a1;
  v2 = *a1;
  UserSessionState = W32GetUserSessionState(a1);
  v5 = *(_QWORD *)(UserSessionState + 19944)
     + *(_DWORD *)(W32GetUserSessionState(v4) + 19952) * (unsigned int)(unsigned __int16)v2;
  v6 = *(_BYTE *)(v5 + 25);
  if ( (v6 & 1) != 0 && (v6 & 2) == 0 )
  {
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>((__int64)&v11);
      LockIntoSharedUserCritDeferredUnlockList(a1);
      if ( v12 && v11 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(*v11);
        return 0LL;
      }
    }
    else
    {
      v9 = W32GetUserSessionState(v8);
      v10 = *(_QWORD *)(v9 + 19824);
      if ( v10 && v5 != v10 && !*(_DWORD *)(v9 + 19820) )
      {
        ++*(_DWORD *)(v9 + 19832);
        LockIntoExclusiveUserCritDeferredUnlockList(a1);
        return 0LL;
      }
      HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v5);
    }
    return 0LL;
  }
  return a1;
}
