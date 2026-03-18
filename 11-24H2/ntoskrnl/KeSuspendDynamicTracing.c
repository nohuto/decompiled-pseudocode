/*
 * XREFs of KeSuspendDynamicTracing @ 0x1404CDEDC
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

void KeSuspendDynamicTracing()
{
  _InterlockedOr(&KiDynamicTraceMask, 4u);
}
