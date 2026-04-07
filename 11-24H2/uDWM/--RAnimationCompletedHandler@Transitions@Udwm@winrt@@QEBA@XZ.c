/*
 * XREFs of ??RAnimationCompletedHandler@Transitions@Udwm@winrt@@QEBA@XZ @ 0x180087164
 * Callers:
 *     _lambda_98ec2fe7430b08c69dc947ab84cea740_::operator() @ 0x18008706C (_lambda_98ec2fe7430b08c69dc947ab84cea740_--operator().c)
 *     ?_Do_call@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAXXZ @ 0x1800EBD00 (-_Do_call@-$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAXXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800E22B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::AnimationCompletedHandler::operator()(__int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return winrt::check_hresult(&v6, v2, &v4);
}
