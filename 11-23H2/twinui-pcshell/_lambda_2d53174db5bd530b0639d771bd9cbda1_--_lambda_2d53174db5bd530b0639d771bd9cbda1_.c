/*
 * XREFs of _lambda_2d53174db5bd530b0639d771bd9cbda1_::_lambda_2d53174db5bd530b0639d771bd9cbda1_ @ 0x1801FE2D8
 * Callers:
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x1800F3DDC (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall lambda_2d53174db5bd530b0639d771bd9cbda1_::_lambda_2d53174db5bd530b0639d771bd9cbda1_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  if ( a1 != a2 )
  {
    v2 = *a2;
    *a2 = 0LL;
    *a1 = v2;
  }
  return a1;
}
