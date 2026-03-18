/*
 * XREFs of KeGenericCallDpc @ 0x140495940
 * Callers:
 *     MiDbgCopyMemory @ 0x140672C90 (MiDbgCopyMemory.c)
 *     MiApplyImageHotPatch @ 0x1407E1800 (MiApplyImageHotPatch.c)
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 *     EtwpUpdateGuidFilterData @ 0x1409E5684 (EtwpUpdateGuidFilterData.c)
 *     KiInitializeDynamicProcessor @ 0x140B475B8 (KiInitializeDynamicProcessor.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405BC29C (KiCpuPartitionCheckGenericDpc.c)
 */

__int64 __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
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
