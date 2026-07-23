/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1404A33F0
 * Callers:
 *     CcInitializeProcessor @ 0x1407046E0 (CcInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x14070F3F0 (IopQueryProcessorInitValues.c)
 *     ObInitializeProcessor @ 0x1407410E8 (ObInitializeProcessor.c)
 *     IopMountVolume @ 0x140A1DB24 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x140A261A0 (PsChangeQuantumTable.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140FC521C;
}
