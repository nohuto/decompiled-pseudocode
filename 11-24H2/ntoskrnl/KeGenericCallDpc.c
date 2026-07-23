/*
 * XREFs of KeGenericCallDpc @ 0x14048F660
 * Callers:
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 *     MiApplyImageHotPatch @ 0x1407F1C70 (MiApplyImageHotPatch.c)
 *     EtwpUpdateGuidFilterData @ 0x1409E8008 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 *     KiInitializeDynamicProcessor @ 0x140B595D8 (KiInitializeDynamicProcessor.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405BD7FC (KiCpuPartitionCheckGenericDpc.c)
 */

char __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (WORD2(xmmword_140FC6B50) & 0x200) != 0 )
    KiCpuPartitionCheckGenericDpc(a1);
  v5[0] = a1;
  v5[1] = a2;
  return KeGenericProcessorCallback(
           0LL,
           (char (__fastcall *)(__int64, __int64))KiGenericCallDpcInitiatorWorker,
           (__int64)v5,
           1);
}
