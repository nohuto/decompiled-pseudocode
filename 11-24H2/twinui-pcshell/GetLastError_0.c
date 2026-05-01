/*
 * XREFs of GetLastError_0 @ 0x1802D2A68
 * Callers:
 *     ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802DFC4C (-throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetLastError_0()
{
  return GetLastError();
}
