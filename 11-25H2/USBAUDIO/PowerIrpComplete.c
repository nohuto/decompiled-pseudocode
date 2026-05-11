/*
 * XREFs of PowerIrpComplete @ 0x14000B8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PowerIrpComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context)
{
  KeSetEvent((PRKEVENT)(Context + 560), 0, 0);
  KeReleaseSemaphore((PRKSEMAPHORE)Context + 21, 0, 1, 0);
}
