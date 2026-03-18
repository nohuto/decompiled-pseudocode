/*
 * XREFs of IoUnregisterBootDriverCallback @ 0x140C22A10
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404ADD30 (ExUnregisterCallback.c)
 */

void __fastcall IoUnregisterBootDriverCallback(void *a1)
{
  ExUnregisterCallback(a1);
}
