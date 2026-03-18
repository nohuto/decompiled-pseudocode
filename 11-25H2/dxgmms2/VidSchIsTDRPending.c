/*
 * XREFs of VidSchIsTDRPending @ 0x1400362C0
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1400A4F54 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1400A508C (VidSchiResetEngines.c)
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 *     VidSchWaitForCompletionEvent @ 0x1400AD1D4 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1400AD870 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPagingCommand @ 0x1400AE064 (VidSchiSubmitPagingCommand.c)
 *     VidSchiRun_PriorityTable @ 0x1400AE500 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400AE770 (VidSchiSubmitQueueCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400AE8E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400AEEB8 (VidSchiSubmitRenderCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1400E35C0 (VidSchSubmitPagingCommand.c)
 *     VidSchSwitchFromContext @ 0x1400E4940 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1400E4B30 (VidSchSwitchFromDevice.c)
 *     VidSchiDrainFlipQueue @ 0x1401057C0 (VidSchiDrainFlipQueue.c)
 *     VidSchiPreemptEngineNodes @ 0x140111D60 (VidSchiPreemptEngineNodes.c)
 *     VidSchiWaitForSchedulerEvents @ 0x140115870 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 3244) != 0;
}
