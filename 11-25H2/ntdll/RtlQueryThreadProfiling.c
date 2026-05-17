/*
 * XREFs of RtlQueryThreadProfiling @ 0x1801344A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlQueryThreadProfiling(__int64 a1, __int64 a2)
{
  return ZwQueryInformationThread(a1, 32LL, a2);
}
