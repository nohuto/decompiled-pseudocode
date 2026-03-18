/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C0031FE8
 * Callers:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0031520 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzReattachThreads @ 0x1C0038F98 (zzzReattachThreads.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00A5054 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionKeyboardInputDelegationChanged @ 0x1C0139750 (EditionKeyboardInputDelegationChanged.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B5470 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A6A8 (-zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

__int64 __fastcall zzzInputFocusReceivedWindowEvent(unsigned int a1)
{
  return zzzInputFocusReceivedWindowEventImpl(*(_QWORD *)(gpqForeground + 120LL), a1);
}
