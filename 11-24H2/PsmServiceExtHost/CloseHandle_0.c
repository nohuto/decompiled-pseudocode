/*
 * XREFs of CloseHandle_0 @ 0x180073184
 * Callers:
 *     ReportHangInternal @ 0x18009C398 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall CloseHandle_0(HANDLE hObject)
{
  return CloseHandle(hObject);
}
