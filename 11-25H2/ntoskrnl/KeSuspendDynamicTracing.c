/*
 * XREFs of KeSuspendDynamicTracing @ 0x1404CE0FC
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     <none>
 */

void KeSuspendDynamicTracing()
{
  _InterlockedOr(&KiDynamicTraceMask, 4u);
}
