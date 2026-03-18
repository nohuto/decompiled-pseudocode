/*
 * XREFs of ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x180227E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::CanSkipChildren(CInteraction *this)
{
  return CInteractionProcessor::CanSkipChildren((CInteraction *)((char *)this + 288));
}
