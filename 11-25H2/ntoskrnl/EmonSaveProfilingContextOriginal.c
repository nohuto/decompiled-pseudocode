/*
 * XREFs of EmonSaveProfilingContextOriginal @ 0x140B3F6F0
 * Callers:
 *     <none>
 * Callees:
 *     EmonSaveProfilingContextInternalOriginal @ 0x14055BD64 (EmonSaveProfilingContextInternalOriginal.c)
 */

void EmonSaveProfilingContextOriginal()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  EmonSaveProfilingContextInternalOriginal(0, Number);
  EmonSaveProfilingContextInternalOriginal(1, Number);
}
