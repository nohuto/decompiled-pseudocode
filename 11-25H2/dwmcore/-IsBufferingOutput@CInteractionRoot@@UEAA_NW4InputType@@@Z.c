/*
 * XREFs of ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x180262890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionRoot::IsBufferingOutput(__int64 a1)
{
  return CInteractionProcessor::IsBufferingOutput(a1 + 24);
}
