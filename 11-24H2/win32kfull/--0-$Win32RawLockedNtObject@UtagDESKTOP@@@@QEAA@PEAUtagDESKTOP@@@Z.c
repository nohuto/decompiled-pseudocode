/*
 * XREFs of ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14003E060
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxSendMinRectMessages @ 0x14003CD64 (xxxSendMinRectMessages.c)
 *     xxxCloseClipboard @ 0x14003D880 (xxxCloseClipboard.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14003EBCC (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxSetClipboardViewer @ 0x140103518 (xxxSetClipboardViewer.c)
 *     RemoteRedrawScreen @ 0x1401E03FC (RemoteRedrawScreen.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     xxxHardErrorControl @ 0x140216A70 (xxxHardErrorControl.c)
 *     RemoteDisableScreen @ 0x140224C24 (RemoteDisableScreen.c)
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x140226BB0 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     zzzSetDesktop @ 0x14023D170 (zzzSetDesktop.c)
 *     NtUserGetClipboardData @ 0x1402418A0 (NtUserGetClipboardData.c)
 *     NtUserSwitchDesktop @ 0x140247830 (NtUserSwitchDesktop.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402524E0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x140269B94 (-xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026A570 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1402B30DC (xxxChangeClipboardChain.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(_QWORD *a1, void *a2)
{
  struct tagTHREADINFO *v4; // rax

  v4 = PtiCurrent();
  *a1 = *((_QWORD *)v4 + 48);
  *((_QWORD *)v4 + 48) = a1;
  a1[2] = UserDereferenceObject;
  a1[1] = a2;
  if ( a2 )
    ObfReferenceObject(a2);
  return a1;
}
