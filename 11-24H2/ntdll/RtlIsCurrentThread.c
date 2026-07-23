/*
 * XREFs of RtlIsCurrentThread @ 0x180106360
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x180161420 (NtCompareObjects.c)
 */

BOOLEAN __cdecl RtlIsCurrentThread(HANDLE ThreadHandle)
{
  return ThreadHandle == (HANDLE)-2LL || NtCompareObjects((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadHandle) >= 0;
}
