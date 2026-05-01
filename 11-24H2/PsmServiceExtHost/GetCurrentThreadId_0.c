/*
 * XREFs of GetCurrentThreadId_0 @ 0x180073178
 * Callers:
 *     ReportHangInternal @ 0x18009C398 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
