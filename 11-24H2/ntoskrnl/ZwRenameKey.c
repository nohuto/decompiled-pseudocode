/*
 * XREFs of ZwRenameKey @ 0x1406AA3D0
 * Callers:
 *     DifZwRenameKeyWrapper @ 0x1406456F0 (DifZwRenameKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
