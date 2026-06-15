/*
 * XREFs of ??$InternalCallback@W4_PO_STANDBY_AUDIO_POLICY@@@?$wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@QEAAXPEBW4_PO_STANDBY_AUDIO_POLICY@@K@Z @ 0x1800CB774
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_cdb66e8b67df41bb0e9ce18a2f5d193f_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800CB3E0 (-_lambda_invoker_cdecl_@_lambda_cdb66e8b67df41bb0e9ce18a2f5d193f_@@CAJU_WNF_STATE_NAME@@KPEAU_WN.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800ADE28 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800BF368 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::details::wnf_subscription_state<enum _PO_STANDBY_AUDIO_POLICY>::InternalCallback<enum _PO_STANDBY_AUDIO_POLICY>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // rcx
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 4 )
    return wil::details::in1diag3::Log_HrMsg(
             retaddr,
             925LL,
             (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
             (const char *)0x8000FFFFLL,
             (unsigned __int64)"Inconsistent state data size in WNF callback",
             v5);
  v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
}
