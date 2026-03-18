/*
 * XREFs of EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40
 * Callers:
 *     NtUserVkKeyScanEx @ 0x1C0007F80 (NtUserVkKeyScanEx.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1C0009C90 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C000D804 (UserGetDesktopIdForCurrentThread.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0019C80 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     NtUserEnumDisplayDevices @ 0x1C0023AB0 (NtUserEnumDisplayDevices.c)
 *     GreGetDCPoint @ 0x1C003B970 (GreGetDCPoint.c)
 *     ReferenceDwmApiPort @ 0x1C0047A70 (ReferenceDwmApiPort.c)
 *     NtUserReleaseDC @ 0x1C004C8C0 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C004CD30 (EnterSharedCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     NtUserGetDC @ 0x1C004D400 (NtUserGetDC.c)
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C005C7A8 (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x1C005DDB8 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetKeyboardLayout @ 0x1C0069A60 (NtUserGetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C006BAD0 (NtUserMapVirtualKeyEx.c)
 *     UserEnterUserCritSecShared @ 0x1C00A7C40 (UserEnterUserCritSecShared.c)
 *     UserReleaseDC @ 0x1C00AAFB0 (UserReleaseDC.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C00AB130 (NtMITGetCursorUpdateHandle.c)
 *     NtUserCheckProcessSession @ 0x1C00AB380 (NtUserCheckProcessSession.c)
 *     NtUserGetDoubleClickTime @ 0x1C00AFC30 (NtUserGetDoubleClickTime.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00B04C0 (NtUserGetProcessDpiAwarenessContext.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00B44F0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtMITSetLastInputRecipient @ 0x1C0142140 (NtMITSetLastInputRecipient.c)
 *     NtUserGetKeyboardType @ 0x1C0144A90 (NtUserGetKeyboardType.c)
 *     NtUserGetMinuserIdForBaseWindow @ 0x1C0144B10 (NtUserGetMinuserIdForBaseWindow.c)
 *     NtUserGetSystemDpiForProcess @ 0x1C0145ED0 (NtUserGetSystemDpiForProcess.c)
 *     NtUserIsMouseInPointerEnabled @ 0x1C01497E0 (NtUserIsMouseInPointerEnabled.c)
 *     UserGetWindowThreadProcessId @ 0x1C014F370 (UserGetWindowThreadProcessId.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C0150920 (W32pLkmdDataCollectionCallback.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EE360 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C0053FD0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C005408C (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C013ED04 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

char __fastcall EtwTraceAcquiredSharedUserCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v5; // rdi
  LARGE_INTEGER PerformanceCounter; // rbp
  LONGLONG v7; // rsi
  struct UserCritTelemetry *Instance; // rax
  int v9; // r8d

  LODWORD(CurrentThreadWin32Thread) = IsEtwUserCritEnabled(a1, a2, a3, a4);
  if ( (_DWORD)CurrentThreadWin32Thread )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v5 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v7 = PerformanceCounter.QuadPart - *(_QWORD *)(v5 + 8);
      Instance = UserCritTelemetry::getInstance();
      LOBYTE(CurrentThreadWin32Thread) = UserCritTelemetry::UpdateUserCritInfo(Instance, v7, 1LL);
      *(LARGE_INTEGER *)(v5 + 8) = PerformanceCounter;
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 0x200000010000000LL) != 0 )
      {
        LOBYTE(CurrentThreadWin32Thread) = byte_1C0283068 - 1;
        if ( (unsigned __int8)(byte_1C0283068 - 1) > 2u && (qword_1C0283050 & 0x200000010000000LL) != 0 )
        {
          LOBYTE(CurrentThreadWin32Thread) = 0;
          if ( (qword_1C0283058 & 0x200000010000000LL) == qword_1C0283058 )
          {
            LOBYTE(CurrentThreadWin32Thread) = BYTE2(Microsoft_Windows_Win32kEnableBits);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                                   gullUserCritAcquireToken,
                                                   (unsigned int)&AcquiredSharedUserCritEvent,
                                                   v9,
                                                   v7,
                                                   1000000 * v7 / gliQpcFreq.QuadPart,
                                                   gullUserCritAcquireToken);
          }
        }
      }
      if ( v7 >= (__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
      {
        LOBYTE(CurrentThreadWin32Thread) = LOBYTE(PerformanceCounter.LowPart)
                                         - W32KEtwUserCritAcquireDelayShLastTelemetryQPC;
        if ( PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
            LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                                 gullUserCritAcquireToken,
                                                 (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
                                                 v9,
                                                 v7,
                                                 1000 * v7 / gliQpcFreq.QuadPart,
                                                 gullUserCritAcquireToken);
          _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
        }
      }
      *(_QWORD *)(v5 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  return CurrentThreadWin32Thread;
}
