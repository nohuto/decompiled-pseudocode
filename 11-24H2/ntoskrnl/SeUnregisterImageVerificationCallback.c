/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14078E320
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404A8640 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140E67C74);
  ExUnregisterCallback(a1);
}
