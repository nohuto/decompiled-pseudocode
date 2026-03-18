/*
 * XREFs of RtlpFcGetBufferManager @ 0x1406FC0E0
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1403A7E90 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1405E8FE0 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x1405E9080 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1405E9260 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

void *RtlpFcGetBufferManager()
{
  return &unk_140EF6F88;
}
