/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x14046F158
 * Callers:
 *     SepTokenDeleteMethod @ 0x1409A7370 (SepTokenDeleteMethod.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A0E024 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x14046F170 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
