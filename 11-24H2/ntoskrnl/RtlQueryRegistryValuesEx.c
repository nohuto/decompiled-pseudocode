/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1409CC2F0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1404962B0 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1405E94B4 (RtlpFindRegTziForCurrentYear.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1405EF278 (RtlpEtcGetDwordFromRegistry.c)
 *     CarReadRegistry @ 0x140619968 (CarReadRegistry.c)
 *     DifRtlQueryRegistryValuesExWrapper @ 0x14063A280 (DifRtlQueryRegistryValuesExWrapper.c)
 *     DifRtlQueryRegistryValuesWrapper @ 0x14063A420 (DifRtlQueryRegistryValuesWrapper.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x14064C80C (EtwpGetCurrentSiloMaxLoggers.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x14064CC6C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x14064CF18 (EtwpQuerySiloRegistrySettings.c)
 *     sub_14065592C @ 0x14065592C (sub_14065592C.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C1C8B4 (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140C3D828 (EtwpReadConfigParameters.c)
 *     CmIsLastKnownGoodBoot @ 0x140C458D8 (CmIsLastKnownGoodBoot.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C5D04C (VhdAutoAttachVirtualDisks.c)
 *     SmQueryRegistry @ 0x140C66AB8 (SmQueryRegistry.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1409CC350 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(int a1, int a2, int a3, int a4)
{
  ULONG v5; // [rsp+20h] [rbp-18h]

  return RtlpQueryRegistryValues(a1, a2, a3, a4, v5, 1);
}
