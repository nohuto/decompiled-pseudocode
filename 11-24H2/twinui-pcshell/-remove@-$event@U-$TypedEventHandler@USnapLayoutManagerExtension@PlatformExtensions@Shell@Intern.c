/*
 * XREFs of ?remove@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800BFA54
 * Callers:
 *     ??$?RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventArgs@2UI@WindowsUdk@5@@?$event@U?$TypedEventHandler@USnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@1@AEBUWindowDraggingEventArgs@4UI@WindowsUdk@1@@Z @ 0x18029A15C (--$-RUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@UWindowDraggingEventA.c)
 *     ?WindowDragging@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@7@@Z @ 0x1805BA834 (-WindowDragging@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Interna_ea_1805BA834.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@PEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@PEAU1234@@std@@YAXPEAU?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@USharedDesktopBackgroundVisualLoadedArgs@23456@@Foundation@Windows@winrt@@QEAU1234@@Z @ 0x1800515F4 (--$_Destroy_range@PEAU-$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Win.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180055048 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     WINRT_IMPL_EncodePointer @ 0x1802D2A44 (WINRT_IMPL_EncodePointer.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension,winrt::Windows::Foundation::IInspectable>>::remove(
        RTL_SRWLOCK *a1,
        PVOID a2)
{
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rbp
  PVOID Ptr; // rcx
  unsigned int v7; // r15d
  _DWORD *v8; // rbx
  char v9; // al
  __int64 *v10; // r12
  PVOID *v11; // r13
  _DWORD *v12; // rax
  unsigned int v13; // ebp
  __int64 *v14; // r13
  __int64 v15[9]; // [rsp+20h] [rbp-48h] BYREF
  char v16; // [rsp+70h] [rbp+8h]
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h]

  v4 = 0LL;
  v17 = 0LL;
  v5 = a1 + 2;
  v18 = (__int64)&a1[2];
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
  v16 = 0;
  if ( !v7 )
  {
    if ( WINRT_IMPL_EncodePointer(*((PVOID *)Ptr + 1)) == a2 )
      goto LABEL_15;
    goto LABEL_18;
  }
  v8 = operator new(8LL * v7 + 8);
  *v8 = 1;
  v8[1] = v7;
  v10 = (__int64 *)(v8 + 2);
  v13 = v7;
  v14 = (__int64 *)(v8 + 2);
  do
  {
    *v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v14++);
    --v13;
  }
  while ( v13 );
  std::_Destroy_range<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *,winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,winrt::Windows::Internal::UI::Themes::SharedDesktopBackgroundVisualLoadedArgs> *>(
    v14,
    v14);
  v15[0] = (__int64)v8;
  v11 = (PVOID *)((char *)a1->Ptr + 8);
  v18 = (__int64)a1->Ptr + 8 * *((unsigned int *)a1->Ptr + 1) + 8;
  v5 = a1 + 2;
  if ( v11 == (PVOID *)v18 )
    goto LABEL_18;
  v9 = 0;
  do
  {
    if ( !v9 )
    {
      if ( a2 == WINRT_IMPL_EncodePointer(*v11) )
      {
        v9 = 1;
        v16 = 1;
        goto LABEL_13;
      }
      v9 = v16;
    }
    if ( !v7 )
      break;
    if ( v10 != (__int64 *)v11 )
    {
      if ( *v10 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v10);
      *v10 = (__int64)*v11;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v10);
    }
    ++v10;
    --v7;
    v9 = v16;
LABEL_13:
    ++v11;
  }
  while ( v11 != (PVOID *)v18 );
  if ( v9 )
  {
LABEL_15:
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
    v17 = v4;
    ReleaseSRWLockExclusive_0(a1 + 1);
  }
LABEL_18:
  if ( v8 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(v15);
  ReleaseSRWLockExclusive_0(v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v17);
}
