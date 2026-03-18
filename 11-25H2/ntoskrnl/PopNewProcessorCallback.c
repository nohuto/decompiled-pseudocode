/*
 * XREFs of PopNewProcessorCallback @ 0x14073CCE0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckSkipTick @ 0x14073CC0C (PopCheckSkipTick.c)
 *     PpmIdleRegisterDefaultStates @ 0x14073E1EC (PpmIdleRegisterDefaultStates.c)
 *     PpmEnableWmiInterface @ 0x14074F964 (PpmEnableWmiInterface.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
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
