/*
 * XREFs of RtlQueryRegistryValues @ 0x1800B7370
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1800B6140 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValues(__int64 a1, const wchar_t *a2, __int64 a3, __int64 a4, __int64 a5)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4, a5, 0);
}
