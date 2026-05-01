/*
 * XREFs of GetLastError_0 @ 0x1801C7908
 * Callers:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetLastError_0()
{
  return GetLastError();
}
