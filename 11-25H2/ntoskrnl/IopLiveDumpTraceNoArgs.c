/*
 * XREFs of IopLiveDumpTraceNoArgs @ 0x14059FC50
 * Callers:
 *     IoCaptureLiveDump @ 0x1404D7188 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405944F8 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140596458 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpCollectPages @ 0x140596B54 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x140596F50 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEndMirroringCallback @ 0x1405971C0 (IopLiveDumpEndMirroringCallback.c)
 *     IopLiveDumpStartMirroringCallback @ 0x140599A80 (IopLiveDumpStartMirroringCallback.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14059A63C (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpUncorralProcessors @ 0x14059AD10 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F84C4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059F900 (IopLiveDumpTrace.c)
 */

char IopLiveDumpTraceNoArgs()
{
  char result; // al

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
    return IopLiveDumpTrace();
  return result;
}
