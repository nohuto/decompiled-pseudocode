/*
 * XREFs of EmonSaveProfilingContextEnhanced @ 0x140B51710
 * Callers:
 *     <none>
 * Callees:
 *     EmonSaveProfilingContextInternalEnhanced @ 0x14055C1DC (EmonSaveProfilingContextInternalEnhanced.c)
 */

__int64 EmonSaveProfilingContextEnhanced()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  EmonSaveProfilingContextInternalEnhanced(0, Number);
  return EmonSaveProfilingContextInternalEnhanced(1, Number);
}
