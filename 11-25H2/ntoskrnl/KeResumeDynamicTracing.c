/*
 * XREFs of KeResumeDynamicTracing @ 0x1405C4FE0
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

void KeResumeDynamicTracing()
{
  _InterlockedAnd(&KiDynamicTraceMask, 0xFFFFFFFB);
}
