/*
 * XREFs of ??$InternalCallback@E@?$wnf_subscription_state@E@details@wil@@QEAAXPEBEK@Z @ 0x18042AA54
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_9504f3500b9dc45adde9f8fc6017a36d_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18021C100 (-_lambda_invoker_cdecl_@_lambda_9504f3500b9dc45adde9f8fc6017a36d_@@CAJU_WNF_STATE_NAME@@KPEAU_WN.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802B1FAC (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::details::wnf_subscription_state<unsigned char>::InternalCallback<unsigned char>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // rcx
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 1 )
    return wil::details::in1diag3::Log_HrMsg(
             retaddr,
             (void *)0x39D,
             (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
             (const char *)0x8000FFFFLL,
             (unsigned __int64)"Inconsistent state data size in WNF callback",
             v5);
  v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
}
