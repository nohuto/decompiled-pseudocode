/*
 * XREFs of ZwQueryMultipleValueKey @ 0x1406A9FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
