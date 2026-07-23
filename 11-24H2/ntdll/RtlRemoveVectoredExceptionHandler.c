/*
 * XREFs of RtlRemoveVectoredExceptionHandler @ 0x1801079A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlRemoveVectoredExceptionHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler((void **)Handle, 0);
}
