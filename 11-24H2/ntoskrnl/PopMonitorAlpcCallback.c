/*
 * XREFs of PopMonitorAlpcCallback @ 0x140A7A840
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x140A7A858 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop(CallbackContext, Argument1, Argument2);
}
