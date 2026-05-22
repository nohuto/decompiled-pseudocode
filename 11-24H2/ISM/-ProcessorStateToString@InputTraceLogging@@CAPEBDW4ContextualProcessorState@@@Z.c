/*
 * XREFs of ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x18007F51C
 * Callers:
 *     ?OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z @ 0x180017568 (-OnFocusRequest@ContextualProcessing@InputTraceLogging@@SAXPEBGW4ContextualProcessorState@@@Z.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x18001AC20 (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUHitTestInfo@@PEBGW4ContextualProcessor.c)
 *     ?Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorState@@W4ContextualProcessorDecision@@2_NPEBUIInputTarget@@4444@Z @ 0x18001C684 (-Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorSt.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ProcessorStateToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Ignore";
  v1 = a1 - 1;
  if ( !v1 )
    return "Buffer";
  v2 = v1 - 1;
  if ( !v2 )
    return "Handle";
  if ( v2 == 1 )
    return "Listen";
  return "UNKNOWN";
}
