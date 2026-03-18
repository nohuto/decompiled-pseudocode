/*
 * XREFs of PopUmpoMessageCallback @ 0x14044C310
 * Callers:
 *     ExNotifyCallback @ 0x1402EACD0 (ExNotifyCallback.c)
 *     IopSessionChangeWorker @ 0x14044BFC0 (IopSessionChangeWorker.c)
 *     ExNotifyWithProcessing @ 0x14044C104 (ExNotifyWithProcessing.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     PopUmpoProcessMessages @ 0x140A18864 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
