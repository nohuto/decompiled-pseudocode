/*
 * XREFs of _dynamic_initializer_for__g_header_init_ResultLoggingInitialize__ @ 0x180003020
 * Callers:
 *     <none>
 * Callees:
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z @ 0x1801B7F30 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z.c)
 */

__int64 dynamic_initializer_for__g_header_init_ResultLoggingInitialize__()
{
  __int64 result; // rax

  result = wil::SetResultTelemetryFallback();
  g_header_init_ResultLoggingInitialize = 1;
  return result;
}
