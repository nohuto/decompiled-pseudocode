/*
 * XREFs of VidSchIsTDRPending @ 0x140034DF0
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1400A67D4 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1400A690C (VidSchiResetEngines.c)
 *     VidSchFlushAdapter @ 0x1400A6CB0 (VidSchFlushAdapter.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1400B5C20 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPagingCommand @ 0x1400B6414 (VidSchiSubmitPagingCommand.c)
 *     VidSchiRun_PriorityTable @ 0x1400B68B0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400B6B20 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400B6C90 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400B7268 (VidSchiSubmitRenderCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1400E2E98 (VidSchSubmitPagingCommand.c)
 *     VidSchSwitchFromContext @ 0x1400E42E0 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1400E44D0 (VidSchSwitchFromDevice.c)
 *     VidSchiDrainFlipQueue @ 0x140103750 (VidSchiDrainFlipQueue.c)
 *     VidSchiPreemptEngineNodes @ 0x140110AD8 (VidSchiPreemptEngineNodes.c)
 *     VidSchiWaitForSchedulerEvents @ 0x140115A90 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 3244) != 0;
}
