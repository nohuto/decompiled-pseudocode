/*
 * XREFs of ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z @ 0x180262880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionRoot::HasBufferedOutput(__int64 a1, unsigned int a2)
{
  return CInteractionProcessor::HasBufferedOutput(a1 + 24, a2);
}
