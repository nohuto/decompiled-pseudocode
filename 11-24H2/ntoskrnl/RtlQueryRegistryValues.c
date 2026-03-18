/*
 * XREFs of RtlQueryRegistryValues @ 0x1409CC2D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1409CC350 (RtlpQueryRegistryValues.c)
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
