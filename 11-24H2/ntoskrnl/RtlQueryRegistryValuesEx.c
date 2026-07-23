/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1409B4D70
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140490C40 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1405E6A04 (RtlpFindRegTziForCurrentYear.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1405EC858 (RtlpEtcGetDwordFromRegistry.c)
 *     CarReadRegistry @ 0x140617F28 (CarReadRegistry.c)
 *     DifRtlQueryRegistryValuesExWrapper @ 0x140638840 (DifRtlQueryRegistryValuesExWrapper.c)
 *     DifRtlQueryRegistryValuesWrapper @ 0x1406389E0 (DifRtlQueryRegistryValuesWrapper.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x14064AE1C (EtwpGetCurrentSiloMaxLoggers.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x14064B27C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x14064B528 (EtwpQuerySiloRegistrySettings.c)
 *     sub_14065402C @ 0x14065402C (sub_14065402C.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C1E8F4 (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140C3F978 (EtwpReadConfigParameters.c)
 *     CmIsLastKnownGoodBoot @ 0x140C47A28 (CmIsLastKnownGoodBoot.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C5F1A4 (VhdAutoAttachVirtualDisks.c)
 *     SmQueryRegistry @ 0x140C68C34 (SmQueryRegistry.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  ULONG v6; // [rsp+20h] [rbp-18h]

  return RtlpQueryRegistryValues(RelativeTo, (int)Path, (int)QueryTable, (int)Context, v6, 1);
}
