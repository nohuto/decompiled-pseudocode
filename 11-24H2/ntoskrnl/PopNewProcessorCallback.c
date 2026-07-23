/*
 * XREFs of PopNewProcessorCallback @ 0x140746FE0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckSkipTick @ 0x140746F0C (PopCheckSkipTick.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407485F0 (PpmIdleRegisterDefaultStates.c)
 *     PpmEnableWmiInterface @ 0x14075B214 (PpmEnableWmiInterface.c)
 *     PpmCheckInitProcessors @ 0x140AC506C (PpmCheckInitProcessors.c)
 */

void __fastcall PopNewProcessorCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    if ( !PoSkipTickMode && PopSkipTickPolicy == 1 )
      PoSkipTickMode = !PopCheckSkipTick();
    PpmCheckInitProcessors(0LL, 1LL, OperationStatus);
    PpmEnableWmiInterface();
    PpmIdleRegisterDefaultStates();
  }
}
