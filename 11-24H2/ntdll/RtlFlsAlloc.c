/*
 * XREFs of RtlFlsAlloc @ 0x1800B0E60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFlsAlloc @ 0x1800B0E88 (RtlpFlsAlloc.c)
 */

NTSTATUS __cdecl RtlFlsAlloc(PFLS_CALLBACK_FUNCTION Callback, PULONG FlsIndex)
{
  return RtlpFlsAlloc(&RtlpFlsContext, (__int64)FlsIndex);
}
