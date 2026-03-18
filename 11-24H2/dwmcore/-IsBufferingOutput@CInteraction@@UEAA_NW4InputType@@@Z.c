/*
 * XREFs of ?IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z @ 0x180224250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteraction::IsBufferingOutput(__int64 a1, unsigned int a2)
{
  return CInteractionProcessor::IsBufferingOutput(a1 + 288, a2);
}
