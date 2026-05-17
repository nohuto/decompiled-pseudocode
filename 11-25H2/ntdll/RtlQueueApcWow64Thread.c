/*
 * XREFs of RtlQueueApcWow64Thread @ 0x180135B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueueApcWow64Thread(__int64 a1, __int64 a2)
{
  return NtQueueApcThread(a1, -4 * a2);
}
