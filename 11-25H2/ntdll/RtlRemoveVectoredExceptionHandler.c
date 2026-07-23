/*
 * XREFs of RtlRemoveVectoredExceptionHandler @ 0x18010ECB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlRemoveVectoredExceptionHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler((void **)Handle, 0);
}
