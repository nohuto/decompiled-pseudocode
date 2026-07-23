/*
 * XREFs of IopLiveDumpTraceNoArgs @ 0x1405A0300
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140594B84 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140596AE8 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCollectPages @ 0x1405971E8 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x1405975E0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x140597850 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpStartMirroringCallback @ 0x14059A110 (IopLiveDumpStartMirroringCallback.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14059ACCC (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059B3A0 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 */

char IopLiveDumpTraceNoArgs()
{
  char result; // al

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return IopLiveDumpTrace();
  return result;
}
