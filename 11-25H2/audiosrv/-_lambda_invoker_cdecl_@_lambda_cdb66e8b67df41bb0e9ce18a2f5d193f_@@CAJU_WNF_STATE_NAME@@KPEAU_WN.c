/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_cdb66e8b67df41bb0e9ce18a2f5d193f_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800CB3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@W4_PO_STANDBY_AUDIO_POLICY@@@?$wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@QEAAXPEBW4_PO_STANDBY_AUDIO_POLICY@@K@Z @ 0x1800CB774 (--$InternalCallback@W4_PO_STANDBY_AUDIO_POLICY@@@-$wnf_subscription_state@W4_PO_STANDBY_AUDIO_PO.c)
 */

__int64 __fastcall _lambda_cdb66e8b67df41bb0e9ce18a2f5d193f_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<enum _PO_STANDBY_AUDIO_POLICY>::InternalCallback<enum _PO_STANDBY_AUDIO_POLICY>(
      a4,
      a5,
      a6);
  return 0LL;
}
