/*
 * XREFs of CloseHandle_0 @ 0x1800732B4
 * Callers:
 *     ReportHangInternal @ 0x18009C0A8 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall CloseHandle_0(HANDLE hObject)
{
  return CloseHandle(hObject);
}
