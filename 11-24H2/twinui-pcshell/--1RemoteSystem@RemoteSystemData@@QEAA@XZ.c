/*
 * XREFs of ??1RemoteSystem@RemoteSystemData@@QEAA@XZ @ 0x180611564
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ShowErrorTransitionScreen_::_1_::dtor$10 @ 0x1806D68E4 (_winrt--Windows--Internal--Shell--implementation--ConnectionHandler--ShowErrorTransitionScreen_-.c)
 *     __lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator()_::_1_::dtor$1 @ 0x180701E8D (__lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_--operator()_--_1_--dtor$1.c)
 *     _RemoteSystemData::RemoteSystem::CreateFromBytes_::_1_::dtor$1 @ 0x180701EB1 (_RemoteSystemData--RemoteSystem--CreateFromBytes_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetDataFromFileMappings_::_1_::dtor$1 @ 0x180701F5F (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--GetDataFromFile.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$34 @ 0x1807021ED (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivateProvider_--_1_-.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateDataForWindow_::_1_::dtor$0 @ 0x1807025F0 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--UpdateDataForWi.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$12 @ 0x180703384 (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_180703384.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootPhysicalDeviceAccessState::ShowPhysicalDeviceAccessTransitionScreen_::_1_::dtor$8 @ 0x18070354E (_winrt--Windows--Internal--Shell--implementation--BootPhysicalDeviceAccessState--Sh_ea_18070354E.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::ActivateProvider_::_1_::dtor$15 @ 0x1807035A8 (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--Activate_ea_1807035A8.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState::ShowDisconnectingScreen_::_1_::dtor$3 @ 0x180703BA7 (_winrt--Windows--Internal--Shell--implementation--SwitchDisconnectedState--ShowDisconnectingScre.c)
 *     _winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ShowTransitionScreen_::_1_::dtor$6 @ 0x180703BCB (_winrt--Windows--Internal--Shell--implementation--ConnectionStateBase--ShowTransiti_ea_180703BCB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RemoteSystemData::RemoteSystem::~RemoteSystem(volatile signed __int32 **this)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(this);
}
