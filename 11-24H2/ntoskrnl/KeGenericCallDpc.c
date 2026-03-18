/*
 * XREFs of KeGenericCallDpc @ 0x140494DA0
 * Callers:
 *     MiDbgCopyMemory @ 0x14067E4A8 (MiDbgCopyMemory.c)
 *     MiApplyImageHotPatch @ 0x1407F16A0 (MiApplyImageHotPatch.c)
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateGuidFilterData @ 0x1409F3CA8 (EtwpUpdateGuidFilterData.c)
 *     KiInitializeDynamicProcessor @ 0x140B57558 (KiInitializeDynamicProcessor.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405C01CC (KiCpuPartitionCheckGenericDpc.c)
 */

char __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (WORD2(xmmword_140FC5B10) & 0x200) != 0 )
    KiCpuPartitionCheckGenericDpc(a1);
  v5[0] = a1;
  v5[1] = a2;
  return KeGenericProcessorCallback(
           0LL,
           (char (__fastcall *)(__int64, __int64))KiGenericCallDpcInitiatorWorker,
           (__int64)v5,
           1);
}
