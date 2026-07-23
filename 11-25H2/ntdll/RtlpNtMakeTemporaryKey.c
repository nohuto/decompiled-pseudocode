/*
 * XREFs of RtlpNtMakeTemporaryKey @ 0x18014CB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlpNtMakeTemporaryKey(HANDLE KeyHandle)
{
  return NtDeleteKey(KeyHandle);
}
