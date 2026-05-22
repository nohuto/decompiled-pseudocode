/*
 * XREFs of ?GestureRecognizerStateToString@InputTraceLogging@@CAPEBDW4GestureRecognizerState@@@Z @ 0x180159498
 * Callers:
 *     ?StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4GestureRecognizerState@@1W4GestureOperationState@@@Z @ 0x180159FA0 (-StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4Gest.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::GestureRecognizerStateToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return "None";
  v1 = a1 - 1;
  if ( !v1 )
    return "GestureNotRecognized";
  v2 = v1 - 1;
  if ( !v2 )
    return "GestureRecognitionInProgress";
  v3 = v2 - 1;
  if ( !v3 )
    return "GestureRecognized";
  if ( v3 == 1 )
    return "GestureInProgress";
  return "UNKNOWN";
}
