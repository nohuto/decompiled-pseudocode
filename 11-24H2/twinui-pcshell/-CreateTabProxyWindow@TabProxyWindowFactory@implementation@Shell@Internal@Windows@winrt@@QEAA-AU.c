/*
 * XREFs of ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x1800C0F18
 * Callers:
 *     ?AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabView@3UI@456@@Z @ 0x1800C0E64 (-AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabVi.c)
 *     ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x1805800A0 (-CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f00520507454a36d8de4c18dfc66140a___ @ 0x1800C1088 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f00520507454a36d8de4c18dfc66140a.c)
 *     ??0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEBUITileStore@Tiles@345@AEBUWindowTabDataModel@2UI@345@AEBUWindowTabView@2UI@345@_K@Z @ 0x1800C1184 (--0TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAA@PEAUIWICImagingFactory@@PEAU.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindow(
        __int64 a1,
        __int64 **a2,
        struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a3,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabView *a4,
        unsigned __int64 a5)
{
  DWORD v8; // eax
  const char *v9; // r9
  struct ITaskbarList4 *v10; // rdi
  struct IWICImagingFactory *v11; // rsi
  __int64 *v12; // r14
  __int64 v13; // rax
  DWORD CurrentThreadId; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // rcx
  __int64 *v19; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 *v22; // [rsp+A0h] [rbp+40h] BYREF
  struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *v23; // [rsp+B0h] [rbp+50h]

  v23 = a3;
  v8 = WaitForSingleObjectEx(*(HANDLE *)(a1 + 32), 0xFFFFFFFF, 0);
  if ( v8 != 258 && v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAE4,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v9);
  v10 = *(struct ITaskbarList4 **)(a1 + 64);
  v11 = *(struct IWICImagingFactory **)(a1 + 56);
  v12 = (__int64 *)operator new(0xC0uLL);
  v19 = v12;
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow(
    (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)v12,
    v11,
    v10,
    (const struct winrt::Windows::Internal::Tiles::ITileStore *)(a1 + 72),
    v23,
    a4,
    a5);
  *v12 = (__int64)&winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,std::tuple<Windows::Internal::Shell::ITabProxyWindowInternal>>'};
  v12[1] = (__int64)&winrt::Windows::Internal::Shell::implementation::TabProxyWindow::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>'};
  v12[3] = (__int64)&winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`vftable';
  v22 = v12;
  v13 = *(_QWORD *)(a1 + 48);
  v19 = (__int64 *)&v22;
  v20[0] = v13;
  v20[1] = &v19;
  CurrentThreadId = GetCurrentThreadId();
  v16 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f00520507454a36d8de4c18dfc66140a___(
          v15,
          CurrentThreadId,
          v20);
  if ( v16 >= 0 )
  {
    v18 = *(_QWORD *)(a1 + 80);
    if ( v18 )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 48LL))(v18, v22);
    *a2 = v22;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v16);
    *a2 = 0LL;
    if ( v22 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v22);
  }
  return a2;
}
