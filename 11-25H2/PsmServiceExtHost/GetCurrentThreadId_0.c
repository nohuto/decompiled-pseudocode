/*
 * XREFs of GetCurrentThreadId_0 @ 0x1800732A8
 * Callers:
 *     ReportHangInternal @ 0x18009C0A8 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
