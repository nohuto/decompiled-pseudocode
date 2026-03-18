/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14077F130
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404AC6F0 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140E677C0);
  ExUnregisterCallback(a1);
}
