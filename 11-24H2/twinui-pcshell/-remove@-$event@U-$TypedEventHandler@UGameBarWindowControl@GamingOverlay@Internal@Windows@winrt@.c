/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1801E4324
 * Callers:
 *     ??$?RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActivationChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@1@AEBUActivationChangedEventArgs@45671@@Z @ 0x1800C6B10 (--$-RUXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UActi.c)
 *     ?remove_ActivationChanged@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1801E8A30 (-remove_ActivationChanged@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shel.c)
 *     ?StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x18020FE70 (-StateChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAA.c)
 *     ??$?RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@?$event@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@1@AEBW4GameBarWindowState@4561@@Z @ 0x180361774 (--$-RUGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@W4GameBarWin.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??4?$com_ptr@U?$event_array@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180055008 (--4-$com_ptr@U-$event_array@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??$make_event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$com_ptr@U?$event_array@U?$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@W4GameBarWindowState@2345@@Foundation@Windows@winrt@@@impl@winrt@@@1@I@Z @ 0x1801E44BC (--$make_event_array@U-$TypedEventHandler@UGameBarWindowControl@GamingOverlay@Internal@Windows@wi.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x18021AEE0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     WINRT_IMPL_EncodePointer @ 0x1802D2A44 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>::remove(
        __int64 a1,
        PVOID a2)
{
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // r12d
  __int64 v8; // rbx
  bool v9; // al
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // r13
  __int64 *v13; // rdi
  __int64 v14; // rax
  char v15; // [rsp+20h] [rbp-30h]
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF

  v4 = 0LL;
  v18 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 16);
  v19 = a1 + 16;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v6 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v7 = *(_DWORD *)(v6 + 4) - 1;
  v8 = 0LL;
  v16 = 0LL;
  v15 = 0;
  if ( !v7 )
  {
    v9 = WINRT_IMPL_EncodePointer(*(PVOID *)(v6 + 8)) == a2;
LABEL_16:
    if ( v9 )
    {
      _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
      v4 = *(_QWORD *)a1;
      *(_QWORD *)a1 = 0LL;
      if ( (__int64 *)a1 != &v16 )
      {
        v14 = v8;
        v8 = 0LL;
        v16 = 0LL;
        *(_QWORD *)a1 = v14;
      }
      v18 = v4;
      ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 8));
    }
    goto LABEL_20;
  }
  v10 = (__int64 *)winrt::impl::make_event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::GamingOverlay::GameBarWindowControl,enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState>>(
                     &v17,
                     v7);
  winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>>::operator=(
    &v16,
    v10);
  if ( v17 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref((__int64 *)&v17);
  v8 = v16;
  v11 = *(_QWORD *)a1;
  v12 = (__int64 *)(*(_QWORD *)a1 + 8LL);
  v17 = (__int64 *)(*(_QWORD *)a1 + 8 * (*(unsigned int *)(*(_QWORD *)a1 + 4LL) + 1LL));
  if ( v12 != v17 )
  {
    v9 = 0;
    v13 = (__int64 *)(v16 + 8);
    while ( 1 )
    {
      if ( v9 )
        goto LABEL_12;
      if ( a2 != *(PVOID *)winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                             v11,
                             &v19,
                             v12) )
        break;
      v9 = 1;
      v15 = 1;
LABEL_14:
      if ( ++v12 == v17 )
      {
LABEL_15:
        v5 = (RTL_SRWLOCK *)(a1 + 16);
        goto LABEL_16;
      }
    }
    v9 = v15;
LABEL_12:
    if ( !v7 )
      goto LABEL_15;
    winrt::Windows::Foundation::IUnknown::operator=(v13++, v12);
    --v7;
    v9 = v15;
    goto LABEL_14;
  }
LABEL_20:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v16);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v18);
}
