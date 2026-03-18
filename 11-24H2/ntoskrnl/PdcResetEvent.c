/*
 * XREFs of PdcResetEvent @ 0x140607600
 * Callers:
 *     Pdcv2pActivationClientCallback @ 0x14078DCF0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 */

LONG __fastcall PdcResetEvent(struct _KEVENT *a1)
{
  return KeResetEvent(a1);
}
