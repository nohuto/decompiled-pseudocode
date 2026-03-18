/*
 * XREFs of PdcResetEvent @ 0x1405FB2C0
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x14077EA30 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 */

LONG __fastcall PdcResetEvent(struct _KEVENT *a1)
{
  return KeResetEvent(a1);
}
