/*
 * XREFs of ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x180254EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800567B0 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800D3330 (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5f3a44e3e8f8848cd6a4529ba3e83e38___ @ 0x18047ACBC (Windows--Internal--ComTaskPool--QueueTask__lambda_5f3a44e3e8f8848cd6a4529ba3e83e38___.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@details@wil@@QEAA_NXZ @ 0x18048320C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@detai.c)
 *     ?get_weak@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@QEAA?AU?$weak_ref@UTabTipAdapter@KeyboardHosting@@@2@XZ @ 0x1804834FC (-get_weak@-$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardHardwareKeyboardUIEnabled(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int refreshed; // eax
  unsigned int v15; // ebx
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  char v19; // [rsp+50h] [rbp+20h] BYREF
  int v20; // [rsp+58h] [rbp+28h] BYREF

  v3 = *(_QWORD *)a3;
  v19 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v19);
  if ( v6 < 0 )
  {
    v7 = 1064LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((_QWORD *)this + 16);
  v20 = 0;
  LOBYTE(v5) = v19;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v9 + 136LL))(v9, v5, &v20);
  if ( v6 < 0 )
  {
    v7 = 1066LL;
    goto LABEL_3;
  }
  *((_BYTE *)this + 451) = v19 != 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler>::GetImpl'::`2'::impl) )
  {
    winrt::implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::get_weak(
      this,
      &v16);
    v13 = v16;
    v17 = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    Windows::Internal::ComTaskPool::QueueTask__lambda_5f3a44e3e8f8848cd6a4529ba3e83e38___(
      v13,
      v12,
      *((unsigned int *)this + 144),
      &v17);
    lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v17);
    if ( v16 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v16);
    return 0LL;
  }
  refreshed = KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(this, v10, v11);
  v15 = refreshed;
  if ( refreshed >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43E,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)refreshed);
  return v15;
}
