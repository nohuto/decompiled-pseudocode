/*
 * XREFs of NtPropagationComplete @ 0x1404F99D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPropagationComplete(
        HANDLE ResourceManagerHandle,
        ULONG RequestCookie,
        ULONG BufferLength,
        PVOID Buffer)
{
  return __imp_NtPropagationComplete(ResourceManagerHandle, RequestCookie, BufferLength, Buffer);
}
