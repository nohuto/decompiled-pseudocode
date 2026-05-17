/*
 * XREFs of RtlFlushHeaps @ 0x1801117E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlFlushHeaps()
{
  return RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpFlushHeapsCallback, 0LL, 4);
}
