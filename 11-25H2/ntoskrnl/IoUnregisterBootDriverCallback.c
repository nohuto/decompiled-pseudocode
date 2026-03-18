/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140C11930
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404AC6F0 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
