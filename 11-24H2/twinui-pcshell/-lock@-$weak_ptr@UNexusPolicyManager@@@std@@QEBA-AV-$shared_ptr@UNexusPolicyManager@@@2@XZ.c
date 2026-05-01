/*
 * XREFs of ?lock@?$weak_ptr@UNexusPolicyManager@@@std@@QEBA?AV?$shared_ptr@UNexusPolicyManager@@@2@XZ @ 0x180360B9C
 * Callers:
 *     ?Instance@?$singleton_with_factory@UNexusPolicyManager@@U?$singleton_initialize_factory@UNexusPolicyManager@@@xblib@@@xblib@@SA?AV?$shared_ptr@UNexusPolicyManager@@@std@@XZ @ 0x180351CFC (-Instance@-$singleton_with_factory@UNexusPolicyManager@@U-$singleton_initialize_factory@UNexusPo.c)
 *     _lambda_d19e6ffc7ca088ab1366ed8b1c01ea04_::_lambda_invoker_cdecl_ @ 0x1803688A0 (_lambda_d19e6ffc7ca088ab1366ed8b1c01ea04_--_lambda_invoker_cdecl_.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_f626797b4729018c6c4cb46d87a4371f___::Invoke @ 0x180369890 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInsp.c)
 *     _lambda_c4158f368c90993acd5619817087aedd_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_ @ 0x180656144 (_lambda_c4158f368c90993acd5619817087aedd_--operator()_winrt--Windows--Internal--Shell--CloudDesk.c)
 *     _lambda_3e3d6084102ea12775201c324e2ccf34_::operator() @ 0x1806591AC (_lambda_3e3d6084102ea12775201c324e2ccf34_--operator().c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18008A788 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

_QWORD *__fastcall std::weak_ptr<NexusPolicyManager>::lock(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a2;
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
  {
    *v2 = *v4;
    v2[1] = v4[1];
  }
  return v2;
}
