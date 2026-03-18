/*
 * XREFs of ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x18021EFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::CompleteInteraction(CInteraction *this)
{
  return CInteractionProcessor::CompleteInteraction(
           (CInteraction *)((char *)this + 288),
           (struct IManipulationResource *)((*((_QWORD *)this + 26) + 80LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 26) >> 64)));
}
