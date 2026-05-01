/*
 * XREFs of DllCanUnloadNow @ 0x1801EBC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall DllCanUnloadNow()
{
  return WINRT_CanUnloadNow();
}
