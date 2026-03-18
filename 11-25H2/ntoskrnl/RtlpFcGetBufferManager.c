/*
 * XREFs of RtlpFcGetBufferManager @ 0x1406F0300
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1403BA040 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x1405DCE90 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x1405DCF30 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1405DD110 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

void *RtlpFcGetBufferManager()
{
  return &unk_140EF6BE8;
}
