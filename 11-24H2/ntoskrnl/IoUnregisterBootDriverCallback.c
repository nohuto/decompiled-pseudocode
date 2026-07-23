/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140C24A40
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404A8640 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
