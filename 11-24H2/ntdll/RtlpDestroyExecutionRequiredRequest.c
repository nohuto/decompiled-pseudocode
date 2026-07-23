/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x18011C7E0
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x1801109D0 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     RtlpSetClearExecutionRequiredRequest @ 0x18011330C (RtlpSetClearExecutionRequiredRequest.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  RtlpSetClearExecutionRequiredRequest((__int64)Handle, 0LL, 0);
  return NtClose(Handle);
}
