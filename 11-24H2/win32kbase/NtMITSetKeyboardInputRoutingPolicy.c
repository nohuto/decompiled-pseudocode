/*
 * XREFs of NtMITSetKeyboardInputRoutingPolicy @ 0x1400BB2A0
 * Callers:
 *     <none>
 * Callees:
 *     IsInputProcessingActivated @ 0x140048E30 (IsInputProcessingActivated.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     SetKeyboardInputRoutingPolicy @ 0x140213370 (SetKeyboardInputRoutingPolicy.c)
 */

__int64 __fastcall NtMITSetKeyboardInputRoutingPolicy(unsigned int a1)
{
  __int64 v2; // rcx

  if ( (unsigned __int8)IsInputThread() && IsInputProcessingActivated(v2) )
    return SetKeyboardInputRoutingPolicy(a1);
  else
    return 3221225506LL;
}
