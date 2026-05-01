/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D770
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_InitCoro$2 @ 0x18021D64C (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Ini.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x180058D08 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180059158 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x18005B5C8 (-LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAU.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x180063D78 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800683C0 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 *     ?OpenReadAsync@?$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006E624 (-OpenReadAsync@-$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStre.c)
 *     ??$capture@UIStream@@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA?AU?$com_ptr@UIStream@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z$$QEAPEAU2@@Z @ 0x18006FC6C (--$capture@UIStream@@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA-AU-$com_ptr@UIStream.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1800727C4 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-De.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5868 (-release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??$await_transform@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@AEBW4DragDropSimulatorDropPoint@78934@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperation@_N@Foundation@Windows@2@@Z @ 0x1802E74FC (--$await_transform@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@-$promise_base@_ea_1802E74FC.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVCLauncherTipContextMenu@@UtagRECT@@@experimental@std@@U?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1802E7674 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IVectorView.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1802E8288 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$.c)
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x1802E82E6 (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 *     ?GetThumbnailAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUBitmapSize@Imaging@Graphics@Windows@3@_N@Z @ 0x1802E83D4 (-GetThumbnailAsync@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@I.c)
 *     ?GetThumbnailSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEBA?AUBitmapSize@Imaging@Graphics@56@_N@Z @ 0x1802E843E (-GetThumbnailSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEBA-AUBitmapSize@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18045AC34 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1805E15F8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     _lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator() @ 0x18063AA90 (_lambda_bb8c74dc12fedcc2a4c0331452efef3b_--operator().c)
 *     ?IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapSize@Imaging@Graphics@56@V?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18063B960 (-IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapS.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18063C9FC (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18063C9FC.c)
 */

// Hidden C++ exception states: #wind=15 #try_helpers=2
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync__ResumeCoro_1(
        __int64 a1)
{
  _WORD *v2; // r12
  __int64 v3; // rdi
  __int64 ThumbnailAsync; // rax
  char v5; // bl
  __int64 v6; // rcx
  _QWORD *Async; // rax
  _QWORD *v8; // rbx
  int ImageWithWIC; // eax
  __int64 *v10; // rax
  __int64 v11; // rcx
  HBITMAP *v12; // r8
  int v13; // eax
  HRESULT v14; // eax
  __int64 v15; // rax
  struct IWICBitmapDecoder *v16; // [rsp+20h] [rbp-D8h]
  int v17; // [rsp+20h] [rbp-D8h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_24;
    case 2:
      *(_BYTE *)(a1 + 16) = 0;
      std::chrono::steady_clock::now((_QWORD *)(a1 + 24));
      v3 = *(_QWORD *)(a1 + 321);
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetThumbnailSize(v3, a1 + 32, 0LL);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 24);
      *(_OWORD *)(a1 + 56) = *(_OWORD *)(a1 + 40);
      *(_BYTE *)(a1 + 72) = 1;
      *(_QWORD *)(a1 + 272) = a1 - 112;
      ThumbnailAsync = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::GetThumbnailAsync(
                         v3 + 48,
                         a1 + 80,
                         a1 + 32,
                         0LL);
      *(_QWORD *)(a1 + 288) = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<bool>>(
                                a1 - 112,
                                a1 + 88,
                                ThumbnailAsync);
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_5;
      *v2 = 4;
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>();
      return;
    case 4:
LABEL_5:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::await_resume(
        *(_QWORD *)(a1 + 288),
        a1 + 120);
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 88);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 80));
      *(_QWORD *)(a1 + 128) = 0LL;
      v5 = winrt::Windows::Foundation::operator==(
             (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 120),
             (_QWORD *)(a1 + 128));
      winrt::Windows::Foundation::IUnknown::release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 128));
      if ( v5 )
      {
        *(_BYTE *)(a1 - 16) = 0;
        winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)(a1 + 120));
        *(_BYTE *)(a1 + 72) = 0;
        lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1 + 56);
        v6 = *(_QWORD *)(a1 + 272);
      }
      else
      {
        Async = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
                  (__int64 *)(a1 + 120),
                  (_QWORD *)(a1 + 136));
        *(_QWORD *)(a1 + 304) = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<bool>>(
                                  a1 - 112,
                                  a1 + 144,
                                  Async);
        if ( !winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        {
          *v2 = 6;
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>();
          return;
        }
LABEL_10:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_resume(
          *(_QWORD *)(a1 + 304),
          a1 + 176);
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 144);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 136));
        *(_QWORD *)(a1 + 184) = *(_QWORD *)(a1 + 176);
        v8 = (_QWORD *)(a1 + 192);
        winrt::capture<IStream,long (&)(IUnknown *,_GUID const &,void * *),IUnknown *>(
          (_QWORD *)(a1 + 192),
          CreateStreamOverRandomAccessStream,
          (_QWORD *)(a1 + 184));
        *(_QWORD *)(a1 + 200) = 0LL;
        *(_QWORD *)(a1 + 208) = 0LL;
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(a1 + 208));
        ImageWithWIC = LoadImageWithWIC(
                         *(struct IWICImagingFactory **)(*(_QWORD *)(a1 + 321) + 104LL),
                         *(_QWORD *)(a1 + 192),
                         0,
                         (struct IWICBitmapSource **)(a1 + 208),
                         v16);
        if ( ImageWithWIC < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x32E,
            (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
            (const char *)(unsigned int)ImageWithWIC,
            v17);
        v10 = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
                (__int64 *)(a1 + 216),
                (__int64 *)(a1 + 208));
        if ( (unsigned __int8)winrt::Windows::Internal::Shell::implementation::TabProxyWindow::IsThumbnailValidSize(
                                v11,
                                *(_QWORD *)(a1 + 32),
                                v10) )
        {
          v12 = (HBITMAP *)(wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>(
                              a1 + 224,
                              a1 + 200)
                          + 8);
          v13 = ConvertWICBitmapToHBITMAP(
                  *(struct IWICImagingFactory **)(*(_QWORD *)(a1 + 321) + 104LL),
                  *(struct IWICBitmapSource **)(a1 + 208),
                  v12);
          if ( v13 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x335,
              (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              (const char *)(unsigned int)v13,
              v17);
          wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>>(a1 + 224);
          v14 = DwmSetIconicThumbnail(*(HWND *)(*(_QWORD *)(a1 + 321) + 32LL), *(HBITMAP *)(a1 + 200), 0);
          if ( v14 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x336,
              (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              (const char *)(unsigned int)v14,
              v17);
          *(_BYTE *)(a1 + 16) = 1;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 208));
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(a1 + 200);
          if ( *v8 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 192));
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 176));
          winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)(a1 + 120));
          *(_BYTE *)(a1 + 72) = 0;
          lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1 + 56);
          *(_BYTE *)(a1 - 16) = *(_BYTE *)(a1 + 16);
          v6 = *(_QWORD *)(a1 + 272);
        }
        else
        {
          *(_BYTE *)(a1 - 16) = 0;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 208));
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(a1 + 200);
          if ( *v8 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 192));
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 176));
          winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)(a1 + 120));
          *(_BYTE *)(a1 + 72) = 0;
          lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1 + 56);
          v6 = *(_QWORD *)(a1 + 272);
        }
      }
      v15 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,CLauncherTipContextMenu *,tagRECT>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::MenuItem>>,void>::final_suspend(
              v6,
              a1 + 256);
      *(_QWORD *)(a1 + 248) = v15;
      *v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(v15) )
      {
LABEL_24:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 112);
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112));
      }
      return;
    case 5:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 88);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 80));
      *(_BYTE *)(a1 + 72) = 0;
      lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1 + 56);
      goto LABEL_24;
    case 6:
      goto LABEL_10;
    case 7:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 144);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 136));
      winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)(a1 + 120));
      *(_BYTE *)(a1 + 72) = 0;
      lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1 + 56);
      goto LABEL_24;
    default:
      __debugbreak();
      return;
  }
}
