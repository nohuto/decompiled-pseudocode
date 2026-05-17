/*
 * XREFs of RtlWow64SetThreadContext @ 0x180132390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64SetThreadContext(__int64 a1, __int64 a2)
{
  return NtSetInformationThread(a1, 29LL, a2);
}
