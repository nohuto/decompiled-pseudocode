/*
 * XREFs of ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1801C1DD0
 * Callers:
 *     _lambda_71ae74f74888d637c85562ef224bc48a_::operator() @ 0x180680FBC (_lambda_71ae74f74888d637c85562ef224bc48a_--operator().c)
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::operator() @ 0x18068117C (_lambda_b77313e954014d84b78f3886c1783ac6_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___::Invoke @ 0x180681450 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180681450.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ExperienceManagerUtils::AsStrong<IInspectable>(_QWORD *a1, _QWORD *a2)
{
  *a1 = 0LL;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)*a2 + 24LL))(
      *a2,
      &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
      a1);
  return a1;
}
