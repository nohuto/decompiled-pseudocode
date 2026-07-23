/*
 * XREFs of PopSystemTimeToLocalTime @ 0x1404B1D9C
 * Callers:
 *     PopDiagTraceSmartSuspendPrediction @ 0x140756168 (PopDiagTraceSmartSuspendPrediction.c)
 *     PopDiagTraceSmartSuspendValidation @ 0x140A8C384 (PopDiagTraceSmartSuspendValidation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 */

struct _LIST_ENTRY *PopSystemTimeToLocalTime()
{
  struct _LIST_ENTRY *result; // rax
  __int64 v1; // rdx
  _QWORD *v2; // r9

  result = PsGetCurrentServerSiloGlobals();
  *v2 = v1 - (unsigned __int64)result[76].Blink[27].Blink;
  return result;
}
