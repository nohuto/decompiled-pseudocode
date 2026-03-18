/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C008D070
 * Callers:
 *     EditionNonDwmSpeedHitTest @ 0x1C008CFF0 (EditionNonDwmSpeedHitTest.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C014F474 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     EditionIsPointerInputRedirected @ 0x1C0152D20 (EditionIsPointerInputRedirected.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01C3958 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01C47C0 (xxxRetrievePointerInputMessage.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C55A8 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C56FC (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01C68C8 (xxxDoDeferredPointerActivate.c)
 *     EditionNonDwmTouchHitTest @ 0x1C01E5CB0 (EditionNonDwmTouchHitTest.c)
 *     EditionPointerWindowHitTest @ 0x1C01E5EA0 (EditionPointerWindowHitTest.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01E71B4 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F410C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     GetPTPShellTarget @ 0x1C01F6140 (GetPTPShellTarget.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01FFCC4 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_PWND(_DWORD *a1, __int64 a2)
{
  memset_0(a1, 0, 0x70uLL);
  if ( a2 )
  {
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 2;
  }
  return a1;
}
