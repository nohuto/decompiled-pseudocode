/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14078E3F0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404ADD30 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140E67AC4);
  ExUnregisterCallback(a1);
}
