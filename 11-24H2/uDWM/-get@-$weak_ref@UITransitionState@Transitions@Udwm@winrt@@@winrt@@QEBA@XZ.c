/*
 * XREFs of ?get@?$weak_ref@UITransitionState@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x1800E61E0
 * Callers:
 *     _lambda_824c6eb626f18db003f69816ba8f789d_::operator() @ 0x1800E4F6C (_lambda_824c6eb626f18db003f69816ba8f789d_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Udwm::Transitions::ITransitionState>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Udwm::Transitions::TransitionState>>::value,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
