/*
 * XREFs of RtlQueryRegistryValues @ 0x1800869A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180085770 (RtlpQueryRegistryValues.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(
           *(__int64 *)&RelativeTo,
           Path,
           (__int64)QueryTable,
           (__int64)Context,
           (__int64)Environment,
           0);
}
