/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1409B3F70
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140496A80 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1405DD364 (RtlpFindRegTziForCurrentYear.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1405E2F64 (RtlpEtcGetDwordFromRegistry.c)
 *     CarReadRegistry @ 0x14060D9A8 (CarReadRegistry.c)
 *     DifRtlQueryRegistryValuesExWrapper @ 0x14062E2C0 (DifRtlQueryRegistryValuesExWrapper.c)
 *     DifRtlQueryRegistryValuesWrapper @ 0x14062E460 (DifRtlQueryRegistryValuesWrapper.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1406407EC (EtwpGetCurrentSiloMaxLoggers.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140640C4C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x140640EF8 (EtwpQuerySiloRegistrySettings.c)
 *     sub_140649A2C @ 0x140649A2C (sub_140649A2C.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C0B6E0 (IopInitCrashDumpDuringSysInit.c)
 *     EtwpReadConfigParameters @ 0x140C2C548 (EtwpReadConfigParameters.c)
 *     CmIsLastKnownGoodBoot @ 0x140C3461C (CmIsLastKnownGoodBoot.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C4BCCC (VhdAutoAttachVirtualDisks.c)
 *     SmQueryRegistry @ 0x140C54E30 (SmQueryRegistry.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1409B3FD0 (RtlpQueryRegistryValues.c)
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
