/*
 * XREFs of GetTickCount_0 @ 0x1800732CC
 * Callers:
 *     ReportHangInternal @ 0x18009C0A8 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetTickCount_0()
{
  return GetTickCount();
}
