/*
 * XREFs of ZwRestoreKey @ 0x1406A9530
 * Callers:
 *     DifZwRestoreKeyWrapper @ 0x140647710 (DifZwRestoreKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle);
}
