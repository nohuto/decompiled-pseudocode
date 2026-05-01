/*
 * XREFs of _lambda_ac2a839fec59629fce3443c282716c2d_::__lambda_ac2a839fec59629fce3443c282716c2d_ @ 0x180682BE4
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow_::_1_::dtor$1 @ 0x18068543F (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_18068543F.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_ac2a839fec59629fce3443c282716c2d_::__lambda_ac2a839fec59629fce3443c282716c2d_(__int64 a1)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(a1 + 48);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  std::vector<Geometry::CRect>::_Tidy(a1 + 24);
}
