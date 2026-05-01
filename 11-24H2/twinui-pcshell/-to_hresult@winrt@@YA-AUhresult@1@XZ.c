/*
 * XREFs of ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DE0D8
 * Callers:
 *     ?terminate@winrt@@YAXXZ @ 0x1802DF9F0 (-terminate@winrt@@YAXXZ.c)
 *     ?report_failed_invoke@impl@winrt@@YA_NXZ @ 0x180337C50 (-report_failed_invoke@impl@winrt@@YA_NXZ.c)
 *     _winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs_::InitializeViewDependent_::_1_::catch$0 @ 0x1806CC6BC (_winrt--impl--produce_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActivatedEventArgs_.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::PackageCatalog_winrt::Windows::ApplicationModel::PackageUpdatingEventArgs___lambda_505d7d8dd5d02cda7c2ed4b2e362c386___::Invoke_::_1_::catch$8 @ 0x1806CC72C (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Application.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::UpdateTabsForWindow_::_1_::catch$0 @ 0x1806CC930 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--WindowTabHost_winrt--Wind.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK_winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider_::GetXamlType_::_1_::catch$3 @ 0x1806CCA88 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__const_&_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___::GetResults_::_1_::catch$5 @ 0x1806CCB5C (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOper.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK_winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider_::GetXamlTypeByFullName_::_1_::catch$3 @ 0x1806CCBA0 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--imp_ea_1806CCBA0.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUpdateEvent_::_1_::catch$25 @ 0x1806CCCD0 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageU_ea_1806CCCD0.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageInstallEvent_::_1_::catch$24 @ 0x1806CCD50 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageI_ea_1806CCD50.c)
 *     _winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_winrt::WindowsUdk::UI::Shell::ISearchAppHost4_::ReportReactivationCompleteWithSessionId_::_1_::catch$3 @ 0x1806CD0A0 (_winrt--impl--produce_winrt--WindowsUdk--UI--Shell--implementation--SearchAppHost_winrt--Windows.c)
 *     _winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs_::get_LaunchSourceTelemetryId_::_1_::catch$4 @ 0x1806CD0E4 (_winrt--impl--produce_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActiva_ea_1806CD0E4.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance_::Hide_::_1_::catch$0 @ 0x1806CF044 (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyout.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_::FilterMessage_::_1_::catch$0 @ 0x1806CF460 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlExp.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK_::get_HasFocus_::_1_::catch$0 @ 0x1806D0BB3 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D0BB3.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_::get_IsVisible_::_1_::catch$0 @ 0x1806D0BE5 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D0BE5.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_::get_XamlContent_::_1_::catch$9 @ 0x1806D0C17 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D0C17.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_::put_IsVisible_::_1_::catch$0 @ 0x1806D0C49 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D0C49.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_::put_XamlContent_::_1_::catch$0 @ 0x1806D0C7B (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D0C7B.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_::put_Position_::_1_::catch$0 @ 0x1806D0CAD (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D0CAD.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_::put_IsCloaked_::_1_::catch$0 @ 0x1806D0CDF (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D0CDF.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK_::SetFocus2_::_1_::catch$0 @ 0x1806D0DA2 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D0DA2.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowFactory_::CreateInstance_::_1_::catch$17 @ 0x1806D59F9 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--factory_im_ea_1806D59F9.c)
 *     _WINRT_GetActivationFactory_::_1_::catch$0 @ 0x1806D5B74 (_WINRT_GetActivationFactory_--_1_--catch$0.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_::SetFocus2_::_1_::catch$19 @ 0x1806D5D52 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D5D52.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_::get_HasFocus_::_1_::catch$7 @ 0x1806D5D84 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D5D84.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::catch$30 @ 0x1806D68F6 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageU_ea_1806D68F6.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager_winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension_::ResetNotificationBoundary_::_1_::catch$0 @ 0x1806D6BA9 (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSna.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::ViewVisibilityChangedEventArgs___lambda_352628a2d1ddb7fdbe9aad4ec4f36b56___::Invoke_::_1_::catch$3 @ 0x1806D6C27 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shel.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider_::GetXamlTypeByFullName_::_1_::catch$5 @ 0x1806D6D01 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlApp.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_::get_Bounds_::_1_::catch$0 @ 0x1806D6D45 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D6D45.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::ActiveTabChangedEventArgs___lambda_2a851c89b37b22f5db043065bc559031___::Invoke_::_1_::catch$5 @ 0x1806D6F64 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--U.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager_winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager_::ReportEdgeGesture_::_1_::catch$0 @ 0x1806D7564 (_winrt--impl--produce_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimation.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_6f20433e237056822ca4350483f9bb11___::Invoke_::_1_::catch$0 @ 0x1806D7596 (_winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--Xaml--Media-.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_::put_IsVisible_::_1_::catch$0 @ 0x1806D7840 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D7840.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_abf37a923c4e39d61bd96b31f9d5bb1d___::Invoke_::_1_::catch$8 @ 0x1806D7872 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--S.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_::WindowTabsChanged2_::_1_::catch$0 @ 0x1806D7D5B (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--WindowTabHos_ea_1806D7D5B.c)
 *     _winrt::impl::delegate_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler__lambda_eed24a43ab320b602e73bc35d7541654___::Invoke_::_1_::catch$2 @ 0x1806D7F78 (_winrt--impl--delegate_winrt--Windows--Internal--Shell--SnapComponent--ResetNotificationBoundary.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_::put_Bounds_::_1_::catch$0 @ 0x1806D8078 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D8078.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___winrt::when_any_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_2_::shared_type_::Invoke_::_1_::catch$0 @ 0x1806D82C2 (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics_::get_Current_::_1_::catch$8 @ 0x1806D82F4 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--factory_im_ea_1806D82F4.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::WindowTabView_winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs___lambda_183baf27b090b4cfecd741efea205505___::Invoke_::_1_::catch$0 @ 0x1806D83D4 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1806D83D4.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0f59bd4c249e80fc849f8df850cac31c___::Invoke_::_1_::catch$3 @ 0x1806D855F (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1806D855F.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions_winrt::Windows::Internal::Shell::Text::IViewOptions_::get_VisibleViewRects_::_1_::catch$5 @ 0x1806D8ACA (_winrt--impl--produce_winrt--Windows--Internal--Shell--KeyboardHosting--implementation--InputVie.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider_::GetXamlType_::_1_::catch$5 @ 0x1806D8E66 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D8E66.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_bool__winrt::Windows::Internal::Shell::implementation::TabProxyWindow___::promise_type_winrt::Windows::Foundation::IAsyncOperation_bool___::put_Completed_::_1_::catch$2 @ 0x1806D8E98 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundatio_ea_1806D8E98.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance_::add_PointerEntered_::_1_::catch$1 @ 0x1806D8F2A (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementatio_ea_1806D8F2A.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance_::add_InstanceReady_::_1_::catch$1 @ 0x1806D8F5C (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementatio_ea_1806D8F5C.c)
 *     _winrt::impl::produce_winrt::iterable_base_winrt::impl::scoped_input_iterable_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::hstring__std::pair_winrt::hstring_const__winrt::hstring__const____winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::hstring__winrt::impl::no_collection_version_::iterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::hstring_____::get_Current_::_1_::catch$4 @ 0x1806D931D (_winrt--impl--produce_winrt--iterable_base_winrt--impl--scoped_input_iterable_winrt--Windows--Fo.c)
 *     _winrt::impl::produce_winrt::iterable_base_winrt::impl::scoped_input_iterable_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::hstring__std::pair_winrt::hstring_const__winrt::hstring__const____winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::hstring__winrt::impl::no_collection_version_::iterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::Foundation::Collections::IKeyValuePair_winrt::hstring_winrt::hstring_____::MoveNext_::_1_::catch$0 @ 0x1806D934F (_winrt--impl--produce_winrt--iterable_base_winrt--impl--scoped_input_iterable_winrt_ea_1806D934F.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_::add_TakeFocusRequested_::_1_::catch$0 @ 0x1806D9721 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806D9721.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager_winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension_::add_WindowDragging_::_1_::catch$0 @ 0x1806D9966 (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementatio_ea_1806D9966.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance_::get_Id_::_1_::catch$0 @ 0x1806D9BFD (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementatio_ea_1806D9BFD.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions_winrt::Windows::Internal::Shell::Text::IViewOptions_::get_VerticalMovementSupported_::_1_::catch$0 @ 0x1806D9ECB (_winrt--impl--produce_winrt--Windows--Internal--Shell--KeyboardHosting--implementat_ea_1806D9ECB.c)
 *     _winrt::impl::produce_winrt::impl::vector_impl_winrt::Windows::Foundation::Rect_std::vector_winrt::Windows::Foundation::Rect_std::allocator_winrt::Windows::Foundation::Rect____winrt::impl::single_threaded_collection_base__winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::Foundation::Rect___::get_Size_::_1_::catch$0 @ 0x1806DA0A3 (_winrt--impl--produce_winrt--impl--vector_impl_winrt--Windows--Foundation--Rect_std--vector_winr.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK_winrt::Windows::Foundation::IClosable_::Close_::_1_::catch$7 @ 0x1806DA1FE (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806DA1FE.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_::put_XamlContent_::_1_::catch$0 @ 0x1806DA3AA (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806DA3AA.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK_::put_Bounds_::_1_::catch$0 @ 0x1806DA3DC (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806DA3DC.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions_winrt::Windows::Internal::Shell::Text::IViewOptions_::get_OccludingViewRect_::_1_::catch$0 @ 0x1806DA489 (_winrt--impl--produce_winrt--Windows--Internal--Shell--KeyboardHosting--implementat_ea_1806DA489.c)
 *     _winrt::impl::produce_winrt::impl::vector_impl_winrt::Windows::UI::WindowId_std::vector_winrt::Windows::UI::WindowId_std::allocator_winrt::Windows::UI::WindowId____winrt::impl::single_threaded_collection_base__winrt::Windows::Foundation::Collections::IVector_winrt::Windows::UI::WindowId___::GetView_::_1_::catch$13 @ 0x1806DA52D (_winrt--impl--produce_winrt--impl--vector_impl_winrt--Windows--UI--WindowId_std--vector_winrt--W.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_::add_ActivationChanged_::_1_::catch$1 @ 0x1806DA64F (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806DA64F.c)
 *     _winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs_::get_SplashScreen_::_1_::catch$7 @ 0x1806DA921 (_winrt--impl--produce_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActiva_ea_1806DA921.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_winrt::Windows::UI::Xaml::IApplicationOverrides_::OnLaunched_::_1_::catch$4 @ 0x1806DACDB (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806DACDB.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_::TryGetTitleForWindow_::_1_::catch$2 @ 0x1806DAD7C (_winrt--impl--produce_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsCom.c)
 *     _winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs_::get_Kind_::_1_::catch$0 @ 0x1806DADAE (_winrt--impl--produce_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActiva_ea_1806DADAE.c)
 *     _winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d___::Invoke_::_1_::catch$2 @ 0x1806DAE95 (_winrt--impl--delegate_winrt--Windows--System--Threading--TimerElapsedHandler__lamb_ea_1806DAE95.c)
 *     _winrt::impl::produce_winrt::impl::vector_impl_winrt::Windows::Internal::Shell::RegistrationData_std::vector_winrt::Windows::Internal::Shell::RegistrationData_std::allocator_winrt::Windows::Internal::Shell::RegistrationData____winrt::impl::single_threaded_collection_base__winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::Internal::Shell::RegistrationData___::GetAt_::_1_::catch$4 @ 0x1806DAF03 (_winrt--impl--produce_winrt--impl--vector_impl_winrt--Windows--Internal--Shell--RegistrationData.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager_winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics_::GetForWorkArea_::_1_::catch$5 @ 0x1806DAF81 (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--factory_implementation--De.c)
 *     _winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_2b1b3b6403435603254e85b21aa8ddec___::Invoke_::_1_::catch$0 @ 0x1806DB01F (_winrt--impl--delegate_winrt--Windows--UI--Xaml--RoutedEventHandler__lambda_2b1b3b6403435603254e.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow_::put_WindowTitle_::_1_::catch$0 @ 0x1806DB0EA (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806DB0EA.c)
 *     _winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_unsigned_short_const___std::chrono::duration___int64_std::ratio_1_1000_____::promise_type_winrt::Windows::Foundation::IAsyncAction_::put_Completed_::_1_::catch$0 @ 0x1806DB416 (_winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncActi.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::ActivationChangedEventArgs_winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs_::get_NewForeground_::_1_::catch$0 @ 0x1806DB4B9 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--Activat.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions_winrt::Windows::Internal::Shell::Text::IViewOptions_::get_ZOrder_::_1_::catch$0 @ 0x1806DB527 (_winrt--impl--produce_winrt--Windows--Internal--Shell--KeyboardHosting--implementat_ea_1806DB527.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_::add_WindowStateChange_::_1_::catch$0 @ 0x1806DB559 (_winrt--impl--produce_winrt--Windows--Internal--Shell--TaskGroups--implementation--_ea_1806DB559.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent_winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost_::GetUnoccludedSnappedWindowsForWindow_::_1_::catch$1 @ 0x1806DB98C (_winrt--impl--produce_winrt--Windows--Internal--Shell--TaskGroups--implementation--_ea_1806DB98C.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_winrt::Windows::Internal::Shell::SnapComponent::IControlWindow_::TryInsertAfterWindow_::_1_::catch$0 @ 0x1806DBD91 (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementatio_ea_1806DBD91.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2_winrt::Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowResizeStartedEventArgs___lambda_fb02139e2b90b33082d3ca27ed7b30a7___::Invoke_::_1_::catch$7 @ 0x1806DBF49 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1806DBF49.c)
 *     _winrt::impl::root_implements_winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController_winrt::Windows::Foundation::IActivationFactory_::NonDelegatingGetTrustLevel_::_1_::catch$0 @ 0x1806DBFB7 (_winrt--impl--root_implements_winrt--Windows--Internal--Shell--DesktopTaskGroups--factory_implem.c)
 *     _winrt::impl::delegate_winrt::Windows::System::DispatcherQueueHandler_wil::details::dispatcher_handler_::Invoke_::_1_::catch$0 @ 0x1806DC167 (_winrt--impl--delegate_winrt--Windows--System--DispatcherQueueHandler_wil--details--dispatcher_h.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Internal::UI::Shell::WindowTabDataModel___winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Internal::UI::Shell::WindowTabDataModel____::_2_::shared_type_::Invoke_::_1_::catch$0 @ 0x1806DC24D (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_w_ea_1806DC24D.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted_::_1_::catch$24 @ 0x1806DC820 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--TriggerCompatB_ea_1806DC820.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Foundation::IReference_bool_____lambda_985bae7315308d415c04588d298dcf5f___::Invoke_::_1_::catch$3 @ 0x1806DCCAD (_winrt--impl--delegate_winrt--Windows--Foundation--AsyncOperationCompletedHandler_w_ea_1806DCCAD.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_694cec6c9198d8f39470d0c04c207483___::Invoke_::_1_::catch$3 @ 0x1806DCD57 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1806DCD57.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance_::get_IsVisible_::_1_::catch$0 @ 0x1806DCD89 (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementatio_ea_1806DCD89.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_winrt::Windows::Internal::Shell::SnapComponent::IControlWindow_::get_AppWindow_::_1_::catch$0 @ 0x1806DCDBB (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementatio_ea_1806DCDBB.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow_WASDK_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow_WASDK_::put_XamlContent_::_1_::catch$0 @ 0x1806DD3E0 (_winrt--impl--produce_winrt--Windows--Internal--Shell--XamlExplorerHost--implementa_ea_1806DD3E0.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager_winrt::Windows::Internal::Shell::IRemoteSessionWindowManager_::IsImmersiveRemoteSession_::_1_::catch$0 @ 0x1806DD8E2 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManage.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::Invoke_::_1_::catch$9 @ 0x1806DDCE2 (_winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IIns.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteDesktopConnectedEventArgs_winrt::Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs_::get_VirtualDesktopId_::_1_::catch$0 @ 0x1806DDE51 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--RemoteDesktopConnectedEve.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager_winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics_::add_ResetNotificationBoundary_::_1_::catch$0 @ 0x1806DDF3D (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--factory_imple_ea_1806DDF3D.c)
 *     _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::ErrorCode_::_1_::catch$1 @ 0x1806E02ED (_winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foun_ea_1806E02ED.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager_winrt::Windows::Internal::Shell::IRemoteSessionWindowManager_::GetRemoteDesktopInformation_::_1_::catch$2 @ 0x1806E031B (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--RemoteSessio_ea_1806E031B.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteSystem_winrt::Windows::Internal::Shell::IRemoteSystem_::put_State_::_1_::catch$2 @ 0x1806E1590 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--RemoteSystem_winrt--Windo.c)
 *     _winrt::impl::produce_winrt::impl::vector_impl_winrt::Windows::Internal::Shell::RegistrationData_std::vector_winrt::Windows::Internal::Shell::RegistrationData_std::allocator_winrt::Windows::Internal::Shell::RegistrationData____winrt::impl::single_threaded_collection_base__winrt::Windows::Foundation::Collections::IVector_winrt::Windows::Internal::Shell::RegistrationData___::ReplaceAll_::_1_::catch$0 @ 0x1806E182A (_winrt--impl--produce_winrt--impl--vector_impl_winrt--Windows--Internal--Shell--Reg_ea_1806E182A.c)
 *     _winrt::impl::produce_winrt::iterable_base_winrt::impl::vector_impl_winrt::Windows::UI::WindowId_std::vector_winrt::Windows::UI::WindowId_std::allocator_winrt::Windows::UI::WindowId____winrt::impl::single_threaded_collection_base__winrt::Windows::UI::WindowId_winrt::impl::collection_version_::iterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::UI::WindowId___::GetMany_::_1_::catch$0 @ 0x1806E4EB7 (_winrt--impl--produce_winrt--iterable_base_winrt--impl--vector_impl_winrt--Windows--UI--WindowId.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::CloudPCComponent_winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension_::EnableCloudPC_::_1_::catch$0 @ 0x1806E5769 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--CloudPCComponent_winrt--W.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager_winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager_::ReportViewDragGesture_::_1_::catch$0 @ 0x1806EBF55 (_winrt--impl--produce_winrt--Windows--Internal--Shell--Animations--implementation--_ea_1806EBF55.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::StartScreen::TileCollection_winrt::WindowsUdk::UI::StartScreen::TileRemovedEventArgs___lambda_ae55d667dee5f74db031bb94afbcc4c3___::Invoke_::_1_::catch$8 @ 0x1806F8FCC (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Star.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback_std::_Binder_std::_Unforced_winrt::fire_and_forget_(__cdecl_)(std::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData____winrt::com_ptr_IServiceProvider__Geometry::CRect_const_&_unsigned_int)_std::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData____&_winrt::com_ptr_IServiceProvider__&_Geometry::CRect_unsigned_int____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::Run_::_1_::catch$2 @ 0x1806F9010 (_winrt--impl--produce_winrt--Windows--Internal--Shell--SnapComponent--implementatio_ea_1806F9010.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs___lambda_5f0db137ae2a6c5fc040ef9fe2a6d287___::Invoke_::_1_::catch$8 @ 0x1806F9675 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1806F9675.c)
 *     _winrt::impl::produce_winrt::impl::vector_impl_winrt::Windows::Foundation::Uri_std::vector_winrt::Windows::Foundation::Uri_std::allocator_winrt::Windows::Foundation::Uri____winrt::impl::single_threaded_collection_base__winrt::Windows::Foundation::Collections::IVector_winrt::Windows::Foundation::Uri___::InsertAt_::_1_::catch$0 @ 0x1806FA5F0 (_winrt--impl--produce_winrt--impl--vector_impl_winrt--Windows--Foundation--Uri_std--vector_winrt.c)
 *     _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::catch$51 @ 0x1806FA972 (_LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1_--_1_--catch$51.c)
 *     _winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress__winrt::Windows::Internal::Shell::implementation::MeetAndChatManager___::promise_type_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress__winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::ErrorCode_::_1_::catch$2 @ 0x1806FDF5B (_winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Foun_ea_1806FDF5B.c)
 *     __lambda_03899bd9ba5a14c04410ab955a36d1b6_::operator()_::_1_::catch$0 @ 0x1806FF9A6 (__lambda_03899bd9ba5a14c04410ab955a36d1b6_--operator()_--_1_--catch$0.c)
 *     __lambda_0d53fb9086cf6d11ab0e5935486144eb_::operator()_::_1_::catch$0 @ 0x1806FF9DC (__lambda_0d53fb9086cf6d11ab0e5935486144eb_--operator()_--_1_--catch$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch$48 @ 0x1806FFE46 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_1806FFE46.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch$49 @ 0x1806FFE9B (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_1806FFE9B.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback_::_1_::catch$8 @ 0x1806FFFB7 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--CompatFolderCh_ea_1806FFFB7.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1_::_1_::catch$21 @ 0x18070032D (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_R_ea_18070032D.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1_::_1_::catch$14 @ 0x1807004BB (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ea_1807004BB.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1_::_1_::catch$16 @ 0x1807005BD (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ea_1807005BD.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::catch$40 @ 0x1807006A5 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegistryWatche_ea_1807006A5.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::to_hresult(_DWORD *a1)
{
  _BYTE *v3; // rbp
  _BYTE *v4; // rbp
  _BYTE *v5; // rbp
  __int64 v6; // rax
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  _BYTE *v9; // rdx
  _BYTE *v10; // rdx
  _BYTE *v11; // rdx
  _BYTE v12[112]; // [rsp+0h] [rbp-98h] BYREF
  const winrt::hresult_error *v13; // [rsp+70h] [rbp-28h] BYREF
  const std::out_of_range *v14; // [rsp+78h] [rbp-20h] BYREF
  const std::invalid_argument *v15; // [rsp+80h] [rbp-18h] BYREF
  const std::exception *v16; // [rsp+88h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v18; // [rsp+A0h] [rbp+8h]

  if ( !winrt_to_hresult_handler )
  {
    try
    {
      throw;
    }
    catch ( const winrt::hresult_error *v13 )
    {
      v7 = v12;
      winrt::hresult_error::to_abi(*((_QWORD *)v7 + 14), *((_DWORD **)v7 + 20));
      return (_DWORD *)v18;
    }
    catch ( std::bad_alloc )
    {
      v8 = v12;
      **((_DWORD **)v8 + 20) = -2147024882;
      return (_DWORD *)v18;
    }
    catch ( const std::out_of_range *v14 )
    {
      v9 = v12;
      v3 = v9;
      *((_DWORD *)v9 + 14) = 0;
      *((_OWORD *)v9 + 4) = 0LL;
      *((_QWORD *)v9 + 21) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 15) + 8LL))(*((_QWORD *)v9 + 15));
      *((_QWORD *)v3 + 10) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v3 + 22,
                                (const CHAR **)v3 + 21);
      winrt::hresult_error::hresult_error(
        (__int64)(v3 + 32),
        (unsigned int)winrt::impl::error_out_of_bounds,
        (_QWORD *)v3 + 10);
      winrt::hresult_error::to_abi((__int64)(v3 + 32), *((_DWORD **)v3 + 20));
      winrt::hresult_error::~hresult_error((OLECHAR **)v3 + 4);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v3 + 22);
      return (_DWORD *)v18;
    }
    catch ( const std::invalid_argument *v15 )
    {
      v10 = v12;
      v4 = v10;
      *((_DWORD *)v10 + 8) = 0;
      *(_OWORD *)(v10 + 40) = 0LL;
      *((_QWORD *)v10 + 21) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v10 + 16) + 8LL))(*((_QWORD *)v10 + 16));
      *((_QWORD *)v4 + 10) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v4 + 22,
                                (const CHAR **)v4 + 21);
      winrt::hresult_error::hresult_error(
        (__int64)(v4 + 56),
        (unsigned int)winrt::impl::error_invalid_argument,
        (_QWORD *)v4 + 10);
      winrt::hresult_error::to_abi((__int64)(v4 + 56), *((_DWORD **)v4 + 20));
      winrt::hresult_error::~hresult_error((OLECHAR **)v4 + 7);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v4 + 22);
      return (_DWORD *)v18;
    }
    catch ( const std::exception *v16 )
    {
      v11 = v12;
      v5 = v11;
      *((_DWORD *)v11 + 8) = 0;
      *(_OWORD *)(v11 + 40) = 0LL;
      *((_QWORD *)v11 + 21) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v11 + 17) + 8LL))(*((_QWORD *)v11 + 17));
      *((_QWORD *)v5 + 10) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v5 + 22,
                                (const CHAR **)v5 + 21);
      v6 = winrt::hresult_error::hresult_error((__int64)(v5 + 56), 2147500037LL, (_QWORD *)v5 + 10);
      winrt::hresult_error::to_abi(v6, *((_DWORD **)v5 + 20));
      winrt::hresult_error::~hresult_error((OLECHAR **)v5 + 7);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v5 + 22);
      return (_DWORD *)v18;
    }
  }
  *a1 = winrt_to_hresult_handler(retaddr);
  return a1;
}
