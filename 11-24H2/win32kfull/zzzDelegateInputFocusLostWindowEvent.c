/*
 * XREFs of zzzDelegateInputFocusLostWindowEvent @ 0x1402879CC
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140233A48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x14027662C (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     EditionKeyboardInputDelegationChanged @ 0x140277950 (EditionKeyboardInputDelegationChanged.c)
 * Callees:
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140287884 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

void __fastcall zzzDelegateInputFocusLostWindowEvent(struct tagWND *a1, unsigned int a2)
{
  __int64 KeyboardDelegationTargetQ; // rax

  KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
  zzzInputFocusLostWindowEventImpl(a1, KeyboardDelegationTargetQ, a2);
}
