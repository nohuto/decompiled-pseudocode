/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x14073A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404A8640 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
