/*
 * XREFs of VidSchiBlockDriverCallback @ 0x14008F928
 * Callers:
 *     VidSchiReportHwHang @ 0x140044F38 (VidSchiReportHwHang.c)
 *     VidSchQueryDmaData @ 0x14008F83C (VidSchQueryDmaData.c)
 *     VidSchFlushAdapter @ 0x1400A6CB0 (VidSchFlushAdapter.c)
 *     VidSchPrepareForRecovery @ 0x1400A7EF0 (VidSchPrepareForRecovery.c)
 *     VidSchQueryDmaHeader @ 0x1400A7F1C (VidSchQueryDmaHeader.c)
 *     VidSchTerminateAdapter @ 0x1400FAED0 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBlockDriverCallback(__int64 a1)
{
  __int64 v1; // r9
  char v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 32);
  v3 = 0;
  DpSynchronizeExecution(*(_QWORD *)(a1 + 24), VidSchiBlockInterruptCallbackAtISR, a1, v1, &v3);
  KeFlushQueuedDpcs();
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), 0LL);
  KeFlushQueuedDpcs();
}
