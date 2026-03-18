/*
 * XREFs of PtiKbdFromQ @ 0x1401534FC
 * Callers:
 *     xxxProcessHidInput @ 0x14004A660 (xxxProcessHidInput.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x14008FB9C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     ?CheckQuitMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@H@Z @ 0x140153410 (-CheckQuitMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@H@Z.c)
 *     HasRawInputForegroundTarget @ 0x14017206C (HasRawInputForegroundTarget.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1401721A8 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     _PostThreadMessageEx @ 0x1401A04CC (_PostThreadMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1402481C0 (EditionHandleAndPostKeyEvent.c)
 *     EditionKeyEventLLHook @ 0x1402487E0 (EditionKeyEventLLHook.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1402753D0 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
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
