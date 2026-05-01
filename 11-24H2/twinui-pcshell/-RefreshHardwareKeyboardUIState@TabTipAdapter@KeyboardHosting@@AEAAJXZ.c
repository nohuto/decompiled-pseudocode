/*
 * XREFs of ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800567B0
 * Callers:
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x180254EE0 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f3a44e3e8f8848cd6a4529ba3e83e38___::Run @ 0x180480B90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f3a44e3e8f8848cd6a4529ba3e83e38___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18004E988 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18005508C (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180056314 (-InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18008162C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        __int64 a3)
{
  int IsReady; // edi
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 451) )
  {
    IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(this);
    if ( IsReady < 0 )
    {
      v5 = 1145LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)IsReady);
      return (unsigned int)IsReady;
    }
    IsReady = KeyboardHosting::TabTipAdapter::InvokeEnsureInputAppIsActivated(this);
    if ( IsReady < 0 )
    {
      v5 = 1146LL;
      goto LABEL_4;
    }
    LOBYTE(v7) = 1;
    IsReady = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, v7, v8);
    if ( IsReady < 0 )
    {
      v5 = 1148LL;
      goto LABEL_4;
    }
    v9 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
    if ( v9 < 0 )
    {
      v10 = 1155LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  else
  {
    v9 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 0LL, a3);
    if ( v9 < 0 )
    {
      v10 = 1160LL;
      goto LABEL_11;
    }
  }
  return 0LL;
}
