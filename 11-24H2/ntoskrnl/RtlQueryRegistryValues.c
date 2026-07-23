/*
 * XREFs of RtlQueryRegistryValues @ 0x1409B4D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  ULONG v6; // [rsp+20h] [rbp-18h]

  return RtlpQueryRegistryValues(RelativeTo, (int)Path, (int)QueryTable, (int)Context, v6, 0);
}
