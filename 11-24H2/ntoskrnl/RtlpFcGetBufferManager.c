/*
 * XREFs of RtlpFcGetBufferManager @ 0x1406F9D20
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x140496030 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1405E6530 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x1405E65D0 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1405E67B0 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

void *RtlpFcGetBufferManager()
{
  return &unk_140EF71C8;
}
