/*
 * XREFs of ZwRestoreKey @ 0x1406AA4D0
 * Callers:
 *     DifZwRestoreKeyWrapper @ 0x140645CD0 (DifZwRestoreKeyWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
