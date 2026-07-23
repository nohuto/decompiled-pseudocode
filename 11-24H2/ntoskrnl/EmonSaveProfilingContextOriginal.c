/*
 * XREFs of EmonSaveProfilingContextOriginal @ 0x140B51740
 * Callers:
 *     <none>
 * Callees:
 *     EmonSaveProfilingContextInternalOriginal @ 0x14055C294 (EmonSaveProfilingContextInternalOriginal.c)
 */

void EmonSaveProfilingContextOriginal()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  EmonSaveProfilingContextInternalOriginal(0, Number);
  EmonSaveProfilingContextInternalOriginal(1, Number);
}
