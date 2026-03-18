/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1404A8FD0
 * Callers:
 *     CcInitializeProcessor @ 0x140706B20 (CcInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140711860 (IopQueryProcessorInitValues.c)
 *     ObInitializeProcessor @ 0x1407431B8 (ObInitializeProcessor.c)
 *     IopMountVolume @ 0x140A29164 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x140A32230 (PsChangeQuantumTable.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140FC421C;
}
