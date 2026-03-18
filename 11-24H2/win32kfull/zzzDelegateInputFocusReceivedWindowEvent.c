/*
 * XREFs of zzzDelegateInputFocusReceivedWindowEvent @ 0x140287A08
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x14027662C (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     EditionKeyboardInputDelegationChanged @ 0x140277950 (EditionKeyboardInputDelegationChanged.c)
 * Callees:
 *     ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140287920 (-zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

void __fastcall zzzDelegateInputFocusReceivedWindowEvent(unsigned int a1)
{
  __int64 KeyboardDelegationTargetQ; // rax
  struct tagWND *v3; // rcx

  KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
  if ( KeyboardDelegationTargetQ )
  {
    v3 = *(struct tagWND **)(KeyboardDelegationTargetQ + 120);
    if ( v3 )
      zzzInputFocusReceivedWindowEventImpl(v3, a1);
  }
}
