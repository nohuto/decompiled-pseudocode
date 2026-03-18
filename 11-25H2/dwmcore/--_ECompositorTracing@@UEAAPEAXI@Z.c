/*
 * XREFs of ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x18025E830
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_@@CA@XZ @ 0x1802D73E0 (-_lambda_invoker_cdecl_@_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_@@CA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18025E6D0 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

CompositorTracing *__fastcall CompositorTracing::`vector deleting destructor'(CompositorTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
