/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_faddf15670103b2154840e6f822293f4_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18061C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@UPenButtonActionData@@@?$wnf_subscription_state@UPenButtonActionData@@@details@wil@@QEAAXPEBUPenButtonActionData@@K@Z @ 0x18061D13C (--$InternalCallback@UPenButtonActionData@@@-$wnf_subscription_state@UPenButtonActionData@@@detai.c)
 */

__int64 __fastcall _lambda_faddf15670103b2154840e6f822293f4_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<PenButtonActionData>::InternalCallback<PenButtonActionData>(a4, a5, a6);
  return 0LL;
}
