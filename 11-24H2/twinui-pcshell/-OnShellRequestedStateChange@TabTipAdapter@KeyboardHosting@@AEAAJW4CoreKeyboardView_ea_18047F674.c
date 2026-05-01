/*
 * XREFs of ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18047F674
 * Callers:
 *     ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x1800E18B8 (-ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2.c)
 *     ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x18047DF90 (-OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18047EDA8 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x18047F3FC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReason@1@@Z @ 0x180480D20 (-ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReaso.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // r10
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  v4 = KeyboardHosting::ShellRequestedStateChangeReasonToString(a4, a2);
  return KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(v7, v5, v6, v4, v9);
}
