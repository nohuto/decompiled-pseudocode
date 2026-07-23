/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x140468578
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x140A3B0C0 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x140468590 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
