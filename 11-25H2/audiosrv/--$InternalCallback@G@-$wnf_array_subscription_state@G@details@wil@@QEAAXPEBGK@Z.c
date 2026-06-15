/*
 * XREFs of ??$InternalCallback@G@?$wnf_array_subscription_state@G@details@wil@@QEAAXPEBGK@Z @ 0x180088BB8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_2bd7833d1bf4bcca2b9a6ef873308bfb_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800A2CA0 (-_lambda_invoker_cdecl_@_lambda_2bd7833d1bf4bcca2b9a6ef873308bfb_@@CAJU_WNF_STATE_NAME@@KPEAU_WN.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800ADE28 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800BF368 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall wil::details::wnf_array_subscription_state<unsigned short>::InternalCallback<unsigned short>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  const char *v5; // [rsp+28h] [rbp-20h]
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  if ( (a3 & 1) != 0 )
    return wil::details::in1diag3::Log_HrMsg(
             retaddr,
             (void *)0x3E0,
             (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
             (const char *)0x8000FFFFLL,
             (int)"Inconsistent state data size in WNF callback",
             v5);
  v4 = *(_QWORD *)(a1 + 128);
  v8 = (unsigned __int64)a3 >> 1;
  v6[0] = a2;
  if ( !v4 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD *, unsigned __int64 *))(*(_QWORD *)v4 + 32LL))(v4, v6, &v8);
}
