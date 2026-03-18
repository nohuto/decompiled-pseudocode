/*
 * XREFs of ZwRenameKey @ 0x1406A9430
 * Callers:
 *     DifZwRenameKeyWrapper @ 0x140647130 (DifZwRenameKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, NewName);
}
