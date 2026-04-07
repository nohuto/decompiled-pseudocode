/*
 * XREFs of ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18009E170
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_87e3050d7bd177bdce03acb9ca29079f_@@CA@XZ @ 0x1800A2650 (-_lambda_invoker_cdecl_@_lambda_87e3050d7bd177bdce03acb9ca29079f_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_522324fbb5dde8754aa82d91ec00ee97_@@CA@XZ @ 0x1800C9BE0 (-_lambda_invoker_cdecl_@_lambda_522324fbb5dde8754aa82d91ec00ee97_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CA@XZ @ 0x1800F54C0 (-_lambda_invoker_cdecl_@_lambda_7c6f95392d1fa211f578d6d8eb47d107_@@CA@XZ.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18009E0AC (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

wil::TraceLoggingProvider *__fastcall wil::TraceLoggingProvider::`vector deleting destructor'(
        wil::TraceLoggingProvider *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl
  const struct std::nothrow_t *v5; // rdx

  v3 = a2;
  wil::TraceLoggingProvider::~TraceLoggingProvider(this, a2, a3);
  if ( (v3 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v5);
  return this;
}
