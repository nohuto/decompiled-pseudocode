/*
 * XREFs of RtlFlushHeaps @ 0x18010CBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void RtlFlushHeaps(void)
{
  RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpFlushHeapsCallback, 0LL, 4);
}
