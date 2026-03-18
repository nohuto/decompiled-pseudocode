/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4
 * Callers:
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0010ADC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0010BBC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     UserDeleteW32Process @ 0x1C0036230 (UserDeleteW32Process.c)
 *     UserDeleteW32Thread @ 0x1C0038040 (UserDeleteW32Thread.c)
 *     GreCreateCompatibleDC @ 0x1C003BC40 (GreCreateCompatibleDC.c)
 *     UserGetDesktopDC @ 0x1C005A7D0 (UserGetDesktopDC.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00768C0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     DeactivateKSTInputProcessingHelper @ 0x1C00807B4 (DeactivateKSTInputProcessingHelper.c)
 *     W32kEtwEnableCallback @ 0x1C00AF6CC (W32kEtwEnableCallback.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C30 (RIMOnAsyncPnpWorkNotification.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C01B76F0 (ResetAccessibilityCountersOnMouseInput.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  bool v2; // al
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v6; // rbx
  __int64 v8; // rax

  v2 = IS_USERCRIT_OWNED_EXCLUSIVE();
  *(_BYTE *)this = v2;
  if ( !v2 )
  {
    v3 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
    gptiCurrent = v3;
    if ( v3 )
    {
      *((_DWORD *)v3 + 387) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
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
            v8 = *(_QWORD *)v6;
            *((_QWORD *)v6 + 2) = 0LL;
            if ( !*(_DWORD *)(v8 + 8) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
            HMUnlockObject(*(_QWORD *)v6);
          }
        }
      }
    }
  }
  return this;
}
