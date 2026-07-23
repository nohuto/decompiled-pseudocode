/*
 * XREFs of RtlWnfDllUnloadCallback @ 0x18010E5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlWnfDllUnloadCallback(PVOID DllBase)
{
  return LdrUnloadDll(DllBase);
}
