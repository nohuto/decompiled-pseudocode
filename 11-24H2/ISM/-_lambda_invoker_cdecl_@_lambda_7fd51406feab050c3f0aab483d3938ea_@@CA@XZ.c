/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_7fd51406feab050c3f0aab483d3938ea_@@CA@XZ @ 0x180074600
 * Callers:
 *     <none>
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800746B4 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

void __fastcall _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_()
{
  WINBOOL v0; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v0 = 0;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 1u, &v0, (LPVOID *)&v1) )
  {
    if ( !v0 )
      wil::TraceLoggingProvider::~TraceLoggingProvider(v1);
  }
}
