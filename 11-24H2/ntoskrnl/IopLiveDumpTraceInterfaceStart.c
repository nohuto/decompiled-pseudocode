/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x14059DD4C
 * Callers:
 *     IoDiscardDeferredLiveDumpData @ 0x140597A00 (IoDiscardDeferredLiveDumpData.c)
 *     IoWriteDeferredLiveDumpData @ 0x140597C08 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404FA9A4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405A33C0 (IopLiveDumpTraceNoArgs.c)
 */

char IopLiveDumpTraceInterfaceStart()
{
  char result; // al
  int v1; // edx
  __int64 *v2; // rcx

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = LIVEDUMP_EVENT_WRITE_DEFERRED_DATA_API_START;
    if ( v1 != 1 )
      v2 = LIVEDUMP_EVENT_DISCARD_DEFERRED_DATA_API_START;
    return IopLiveDumpTraceNoArgs(v2);
  }
  return result;
}
