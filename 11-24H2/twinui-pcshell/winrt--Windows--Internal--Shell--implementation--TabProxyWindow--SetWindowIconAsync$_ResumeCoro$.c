/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x18026E2D0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_InitCoro$2 @ 0x18026E278 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18004C624 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800C6394 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x180134FE4 (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18015E808 (--1-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@YAH0@ZU-$integra.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1801CAAF0 (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIco.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1801DDBF4 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$.c)
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_::operator() @ 0x1801EA9C4 (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_--operator().c)
 *     ??$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@winrt@@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@0@AEBU1230@0@Z @ 0x1801F43AC (--$when_any@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Fou.c)
 *     ?SetEvent_scope_exit@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?SetEvent@details@wil@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802135B4 (-SetEvent_scope_exit@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperationWithProgress@II@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18023C80C (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperationWithProgress@II@Foundation@Win.c)
 *     ??$capture@UIStream@@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA?AU?$com_ptr@UIStream@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z$$QEAPEAU2@@Z @ 0x180268614 (--$capture@UIStream@@A6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA-AU-$com_ptr@UIStream.c)
 *     ?InputCompanion@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802A8060 (-InputCompanion@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriScheme.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032D080 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D430 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180335898 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803359BC (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180469F58 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ??$WindowTabHostIconTimeout@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z @ 0x180580C4C (--$WindowTabHostIconTimeout@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180580D88 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabPr_ea_180580D88.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180580D94 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabPr_ea_180580D94.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x180582DE8 (-await_resume@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=21 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_1(
        char *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  __int64 *v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  bool v7; // r14
  __int64 v8; // r8
  const char *v9; // r9
  HMONITOR v10; // rax
  void *v11; // rdx
  wil::details *v12; // rcx
  int SystemMetricsForDpi; // ebx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // rdx
  wil::details *v20; // rcx
  void *v21; // rdx
  wil::details *v22; // rcx
  _QWORD *InstanceAsync; // rax
  void *v24; // rdx
  wil::details *v25; // rcx
  struct IStream **v26; // r14
  __int64 v27; // r13
  char v28; // r9
  int IconFromStreamWithWIC; // ebx
  char v30; // r9
  int v31; // ebx
  void *v32; // rdx
  wil::details *v33; // rcx

  try
  {
    if ( (unsigned __int16)(*((_WORD *)a1 + 4) + 1) > 0xCu )
    {
LABEL_55:
      __debugbreak();
    }
    else
    {
      switch ( *((_WORD *)a1 + 4) )
      {
        case 0xFFFF:
        case 3:
          goto LABEL_53;
        case 0:
        case 1:
          goto LABEL_55;
        case 2:
          winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
            *(_QWORD *)(a1 + 353),
            (_QWORD *)a1 + 2);
          a1[24] = 0;
          *((_WORD *)a1 + 4) = 4;
          `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))a1, v3);
          return;
        case 4:
          v5 = (__int64 *)(*((_QWORD *)a1 + 2) + 160LL);
          *((_QWORD *)a1 + 42) = v5;
          v6 = *v5;
          *((_QWORD *)a1 + 4) = 0LL;
          *((_QWORD *)a1 + 5) = 0LL;
          *((_QWORD *)a1 + 6) = 20000000LL;
          *((_QWORD *)a1 + 7) = v6;
          *((_DWORD *)a1 + 16) = 0;
          *((_QWORD *)a1 + 9) = 0LL;
          *((_DWORD *)a1 + 20) = 0;
          if ( winrt::impl::signal_awaiter::await_ready((winrt::impl::signal_awaiter *)(a1 + 32)) )
            goto LABEL_11;
          *((_WORD *)a1 + 4) = 6;
          winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
            a1 + 32,
            a1);
          return;
        case 5:
          v4 = (__int64 *)(a1 + 16);
          if ( *((_QWORD *)a1 + 2) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
          goto LABEL_53;
        case 6:
LABEL_11:
          v7 = winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 32));
          winrt::impl::signal_awaiter::~signal_awaiter((winrt::impl::signal_awaiter *)(a1 + 32));
          if ( !v7 )
          {
            a1[88] = 0;
            WindowTabHostTelemetry::WindowTabHostIconTimeout<bool>();
            if ( !*((_QWORD *)a1 + 2) )
              goto LABEL_53;
            goto LABEL_52;
          }
          _SetEvent_scope_exit___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEBA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_SetEvent_details_wil__YAX0_ZU__integral_constant__K_00_wistd__PEAXPEAX_0A___T_details_wil___details_wil___2_XZ(
            *((_QWORD **)a1 + 42),
            (_QWORD *)a1 + 12,
            v8,
            v9);
          *((_DWORD *)a1 + 26) = 0;
          *((_DWORD *)a1 + 27) = 0;
          v10 = MonitorFromWindow(0LL, 1u);
          if ( (unsigned int)GetDpiForMonitorInternal(v10, 0LL, a1 + 104, a1 + 108) )
          {
            SystemMetricsForDpi = GetSystemMetricsForDpi(50LL);
            if ( (int)GetSystemMetricsForDpi(49LL) <= SystemMetricsForDpi )
              v14 = 50LL;
            else
              v14 = 49LL;
            *((_DWORD *)a1 + 28) = GetSystemMetricsForDpi(v14);
            v15 = GetSystemMetricsForDpi(12LL);
            if ( (int)GetSystemMetricsForDpi(11LL) <= v15 )
              v16 = 12LL;
            else
              v16 = 11LL;
            *((_DWORD *)a1 + 29) = GetSystemMetricsForDpi(v16);
            winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::InputCompanion(
              *((_QWORD *)a1 + 2) + 48LL,
              a1 + 120);
            a1[128] = 0;
            v17 = lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_::operator()((__int64)(a1 + 128), (__int64)(a1 + 136));
            v18 = winrt::when_any<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>(
                    (__int64)(a1 + 144),
                    (int)a1 + 120,
                    v17);
            *((_QWORD *)a1 + 19) = 0LL;
            *((_QWORD *)a1 + 20) = v18;
            *((_QWORD *)a1 + 21) = 0LL;
            a1[176] = 1;
            *((_WORD *)a1 + 4) = 8;
            if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
                                    a1 + 152,
                                    a1) )
              return;
LABEL_31:
            winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_resume(
              a1 + 152,
              a1 + 184);
            winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 152);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 136));
            *((_QWORD *)a1 + 24) = 0LL;
            if ( winrt::Windows::Foundation::operator==(
                   (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 23,
                   (_QWORD *)a1 + 24) )
            {
              winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>>::Cancel((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 15);
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 184));
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
              v22 = (wil::details *)*((_QWORD *)a1 + 12);
              if ( v22 )
                wil::details::SetEvent(v22, v21);
              if ( *((_QWORD *)a1 + 2) )
                goto LABEL_52;
            }
            else
            {
              InstanceAsync = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                                (__int64 **)a1 + 23,
                                (_QWORD *)a1 + 25);
              *((_QWORD *)a1 + 26) = 0LL;
              *((_QWORD *)a1 + 27) = InstanceAsync;
              *((_QWORD *)a1 + 28) = 0LL;
              a1[232] = 1;
              *((_WORD *)a1 + 4) = 10;
              if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>(
                                      a1 + 208,
                                      a1) )
                return;
LABEL_42:
              winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::await_resume(
                a1 + 208,
                a1 + 240);
              winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 208);
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 200));
              *((_QWORD *)a1 + 31) = *((_QWORD *)a1 + 30);
              v26 = (struct IStream **)(a1 + 256);
              winrt::capture<IStream,long (&)(IUnknown *,_GUID const &,void * *),IUnknown *>(
                (_QWORD *)a1 + 32,
                (__int64 (__fastcall *)(__int64, void *, __int64 *))CreateStreamOverRandomAccessStream,
                (__int64 *)a1 + 31);
              *((_QWORD *)a1 + 33) = 0LL;
              *((_QWORD *)a1 + 34) = 0LL;
              *((_QWORD *)a1 + 35) = a1 + 264;
              *((_QWORD *)a1 + 36) = 0LL;
              a1[296] = 1;
              v27 = *((_QWORD *)a1 + 2);
              IconFromStreamWithWIC = CreateIconFromStreamWithWIC(
                                        *(HICON **)(v27 + 104),
                                        *((struct IStream **)a1 + 32),
                                        *((_DWORD *)a1 + 28),
                                        v28,
                                        (HICON *)a1 + 36);
              wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>((__int64)(a1 + 280));
              if ( IconFromStreamWithWIC >= 0 )
              {
                SendMessageW(*(HWND *)(*(_QWORD *)(a1 + 353) + 32LL), 0x80u, 0LL, *((_QWORD *)a1 + 33));
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                  (HICON *)(v27 + 88),
                  (HICON *)a1 + 33);
              }
              *((_QWORD *)a1 + 38) = 0LL;
              if ( (*(int (__fastcall **)(struct IStream *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v26 + 40LL))(
                     *v26,
                     *((_QWORD *)a1 + 38),
                     0LL,
                     0LL) >= 0 )
              {
                *((_QWORD *)a1 + 39) = a1 + 272;
                *((_QWORD *)a1 + 40) = 0LL;
                a1[328] = 1;
                v31 = CreateIconFromStreamWithWIC(
                        *(HICON **)(v27 + 104),
                        *v26,
                        *((_DWORD *)a1 + 29),
                        v30,
                        (HICON *)a1 + 40);
                wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>((__int64)(a1 + 312));
                if ( v31 >= 0 )
                {
                  SendMessageW(*(HWND *)(*(_QWORD *)(a1 + 353) + 32LL), 0x80u, 1uLL, *((_QWORD *)a1 + 34));
                  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                    (HICON *)(v27 + 96),
                    (HICON *)a1 + 34);
                }
              }
              wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>((HICON *)a1 + 34);
              wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>((HICON *)a1 + 33);
              if ( *((_QWORD *)a1 + 32) )
                winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 32);
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 240));
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 184));
              winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
              v33 = (wil::details *)*((_QWORD *)a1 + 12);
              if ( v33 )
                wil::details::SetEvent(v33, v32);
              if ( *((_QWORD *)a1 + 2) )
                goto LABEL_52;
            }
          }
          else
          {
            v12 = (wil::details *)*((_QWORD *)a1 + 12);
            if ( v12 )
              wil::details::SetEvent(v12, v11);
            if ( *((_QWORD *)a1 + 2) )
LABEL_52:
              winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 2);
          }
LABEL_53:
          if ( *((_WORD *)a1 + 5) )
            operator delete(a1, (const struct std::nothrow_t *)0x170);
          break;
        case 7:
          winrt::impl::signal_awaiter::~signal_awaiter((winrt::impl::signal_awaiter *)(a1 + 32));
          if ( *((_QWORD *)a1 + 2) )
            goto LABEL_52;
          goto LABEL_53;
        case 8:
          goto LABEL_31;
        case 9:
          winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 152);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 136));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
          v20 = (wil::details *)*((_QWORD *)a1 + 12);
          if ( v20 )
            wil::details::SetEvent(v20, v19);
          if ( *((_QWORD *)a1 + 2) )
            goto LABEL_52;
          goto LABEL_53;
        case 0xA:
          goto LABEL_42;
        case 0xB:
          winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>(a1 + 208);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 200));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 184));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 120));
          v25 = (wil::details *)*((_QWORD *)a1 + 12);
          if ( v25 )
            wil::details::SetEvent(v25, v24);
          if ( *((_QWORD *)a1 + 2) )
            goto LABEL_52;
          goto LABEL_53;
      }
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
