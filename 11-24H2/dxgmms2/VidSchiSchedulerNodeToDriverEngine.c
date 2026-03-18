/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x140036F0C
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1400A67D4 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1400A690C (VidSchiResetEngines.c)
 *     VidSchiCheckNodeTimeout @ 0x1400B6030 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPagingCommand @ 0x1400B6414 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400B7268 (VidSchiSubmitRenderCommand.c)
 *     VidSchCreateSystemDevices @ 0x1400D380C (VidSchCreateSystemDevices.c)
 *     VidSchSubmitPagingCommand @ 0x1400E2E98 (VidSchSubmitPagingCommand.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1400E31E8 (VidSchiSubmitHwPagingCommand.c)
 *     VidSchReportAdapter @ 0x140103130 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x140104DD0 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x14010B484 (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 688);
  if ( a2 < *(_DWORD *)(a1 + 760) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 6LL);
}
