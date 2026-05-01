/*
 * XREFs of ?SnapWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUWindowId@UI@Windows@winrt@@@7@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805BA52C
 * Callers:
 *     ?SnapWindows@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAHIPEAUstruct_Windows_UI_WindowId@23@IPEAURect@Foundation@Windows@3@@Z @ 0x1805BA4C0 (-SnapWindows@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x18023C320 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     ??$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAPEAU?$pair@_KURect@Foundation@Windows@winrt@@@1@QEAU21@AEB_KAEBURect@Foundation@Windows@winrt@@@Z @ 0x1805B6DD4 (--$_Emplace_reallocate@AEB_KAEBURect@Foundation@Windows@winrt@@@-$vector@U-$pair@_KURect@Foundat.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@_KURect@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x1805B7678 (--$_Reallocate@$0A@@-$vector@U-$pair@_KURect@Foundation@Windows@winrt@@@std@@V-$allocator@U-$pai.c)
 *     winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___ @ 0x1805B7B04 (winrt--impl--create_and_initialize_winrt--Windows--Internal--Shell--SnapComponent--implementatio.c)
 *     _lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_ @ 0x1805B88FC (_lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_--__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_.c)
 *     ?IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA_NAEBURect@Foundation@67@@Z @ 0x1805B9350 (-IsWithinWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@w.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindows(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        __int64 a2,
        __int64 a3)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v5; // r8
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx
  const struct winrt::Windows::Foundation::Rect *v11; // r15
  _QWORD *v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF
  wil::details::in1diag3 *v22; // [rsp+B0h] [rbp+50h]

  v5 = this;
  v6 = *(unsigned int *)(a2 + 8);
  if ( *(_DWORD *)(a3 + 8) != (_DWORD)v6 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10E,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
      (const char *)0x80070057LL,
      v15);
  v15 = 0LL;
  v7 = 0LL;
  v16 = 0LL;
  v21 = v6;
  if ( (_DWORD)v6 )
  {
    std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Reallocate<0>(
      (__int64)&v15,
      (unsigned __int64 *)&v21);
    v7 = v16;
    v5 = this;
  }
  v8 = 0LL;
  if ( (_DWORD)v6 )
  {
    v9 = *(_QWORD *)a3;
    v21 = *(_QWORD *)a3;
    v10 = *((_QWORD *)&v15 + 1);
    do
    {
      v11 = (const struct winrt::Windows::Foundation::Rect *)(v9 + 16LL * (unsigned int)v8);
      v22 = retaddr;
      if ( !winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::IsWithinWorkArea(
              v5,
              v11) )
        wil::details::in1diag3::Throw_Hr(
          v22,
          (void *)0x117,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\desktopsnaplayoutmanager.cpp",
          (const char *)0x80070057LL,
          v15);
      v12 = (_QWORD *)(*(_QWORD *)a2 + 8 * v8);
      if ( v10 == v7 )
      {
        std::vector<std::pair<unsigned __int64,winrt::Windows::Foundation::Rect>>::_Emplace_reallocate<unsigned __int64 const &,winrt::Windows::Foundation::Rect const &>(
          (const void **)&v15,
          (_BYTE *)v10,
          v12,
          v11);
        v7 = v16;
        v10 = *((_QWORD *)&v15 + 1);
      }
      else
      {
        *(_QWORD *)v10 = *v12;
        *(_OWORD *)(v10 + 8) = *(_OWORD *)v11;
        v10 += 24LL;
        *((_QWORD *)&v15 + 1) = v10;
      }
      v8 = (unsigned int)(v8 + 1);
      v5 = this;
      v9 = v21;
    }
    while ( (unsigned int)v8 < (unsigned int)v6 );
  }
  else
  {
    v10 = *((_QWORD *)&v15 + 1);
  }
  v16 = 0LL;
  v13 = v15;
  v15 = 0uLL;
  v17[0] = v13;
  v17[1] = v10;
  v17[2] = v7;
  v18 = *((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  v14 = winrt::impl::create_and_initialize_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_____lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b___(v17);
  v21 = (unsigned __int64)(v14 + 2) & -(__int64)(v14 != 0LL);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
    (__int64 *)this + 11,
    &v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_::__lambda_2c25b7b9a89fbc49c9e3f36f5a02f98b_((__int64)v17);
}
