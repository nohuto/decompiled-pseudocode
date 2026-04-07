/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_87e3050d7bd177bdce03acb9ca29079f_@@CA@XZ @ 0x1800A2650
 * Callers:
 *     <none>
 * Callees:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18009E170 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

unsigned int _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_(void)
{
  unsigned int result; // eax
  __int64 v1; // r8
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  result = InitOnceBeginInitialize(&`UDwmTrace::Instance'::`2'::wrapper, 1u, &v2, (LPVOID *)&v3);
  if ( result )
  {
    if ( !v2 )
      return (unsigned int)wil::TraceLoggingProvider::`vector deleting destructor'(v3, 0LL, v1);
  }
  return result;
}
