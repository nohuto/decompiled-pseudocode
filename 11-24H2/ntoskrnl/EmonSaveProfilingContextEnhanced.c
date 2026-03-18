/*
 * XREFs of EmonSaveProfilingContextEnhanced @ 0x140B4F6C0
 * Callers:
 *     <none>
 * Callees:
 *     EmonSaveProfilingContextInternalEnhanced @ 0x14055E5AC (EmonSaveProfilingContextInternalEnhanced.c)
 */

__int64 EmonSaveProfilingContextEnhanced()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  EmonSaveProfilingContextInternalEnhanced(0, Number);
  return EmonSaveProfilingContextInternalEnhanced(1, Number);
}
