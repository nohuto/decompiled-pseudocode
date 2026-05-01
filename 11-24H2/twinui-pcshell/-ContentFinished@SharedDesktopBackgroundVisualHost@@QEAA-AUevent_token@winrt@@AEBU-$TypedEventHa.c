/*
 * XREFs of ?ContentFinished@SharedDesktopBackgroundVisualHost@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@3@@Z @ 0x180609140
 * Callers:
 *     ?add_ContentFinished@?$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x18060E2E0 (-add_ContentFinished@-$produce@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisu.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8b5f1623488306f7e465df1f94f78972___ @ 0x180607A24 (Windows--Internal--ComTaskPool--QueueTask__lambda_8b5f1623488306f7e465df1f94f78972___.c)
 *     ??$get_weak@USharedDesktopBackgroundVisualHost@@@?$root_implements@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@34567@@impl@winrt@@IEAA?AU?$weak_ref@USharedDesktopBackgroundVisualHost@@@2@XZ @ 0x180607DEC (--$get_weak@USharedDesktopBackgroundVisualHost@@@-$root_implements@USharedDesktopBackgroundVisua.c)
 *     _lambda_8b5f1623488306f7e465df1f94f78972_::_lambda_8b5f1623488306f7e465df1f94f78972_ @ 0x180608504 (_lambda_8b5f1623488306f7e465df1f94f78972_--_lambda_8b5f1623488306f7e465df1f94f78972_.c)
 *     _lambda_8b5f1623488306f7e465df1f94f78972_::__lambda_8b5f1623488306f7e465df1f94f78972_ @ 0x180608AA4 (_lambda_8b5f1623488306f7e465df1f94f78972_--__lambda_8b5f1623488306f7e465df1f94f78972_.c)
 *     ?add@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualFinishedArgs@23456@@Foundation@Windows@2@@Z @ 0x18060E198 (-add@-$event@U-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@win.c)
 */

__int64 __fastcall SharedDesktopBackgroundVisualHost::ContentFinished(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v13; // [rsp+80h] [rbp+30h] BYREF
  char v14; // [rsp+88h] [rbp+38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+98h] [rbp+48h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v15, (RTL_SRWLOCK *)(a1 + 216));
  v6 = *(_BYTE *)(a1 + 226);
  v14 = *(_BYTE *)(a1 + 224);
  v13 = *(_BYTE *)(a1 + 227);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
  if ( v6 )
  {
    winrt::impl::root_implements<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::get_weak<SharedDesktopBackgroundVisualHost>(
      (volatile signed __int64 *)a1,
      &v15);
    v7 = lambda_8b5f1623488306f7e465df1f94f78972_::_lambda_8b5f1623488306f7e465df1f94f78972_(
           (__int64)v11,
           a3,
           &v14,
           &v13,
           (__int64 *)&v15);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_8b5f1623488306f7e465df1f94f78972___(v8, v7);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x120,
        (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
        (const char *)(unsigned int)v9);
    lambda_8b5f1623488306f7e465df1f94f78972_::__lambda_8b5f1623488306f7e465df1f94f78972_(v11);
    if ( v15 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v15);
  }
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualFinishedArgs>>::add(
    a1 + 80,
    a2,
    a3);
  return a2;
}
