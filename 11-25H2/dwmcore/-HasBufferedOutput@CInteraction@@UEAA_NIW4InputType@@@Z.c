/*
 * XREFs of ?HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z @ 0x180237160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteraction::HasBufferedOutput(__int64 a1, unsigned int a2)
{
  return CInteractionProcessor::HasBufferedOutput(a1 + 288, a2);
}
