/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x18011FE80
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     RtlpSetClearExecutionRequiredRequest @ 0x18011B41C (RtlpSetClearExecutionRequiredRequest.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  RtlpSetClearExecutionRequiredRequest((__int64)Handle, 0LL, 0);
  return NtClose(Handle);
}
