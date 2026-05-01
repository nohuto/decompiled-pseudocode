/*
 * XREFs of ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUhstring@1@@Z @ 0x1800BFC44
 * Callers:
 *     ?ReportReactivationCompleteWithSessionId@SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXUhstring@6@@Z @ 0x180054DF0 (-ReportReactivationCompleteWithSessionId@SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??$invoke@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@USearchAppHost@implementation@Shell@UI@WindowsUdk@4@Uhstring@4@@impl@winrt@@YA_NAEBU?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@1@AEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUhstring@1@@Z @ 0x1800BFD10 (--$invoke@U-$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18021AEE0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 *     ?remove@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@USnapLayoutEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1803D5128 (-remove@-$event@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@US.c)
 */

void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>::operator()<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::hstring>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rsi
  volatile signed __int32 *v9; // rbp
  volatile signed __int32 *i; // rdi
  __int64 v11; // rcx
  _QWORD *token; // rax
  volatile signed __int32 *v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v13 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v7 = *(volatile signed __int32 **)a1;
  v8 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v13 = *(volatile signed __int32 **)a1;
    _InterlockedIncrement(v7);
    v8 = v7;
    v6 = (__int64)v13;
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
  if ( v8 )
  {
    v9 = &v8[2 * *((unsigned int *)v8 + 1) + 2];
    for ( i = v8 + 2; i != v9; i += 2 )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>,winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::hstring>(
                               i,
                               a2,
                               a3) )
      {
        token = (_QWORD *)winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                            v11,
                            &v14,
                            i);
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::SnapLayoutEventArgs>>::remove(
          a1,
          *token);
      }
    }
  }
  if ( v6 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref((__int64 *)&v13);
}
