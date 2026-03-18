/*
 * XREFs of KeResumeDynamicTracing @ 0x1405C960C
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

void KeResumeDynamicTracing()
{
  _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFB);
}
