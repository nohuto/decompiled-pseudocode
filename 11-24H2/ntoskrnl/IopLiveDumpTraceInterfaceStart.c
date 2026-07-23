/*
 * XREFs of IopLiveDumpTraceInterfaceStart @ 0x14059ACCC
 * Callers:
 *     IoDiscardDeferredLiveDumpData @ 0x14059497C (IoDiscardDeferredLiveDumpData.c)
 *     IoWriteDeferredLiveDumpData @ 0x140594B84 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405A0300 (IopLiveDumpTraceNoArgs.c)
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
