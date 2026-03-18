/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1404A8000
 * Callers:
 *     CcInitializeProcessor @ 0x1406FAC40 (CcInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140705760 (IopQueryProcessorInitValues.c)
 *     ObInitializeProcessor @ 0x140737198 (ObInitializeProcessor.c)
 *     PsChangeQuantumTable @ 0x1409C0FF8 (PsChangeQuantumTable.c)
 *     IopMountVolume @ 0x140A1F624 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140FC420C;
}
