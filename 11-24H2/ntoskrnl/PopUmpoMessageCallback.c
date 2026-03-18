/*
 * XREFs of PopUmpoMessageCallback @ 0x14044B8D0
 * Callers:
 *     ExNotifyCallback @ 0x14024D520 (ExNotifyCallback.c)
 *     IopSessionChangeWorker @ 0x14044B580 (IopSessionChangeWorker.c)
 *     ExNotifyWithProcessing @ 0x14044B6C4 (ExNotifyWithProcessing.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     PopUmpoProcessMessages @ 0x140A23B90 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
