/*
 * XREFs of ?remove@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800BFF5C
 * Callers:
 *     ?remove_DismissRequested@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1800BFF00 (-remove_DismissRequested@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Intern.c)
 *     ?remove_PointerEntered@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1800BFF30 (-remove_PointerEntered@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 *     ??$?RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x1800C0110 (--$-RUSnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$event@USn.c)
 *     ?remove_InstanceReady@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1802256D0 (-remove_InstanceReady@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 *     ?remove_InstanceShutdown@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1802C1EB0 (-remove_InstanceShutdown@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Intern.c)
 *     ?remove_PointerExited@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapFlyoutInstance@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1805B4BD0 (-remove_PointerExited@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$_Destroy_range@PEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@PEAU1234@@std@@YAXPEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@QEAU1234@@Z @ 0x1800515F4 (--$_Destroy_range@PEAU-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Win.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     WINRT_IMPL_EncodePointer @ 0x1802D2A44 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::remove(
        RTL_SRWLOCK *a1,
        PVOID a2)
{
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  PVOID Ptr; // rcx
  unsigned int v7; // r15d
  _DWORD *v8; // rbx
  char v9; // r13
  __int64 *v10; // rsi
  __int64 *v11; // r12
  _DWORD *v12; // rax
  __int64 *v13; // r12
  unsigned int v14; // esi
  __int64 v15[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h]

  v4 = 0LL;
  v16 = 0LL;
  v5 = a1 + 2;
  v17 = (__int64)&a1[2];
  _Platform_AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    ReleaseSRWLockExclusive_0(v5);
    return;
  }
  v7 = *((_DWORD *)Ptr + 1) - 1;
  v8 = 0LL;
  v15[0] = 0LL;
  v9 = 0;
  if ( v7 )
  {
    v8 = operator new(8LL * v7 + 8);
    *v8 = 1;
    v8[1] = v7;
    v13 = (__int64 *)(v8 + 2);
    v14 = v7;
    do
    {
      *v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v13++);
      --v14;
    }
    while ( v14 );
    std::_Destroy_range<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *>(
      v13,
      v13);
    v15[0] = (__int64)v8;
    v11 = (__int64 *)((char *)a1->Ptr + 8);
    v17 = (__int64)a1->Ptr + 8 * *((unsigned int *)a1->Ptr + 1) + 8;
    v5 = a1 + 2;
    if ( v11 == (__int64 *)v17 )
      goto LABEL_13;
    v10 = (__int64 *)(v8 + 2);
    do
    {
      if ( v9 || a2 != WINRT_IMPL_EncodePointer((PVOID)*v11) )
      {
        if ( !v7 )
          break;
        winrt::Windows::Foundation::IUnknown::operator=(v10++, v11);
        --v7;
      }
      else
      {
        v9 = 1;
      }
      ++v11;
    }
    while ( v11 != (__int64 *)v17 );
    v5 = a1 + 2;
    if ( !v9 )
      goto LABEL_13;
    goto LABEL_10;
  }
  if ( WINRT_IMPL_EncodePointer(*((PVOID *)Ptr + 1)) == a2 )
  {
LABEL_10:
    _Platform_AcquireSRWLockExclusive(a1 + 1);
    v4 = (__int64)a1->Ptr;
    a1->Ptr = 0LL;
    if ( a1 != (RTL_SRWLOCK *)v15 )
    {
      v12 = v8;
      v8 = 0LL;
      v15[0] = 0LL;
      a1->Ptr = v12;
    }
    v16 = v4;
    ReleaseSRWLockExclusive_0(a1 + 1);
  }
LABEL_13:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(v15);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v16);
}
