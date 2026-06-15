/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_c38bfd10498b2e9fce262131177562b7_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18014B1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@QEAAXPEBW4ShellState@Holographic@Shell@Internal@Windows@@K@Z @ 0x18014B23C (--$InternalCallback@W4ShellState@Holographic@Shell@Internal@Windows@@@-$wnf_subscription_state@W.c)
 */

__int64 __fastcall _lambda_c38bfd10498b2e9fce262131177562b7_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>::InternalCallback<enum Windows::Internal::Shell::Holographic::ShellState>(
      a4,
      a5,
      a6);
  return 0LL;
}
