/*
 * XREFs of ??1CreateXamlApplication@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802CCE2C
 * Callers:
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::XamlApplication_::_1_::dtor$4 @ 0x1806D6DEF (_winrt--Windows--Internal--Shell--XamlExplorerHost--implementation--XamlApplication_ea_1806D6DEF.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800EA5B4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall XamlExplorerHostTelemetry::CreateXamlApplication::~CreateXamlApplication(
        XamlExplorerHostTelemetry::CreateXamlApplication *this)
{
  *(_QWORD *)this = &XamlExplorerHostTelemetry::CreateXamlApplication::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
