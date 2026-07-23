/*
 * XREFs of RtlFlsAlloc @ 0x1800097D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFlsAlloc @ 0x1800097F8 (RtlpFlsAlloc.c)
 */

NTSTATUS __cdecl RtlFlsAlloc(PFLS_CALLBACK_FUNCTION Callback, PULONG FlsIndex)
{
  return RtlpFlsAlloc(&RtlpFlsContext, (__int64)FlsIndex);
}
