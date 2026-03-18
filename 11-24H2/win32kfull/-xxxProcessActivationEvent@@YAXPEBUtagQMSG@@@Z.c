/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1402337EC
 * Callers:
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400883B4 (_anonymous_namespace_--xxxUpdateTray.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1401195C8 (xxxCancelTracking.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1401C8A38 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x14023D6F8 (zzzInputFocusReceivedWindowEvent.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x140276114 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     zzzActiveCursorTracking @ 0x14027F630 (zzzActiveCursorTracking.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct tagWND *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-28h] BYREF

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3632LL);
  v3 = PtiCurrent((__int64)a1, a2);
  v5 = *((_QWORD *)a1 + 5);
  v6 = v3;
  v7 = *((_QWORD *)v3 + 59);
  if ( v5 )
  {
    LOBYTE(v4) = 1;
    v15 = HMValidateHandleNoSecure(v5, v4);
    v14 = (struct tagWND *)v15;
    if ( !v15 )
      return;
    if ( v6 != *(struct tagTHREADINFO **)(v15 + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3697LL);
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v14);
    if ( *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18944) )
    {
      if ( v14 != *(struct tagWND **)(v7 + 128) )
      {
        if ( anonymous_namespace_::xxxLocalActivateWindow(
               v14,
               *((unsigned int *)a1 + 8),
               2 * (*((_WORD *)a1 + 12) & 1) + 132)
          && (*(_DWORD *)(W32GetUserSessionState(v21, v20) + 67060) & 1) != 0 )
        {
          zzzActiveCursorTracking(v14);
        }
        goto LABEL_24;
      }
      v22 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 18944);
      anonymous_namespace_::xxxSendNCActivateMessage(v14, v7 == v22);
      if ( v7 == v22 )
      {
        anonymous_namespace_::xxxUpdateTray(v14);
        if ( (*((_DWORD *)a1 + 6) & 1) == 0 )
          goto LABEL_23;
      }
    }
    else
    {
      xxxSetForegroundWindow2(v14, v6, 0LL);
    }
LABEL_24:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v20);
    return;
  }
  xxxCancelTracking();
  UserSessionState = W32GetUserSessionState(v9, v8);
  CCursorClip::ClearClip(*(CCursorClip **)(UserSessionState + 36296));
  zzzLockWindowUpdate2(0LL, 1LL);
  v13 = *((_QWORD *)v6 + 59);
  if ( *((_QWORD *)a1 + 4) && *(_QWORD *)(v13 + 128) && v13 == *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18944) )
  {
    v14 = *(struct tagWND **)(v13 + 128);
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v14);
    if ( *(_QWORD *)(v13 + 120) )
      zzzInputFocusReceivedWindowEvent(7LL);
    anonymous_namespace_::xxxSendNCActivateMessage(v14, 1uLL);
    anonymous_namespace_::xxxUpdateTray(v14);
LABEL_23:
    xxxSetWindowPos(v14, 0LL, 0LL, 0LL, 0, 0, 3);
    goto LABEL_24;
  }
  if ( v13 != *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18944) )
    anonymous_namespace_::RemoveForegroundActivate();
}
