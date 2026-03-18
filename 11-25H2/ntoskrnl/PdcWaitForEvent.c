/*
 * XREFs of PdcWaitForEvent @ 0x14077EEF4
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x14077EA30 (Pdcv2pActivationClientCallback.c)
 *     Pdcv2ActivationClientDeactivate @ 0x14096DDD8 (Pdcv2ActivationClientDeactivate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PdcWaitForEvent(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
