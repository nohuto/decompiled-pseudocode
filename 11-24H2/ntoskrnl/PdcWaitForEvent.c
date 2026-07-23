/*
 * XREFs of PdcWaitForEvent @ 0x14078E0E4
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x14078DC20 (Pdcv2pActivationClientCallback.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409ED030 (Pdcv2ActivationClientDeactivate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PdcWaitForEvent(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
