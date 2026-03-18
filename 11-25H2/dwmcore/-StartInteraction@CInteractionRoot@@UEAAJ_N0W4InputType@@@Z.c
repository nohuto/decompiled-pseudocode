/*
 * XREFs of ?StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z @ 0x18021C660
 * Callers:
 *     <none>
 * Callees:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x18021C6C8 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 */

__int64 __fastcall CInteractionRoot::StartInteraction(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return CInteractionProcessor::StartInteraction(a1 + 24, a2, a3, 0LL, a4);
}
