/*
 * XREFs of ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090
 * Callers:
 *     xxxSendMinRectMessages @ 0x14003CD64 (xxxSendMinRectMessages.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x140063D90 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxGetInputEvent @ 0x140064510 (xxxGetInputEvent.c)
 *     xxxCallMsgFilter @ 0x1400655D0 (xxxCallMsgFilter.c)
 *     xxxDesktopThreadWaiter @ 0x140066AC4 (xxxDesktopThreadWaiter.c)
 *     xxxRedrawTitle @ 0x1400677A8 (xxxRedrawTitle.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x1400690E0 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     xxxCallCtfHook @ 0x14007FC80 (xxxCallCtfHook.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1400A98DC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     xxxIsDragging @ 0x140109A1C (xxxIsDragging.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140183378 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1401BDBD8 (-xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z.c)
 *     EditionNotifyShellLanguageHook @ 0x140202290 (EditionNotifyShellLanguageHook.c)
 *     xxxRedrawFrameAndHook @ 0x140217A58 (xxxRedrawFrameAndHook.c)
 *     EditionCallAccessibilityHook @ 0x140218E90 (EditionCallAccessibilityHook.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x14021E1C0 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x14024FDE0 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x140255FF0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 * Callees:
 *     PhkNextValid @ 0x140080FC4 (PhkNextValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140082A00 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     xxxPointerCallHook @ 0x1400A7484 (xxxPointerCallHook.c)
 *     IsPointerInputClientMessage @ 0x140148320 (IsPointerInputClientMessage.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxCallHook(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v7; // r15d
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbp
  struct _ERESOURCE *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 Valid; // rcx

  v4 = a4;
  v7 = a1;
  v8 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42376);
  if ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + 19816)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL() || ExIsResourceAcquiredExclusiveLite(v8) != 1 && !ExIsResourceAcquiredSharedLite(v8)) )
  {
    __int2c();
  }
  if ( (_DWORD)v4 == 6 )
    goto LABEL_4;
  if ( (_DWORD)v4 != 4 )
  {
    if ( (_DWORD)v4 == 12 )
    {
      v11 = *(unsigned int *)(a3 + 24);
      goto LABEL_5;
    }
    if ( (_DWORD)v4 != 3 && (_DWORD)v4 != -1 )
    {
      v11 = 0LL;
LABEL_7:
      if ( !(unsigned int)IsPointerInputClientMessage(v11) )
        goto LABEL_9;
      goto LABEL_8;
    }
LABEL_4:
    v11 = *(unsigned int *)(a3 + 8);
LABEL_5:
    v12 = *(_QWORD *)(a3 + 16);
    goto LABEL_6;
  }
  v11 = *(unsigned int *)(a3 + 16);
  v12 = *(_QWORD *)(a3 + 8);
LABEL_6:
  if ( (unsigned int)(v11 - 577) > 3 )
    goto LABEL_7;
LABEL_8:
  if ( (_DWORD)v11 != 595 )
    return xxxPointerCallHook(v7, a2, a3, (unsigned int)v4);
LABEL_9:
  if ( (_DWORD)v11 == 528 && (_WORD)v12 == 582 )
    return xxxPointerCallHook(v7, a2, a3, (unsigned int)v4);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v11, v12);
  if ( CurrentThreadNonPaged )
    v16 = *CurrentThreadNonPaged;
  else
    v16 = 0LL;
  v17 = *(struct _ERESOURCE **)(W32GetUserSessionState(v15, v14) + 42376);
  if ( !*(_DWORD *)(W32GetUserSessionState(v19, v18) + 19816)
    && !IS_USERCRIT_OWNED_EXCLUSIVE()
    && (!IS_USERCRIT_OWNED_AT_ALL()
     || ExIsResourceAcquiredExclusiveLite(v17) != 1 && !ExIsResourceAcquiredSharedLite(v17)) )
  {
    __int2c();
  }
  Valid = *(_QWORD *)(v16 + 8 * v4 + 968);
  if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(v16 + 504) + 8 * v4 + 48)) != 0)
    && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
  {
    Valid = PhkNextValid(Valid, v20);
  }
  return xxxCallHook2(Valid, v7, a2, a3, 1);
}
