/*
 * XREFs of ??1ConnectedStandbyHelper@@QEAA@XZ @ 0x1801CE0A0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x180231790 (-_Destroy@-$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EEFFC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801CE0D4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall ConnectedStandbyHelper::~ConnectedStandbyHelper(
        ConnectedStandbyHelper *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::details *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 5);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, a2);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
