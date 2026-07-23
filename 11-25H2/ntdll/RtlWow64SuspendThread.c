/*
 * XREFs of RtlWow64SuspendThread @ 0x180112F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64SuspendThread(void *a1, ULONG *a2)
{
  return RtlpWow64SuspendThread(a1, 0LL, a2);
}
