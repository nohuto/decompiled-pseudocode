/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x140038378
 * Callers:
 *     VidSchiPrepareToResetEngine @ 0x1400A4F54 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1400A508C (VidSchiResetEngines.c)
 *     VidSchiCheckNodeTimeout @ 0x1400ADC80 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPagingCommand @ 0x1400AE064 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400AEEB8 (VidSchiSubmitRenderCommand.c)
 *     VidSchCreateSystemDevices @ 0x1400D7BAC (VidSchCreateSystemDevices.c)
 *     VidSchSubmitPagingCommand @ 0x1400E35C0 (VidSchSubmitPagingCommand.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1400E3910 (VidSchiSubmitHwPagingCommand.c)
 *     VidSchReportAdapter @ 0x140104F50 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x140106C90 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x14010D784 (VidSchiSerializeSchedulingLog.c)
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
