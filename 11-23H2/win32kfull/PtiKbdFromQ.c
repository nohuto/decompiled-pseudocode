/*
 * XREFs of PtiKbdFromQ @ 0x1C003701C
 * Callers:
 *     AllocateHidData @ 0x1C0009244 (AllocateHidData.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00300CC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     HasRawInputForegroundTarget @ 0x1C0036824 (HasRawInputForegroundTarget.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0036950 (EditionHandleAndPostKeyEvent.c)
 *     EditionKeyEventLLHook @ 0x1C003CDC0 (EditionKeyEventLLHook.c)
 *     EditionHandleAltTab @ 0x1C009F640 (EditionHandleAltTab.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C0118E18 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     xxxProcessHidInput @ 0x1C014E260 (xxxProcessHidInput.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C015501C (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01BAF2C (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiKbdFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 104);
}
