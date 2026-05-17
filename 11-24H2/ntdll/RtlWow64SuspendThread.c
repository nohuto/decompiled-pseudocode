/*
 * XREFs of RtlWow64SuspendThread @ 0x1801101A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64SuspendThread(__int64 a1, _DWORD *a2)
{
  return RtlpWow64SuspendThread(a1, 0LL, a2);
}
