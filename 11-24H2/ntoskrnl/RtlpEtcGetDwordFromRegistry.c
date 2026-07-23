/*
 * XREFs of RtlpEtcGetDwordFromRegistry @ 0x1405EC858
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x1405EC610 (RtlIsFeatureEnabledForEnterprise.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x1405EC78C (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x1405EC8D4 (RtlpEtcIsValidFeatureId.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B4D70 (RtlQueryRegistryValuesEx.c)
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
