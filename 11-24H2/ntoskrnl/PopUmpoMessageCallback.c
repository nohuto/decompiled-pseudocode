/*
 * XREFs of PopUmpoMessageCallback @ 0x140442A10
 * Callers:
 *     ExNotifyCallback @ 0x14027DB30 (ExNotifyCallback.c)
 *     IopSessionChangeWorker @ 0x1404426C0 (IopSessionChangeWorker.c)
 *     ExNotifyWithProcessing @ 0x140442804 (ExNotifyWithProcessing.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     PopUmpoProcessMessages @ 0x140A17FA0 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
