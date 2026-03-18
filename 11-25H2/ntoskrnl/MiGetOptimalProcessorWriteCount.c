/*
 * XREFs of MiGetOptimalProcessorWriteCount @ 0x1404B5118
 * Callers:
 *     MiInitializeZeroEngines @ 0x1407EF53C (MiInitializeZeroEngines.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetOptimalProcessorWriteCount(unsigned int a1, int a2, __int64 a3, int a4)
{
  return *(unsigned int *)(*(_QWORD *)(384LL * a1 + qword_140E2D8B8 + 376) + 8 * (a4 + 21LL * a2) + 164);
}
