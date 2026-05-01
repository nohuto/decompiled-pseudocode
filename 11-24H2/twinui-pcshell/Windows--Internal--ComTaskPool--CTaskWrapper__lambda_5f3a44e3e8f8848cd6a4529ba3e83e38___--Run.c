/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f3a44e3e8f8848cd6a4529ba3e83e38___::Run @ 0x180480B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800567B0 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?get@?$weak_ref@UTabTipAdapter@KeyboardHosting@@@winrt@@QEBA@XZ @ 0x1804832F4 (-get@-$weak_ref@UTabTipAdapter@KeyboardHosting@@@winrt@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f3a44e3e8f8848cd6a4529ba3e83e38___::Run(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  int refreshed; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  KeyboardHosting::TabTipAdapter *v5; // [rsp+30h] [rbp+8h] BYREF

  winrt::weak_ref<KeyboardHosting::TabTipAdapter>::get(a1 + 16, &v5);
  if ( v5 )
  {
    refreshed = KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(v5, v1, v2);
    if ( refreshed < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x436,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)refreshed);
  }
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v5);
}
