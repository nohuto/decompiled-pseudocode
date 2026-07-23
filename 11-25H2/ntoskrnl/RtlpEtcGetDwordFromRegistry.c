/*
 * XREFs of RtlpEtcGetDwordFromRegistry @ 0x1405E2F64
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x1405E2CF0 (RtlIsFeatureEnabledForEnterprise.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x1405E2E98 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x1405E2FE0 (RtlpEtcIsValidFeatureId.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B3F70 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS __fastcall RtlpEtcGetDwordFromRegistry(PCWSTR Path, wchar_t *a2, void *a3)
{
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-78h] BYREF

  memset_0(&QueryTable, 0, 0x70uLL);
  QueryTable.Flags = 308;
  QueryTable.Name = a2;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.EntryContext = a3;
  return RtlQueryRegistryValuesEx(0, Path, &QueryTable, 0LL, 0LL);
}
