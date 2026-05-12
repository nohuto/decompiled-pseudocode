/*
 * XREFs of StorPortAdapterPoFxD3Completion @ 0x14003D740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorPortAdapterPoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context)
{
  if ( *((_DWORD *)Context + 242) > 1u )
    KeCancelTimer((PKTIMER)(Context + 5792));
  Context[107] &= ~4u;
}
