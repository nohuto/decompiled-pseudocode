/*
 * XREFs of PdcWaitForEvent @ 0x14078E1B4
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x14078DCF0 (Pdcv2pActivationClientCallback.c)
 *     Pdcv2ActivationClientDeactivate @ 0x1409EF760 (Pdcv2ActivationClientDeactivate.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PdcWaitForEvent(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
