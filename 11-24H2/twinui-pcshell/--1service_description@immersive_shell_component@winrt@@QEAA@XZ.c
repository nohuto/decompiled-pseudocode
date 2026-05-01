/*
 * XREFs of ??1service_description@immersive_shell_component@winrt@@QEAA@XZ @ 0x18014A710
 * Callers:
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$26 @ 0x1806D45C7 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1806D45C7.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::CloudPCComponent_::_1_::dtor$12 @ 0x1807018DB (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--CloudPCComponen_ea_1807018DB.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::CloudPCComponent_::_1_::dtor$14 @ 0x1807018ED (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--CloudPCComponen_ea_1807018ED.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::immersive_shell_component::service_description::~service_description(
        winrt::immersive_shell_component::service_description *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 16);
  if ( *v1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v1);
}
