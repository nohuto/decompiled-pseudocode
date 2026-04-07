/*
 * XREFs of ??R?$function@$$A6AXAEBH@Z@wistd@@QEBAXAEBH@Z @ 0x180086F1C
 * Callers:
 *     ??$InternalCallback@H@?$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z @ 0x1800ED404 (--$InternalCallback@H@-$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function<void (int const &)>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 112);
  if ( !v1 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
}
