/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_576b8a055e1eddaf8c0f48bcebe2427e_@@CA@XZ @ 0x18068A0F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??_EGamingOverlayTelemetry@@UEAAPEAXI@Z @ 0x180326D40 (--_EGamingOverlayTelemetry@@UEAAPEAXI@Z.c)
 */

unsigned int _lambda_576b8a055e1eddaf8c0f48bcebe2427e_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-20h] BYREF

  Context = 0LL;
  fPending = 0;
  result = __std_init_once_begin_initialize(&`TaskbarPinningTelemetry::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (unsigned int)GamingOverlayTelemetry::`vector deleting destructor'((GamingOverlayTelemetry *)Context, 0);
  }
  return result;
}
