/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_2bd7833d1bf4bcca2b9a6ef873308bfb_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800A2CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@G@?$wnf_array_subscription_state@G@details@wil@@QEAAXPEBGK@Z @ 0x180088BB8 (--$InternalCallback@G@-$wnf_array_subscription_state@G@details@wil@@QEAAXPEBGK@Z.c)
 */

__int64 __fastcall _lambda_2bd7833d1bf4bcca2b9a6ef873308bfb_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        __int64 a4,
        const void *a5,
        unsigned int a6)
{
  wil::details::wnf_array_subscription_state<unsigned short>::InternalCallback<unsigned short>(a4, (__int64)a5, a6);
  return 0LL;
}
