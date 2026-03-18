/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x140730020
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404AC6F0 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
