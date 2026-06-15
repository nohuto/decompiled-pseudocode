/*
 * XREFs of ??$InternalCallback@E@?$wnf_array_subscription_state@E@details@wil@@QEAAXPEBEK@Z @ 0x180142788
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_aefdc4d25f99d355ae0f211589b2486e_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180142730 (-_lambda_invoker_cdecl_@_lambda_aefdc4d25f99d355ae0f211589b2486e_@@CAJU_WNF_STATE_NAME@@KPEAU_WN.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800ADE28 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::wnf_array_subscription_state<unsigned char>::InternalCallback<unsigned char>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 128);
  v6 = a3;
  v5[0] = a2;
  if ( !v3 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v3 + 32LL))(v3, v5, &v6);
}
