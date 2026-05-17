/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x18011E5B0
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800444B0 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     RtlpSetClearExecutionRequiredRequest @ 0x180118398 (RtlpSetClearExecutionRequiredRequest.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  RtlpSetClearExecutionRequiredRequest((__int64)Handle, 0LL, 0);
  return NtClose(Handle);
}
