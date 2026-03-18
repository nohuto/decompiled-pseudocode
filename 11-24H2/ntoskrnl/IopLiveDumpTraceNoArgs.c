/*
 * XREFs of IopLiveDumpTraceNoArgs @ 0x1405A33C0
 * Callers:
 *     IoCaptureLiveDump @ 0x1404E6068 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140597C08 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140599B68 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCollectPages @ 0x14059A264 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x14059A660 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x14059A8D0 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpStartMirroringCallback @ 0x14059D190 (IopLiveDumpStartMirroringCallback.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14059DD4C (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059E420 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404FA9A4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405A3070 (IopLiveDumpTrace.c)
 */

char IopLiveDumpTraceNoArgs()
{
  char result; // al

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return IopLiveDumpTrace();
  return result;
}
