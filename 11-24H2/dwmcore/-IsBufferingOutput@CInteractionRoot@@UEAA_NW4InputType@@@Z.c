/*
 * XREFs of ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x180257740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionRoot::IsBufferingOutput(__int64 a1, unsigned int a2)
{
  return CInteractionProcessor::IsBufferingOutput(a1 + 24, a2);
}
