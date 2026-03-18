/*
 * XREFs of PopNewProcessorCallback @ 0x140748CF0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckSkipTick @ 0x140748C1C (PopCheckSkipTick.c)
 *     PpmIdleRegisterDefaultStates @ 0x14074A2C0 (PpmIdleRegisterDefaultStates.c)
 *     PpmEnableWmiInterface @ 0x14075C1E4 (PpmEnableWmiInterface.c)
 *     PpmCheckInitProcessors @ 0x140AC75E0 (PpmCheckInitProcessors.c)
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
