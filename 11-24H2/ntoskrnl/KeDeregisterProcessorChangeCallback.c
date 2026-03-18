/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x14073C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1404ADD30 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
